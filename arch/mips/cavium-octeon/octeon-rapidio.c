/**
 * Driver for the Octeon Serial Rapid IO interfaces introduced in CN63XX.
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2009-2012 Cavium, Inc.
 */

#include <linux/rio.h>
#include <linux/rio_drv.h>
#include <linux/interrupt.h>
#include <linux/netdevice.h>
#include <linux/sched.h>
#include <linux/module.h>

#include <asm/octeon/octeon.h>
#include <asm/octeon/cvmx-srio.h>
#include <asm/octeon/cvmx-sriox-defs.h>
#include <asm/octeon/cvmx-sli-defs.h>
#include <asm/octeon/cvmx-pexp-defs.h>
#include <asm/octeon/cvmx-sriomaintx-defs.h>
#include <asm/octeon/cvmx-dma-engine.h>
#include <asm/octeon/cvmx-fpa1.h>
#include <asm/octeon/cvmx-config.h>
#include <asm/octeon/cvmx-helper.h>
#include <asm/octeon/cvmx-qlm.h>

#define RIO_PRINTK(mport, fmt, ...) \
	pr_info("SRIO%d: " fmt, (mport)->id, ##__VA_ARGS__)
#define DEBUG_MBOX(mport, dir, mbox, fmt, ...) \
	RIO_PRINTK(mport, "%s MBOX %d " fmt, dir, mbox, ##__VA_ARGS__)
#define DEBUG_PACKET(mport, dir, fmt, ...) \
	RIO_PRINTK(mport, "%s PACKET " fmt, dir, ##__VA_ARGS__)
#define DEBUG_IRQ(mport, fmt, ...) \
	RIO_PRINTK(mport, fmt, ##__VA_ARGS__)

#define OCTEON_RIO_ID 0 /* Which source ID to use. 0=Primary, 1=Secondary */
#define OCTEON_RIO_DOORBELL_PRIORITY 0 /* Priority for sent doorbells (0-3) */

struct octeon_rio_port {
	struct rio_mport mport;
	struct work_struct work;
	spinlock_t lock;
};

static struct octeon_rio_port * mport2oct(struct rio_mport *mport)
{
	return container_of(mport, struct octeon_rio_port, mport);
}

/**
 * Local config read
 *
 * @mport:    RapidIO Master port info
 * @mport_id: Always the same as mport->id
 * @offset:   Config space register
 * @len:      Length of the read (1,2, or 4 bytes)
 * @data:     Resulting data
 *
 * Returns Zero on success, negative on failure
 */
static int octeon_rio_lcread(struct rio_mport *mport, int mport_id, u32 offset,
			     int len, u32 *data)
{
	int return_code;
	unsigned long flags;

	if (len != 4) {
		/*
		 * The kernel's RapidIO system defines 8 and 16 bit
		 * accesses, but the RapidIO spec says these are
		 * illegal.
		 */
		RIO_PRINTK(mport,
			   "ERROR: local config read with illegal length (offset=0x%x, len=%d)\n",
			   offset, len);
		return -EINVAL;
	}
	spin_lock_irqsave(&mport2oct(mport)->lock, flags);
	if (cvmx_srio_config_read32(mport_id, OCTEON_RIO_ID, -1, 0, 0,
		offset, data))
		return_code = -EIO;
	else
		return_code = 0;
	spin_unlock_irqrestore(&mport2oct(mport)->lock, flags);
	return return_code;
}

/**
 * Local config write
 *
 * @mport:    RapidIO Master port info
 * @mport_id: Always the same as mport->id
 * @offset:   Config space register
 * @len:      Length of the write (1,2, or 4 bytes)
 * @data:     Data to write
 *
 * Returns Zero on success, negative on failure
 */
static int octeon_rio_lcwrite(struct rio_mport *mport, int mport_id, u32 offset,
			      int len, u32 data)
{
	int return_code;
	unsigned long flags;

	if (len != 4) {
		/*
		 * The kernel's RapidIO system defines 8 and 16 bit
		 * accesses, but the RapidIO spec says these are
		 * illegal.
		 */
		RIO_PRINTK(mport,
			   "ERROR: local config write with illegal length (offset=0x%x, len=%d)\n",
			   offset, len);
		return -EINVAL;
	}

	spin_lock_irqsave(&mport2oct(mport)->lock, flags);
	if (cvmx_srio_config_write32(mport_id, OCTEON_RIO_ID, -1, 0, 0, offset,
		data))
		return_code = -EIO;
	else
		return_code = 0;
	spin_unlock_irqrestore(&mport2oct(mport)->lock, flags);
	return return_code;
}

/**
 * Remote config read
 *
 * @mport:    RapidIO Master port info
 * @mport_id: Always the same as mport->id
 * @destid:   Remote destination ID
 * @hopcount: Number of hops to the device
 * @offset:   Config space register
 * @len:      Length of the read (1,2, or 4 bytes)
 * @data:     Resulting data
 *
 * Returns Zero on success, negative on failure
 */
static int octeon_rio_cread(struct rio_mport *mport, int mport_id, u16 destid,
			    u8 hopcount, u32 offset, int len, u32 *data)
{
	int return_code;
	unsigned long flags;

	if (len != 4) {
		/*
		 * The kernel's RapidIO system defines 8 and 16 bit
		 * accesses, but the RapidIO spec says these are
		 * illegal.
		 */
		RIO_PRINTK(mport,
			   "ERROR: config read with illegal length (destid=0x%x, hopcount=%d, offset=0x%x, len=%d)\n",
			   0xffff & destid, 0xff & hopcount, offset, len);
		return -EINVAL;
	}

	spin_lock_irqsave(&mport2oct(mport)->lock, flags);
	if (cvmx_srio_config_read32(mport_id, OCTEON_RIO_ID, destid,
		mport->sys_size, hopcount, offset, data))
		return_code = -EIO;
	else
		return_code = 0;
	spin_unlock_irqrestore(&mport2oct(mport)->lock, flags);
	return return_code;
}

/**
 * Remote config write
 *
 * @mport:    RapidIO Master port info
 * @mport_id: Always the same as mport->id
 * @destid:   Remote destination ID
 * @hopcount: Number of hops to the device
 * @offset:   Config space register
 * @len:      Length of the write (1,2, or 4 bytes)
 * @data:     Write data
 *
 * Returns Zero on success, negative on failure
 */
static int octeon_rio_cwrite(struct rio_mport *mport, int mport_id, u16 destid,
			     u8 hopcount, u32 offset, int len, u32 data)
{
	int return_code;
	unsigned long flags;

	if (len != 4) {
		/*
		 * The kernel's RapidIO system defines 8 and 16 bit
		 * accesses, but the RapidIO spec says these are
		 * illegal.
		 */
		RIO_PRINTK(mport,
			   "ERROR: config write with illegal length(destid=0x%x, hopcount=%d, offset=0x%x, len=%d)\n",
			   0xffff & destid, 0xff & hopcount, offset, len);
		return -EINVAL;
	}

	spin_lock_irqsave(&mport2oct(mport)->lock, flags);
	if (cvmx_srio_config_write32(mport_id, OCTEON_RIO_ID, destid,
		mport->sys_size, hopcount, offset, data))
		return_code = -EIO;
	else
		return_code = 0;
	spin_unlock_irqrestore(&mport2oct(mport)->lock, flags);
	return return_code;
}

/**
 * Remote doorbell send
 *
 * @mport:    RapidIO Master port info
 * @mport_id: Always the same as mport->id
 * @destid:   Remote destination ID
 * @data:     Data for doorbell
 *
 * Returns Zero on success, negative on failure
 */
static int octeon_rio_dsend(struct rio_mport *mport, int mport_id, u16 destid,
			    u16 data)
{
	int return_code;
	unsigned long flags;

	spin_lock_irqsave(&mport2oct(mport)->lock, flags);
	return_code = cvmx_srio_send_doorbell(mport_id, OCTEON_RIO_ID, destid,
		mport->sys_size, OCTEON_RIO_DOORBELL_PRIORITY, data);
	spin_unlock_irqrestore(&mport2oct(mport)->lock, flags);
	return return_code;
}

/**
 * Map a remote SRIO device's memory resource into the local
 * physical space.
 *
 * @mport:  RapidIO Master port info
 * @rdev:   Remote RapidIO device
 * @offset: Offset into the remote device's memory space
 * @length: Length of window to map
 *
 * Returns Local physical address to use for resource access, or 0 on
 *         failure.
 */
static phys_t octeon_rio_mem_map(struct rio_mport *mport, struct rio_dev *rdev,
				 u64 offset, u64 length)
{
	int priority = 0;
	phys_t return_code;
	unsigned long flags;

	spin_lock_irqsave(&mport2oct(mport)->lock, flags);
	return_code = cvmx_srio_physical_map(mport->id, CVMX_SRIO_WRITE_MODE_AUTO,
		priority, CVMX_SRIO_READ_MODE_NORMAL, priority,
		OCTEON_RIO_ID, rdev->destid, mport->sys_size, offset, length);
	spin_unlock_irqrestore(&mport2oct(mport)->lock, flags);
	return return_code;
}

/**
 * Unmap a remote resource mapped using octeon_rio_mem_map()
 *
 * @mport:  RapidIO Master port info
 * @rdev:   Remote RapidIO device
 * @offset: Offset into the remote device's memory space
 * @length: Length of window to map
 * @physical_map:
 *               Physical address the resource was mapped at
 */
static void octeon_rio_mem_unmap(struct rio_mport *mport, struct rio_dev *rdev,
				 u64 offset, u64 length, phys_t physical_map)
{
	unsigned long flags;

	spin_lock_irqsave(&mport2oct(mport)->lock, flags);
	cvmx_srio_physical_unmap(physical_map, length);
	spin_unlock_irqrestore(&mport2oct(mport)->lock, flags);
}

/**
 * DMA to/from a SRIO device using Octeon's internal DMA engines
 *
 * @rdev:       Device to DMA to/from
 * @local_addr: Local memory physical address to DMA to
 * @remote_addr:
 *                   SRIO device memory address
 * @size:       Size ofthe DMA in bytes
 * @is_outbound:
 *                   Non zero of the DMA is from Octoen to the device
 *
 * Returns Zero on success, negative on failure
 */
int octeon_rio_dma_mem(struct rio_dev *rdev, u64 local_addr,
		       u64 remote_addr, int size, int is_outbound)
{
	int result;
	volatile u8 dma_busy = 1;
	cvmx_dma_engine_header_t header;
	phys_t memmap;
	int subdid;
	union cvmx_sli_mem_access_subidx sli_mem_access;
	u64 sli_address;

	/* Setup the SLI memmory mappings to access the SRIO device */
	memmap = octeon_rio_mem_map(rdev->net->hport, rdev, remote_addr, size);
	if (!memmap)
		return -1;

	/* Extract the SLI address from the core physical address */
	subdid = (((memmap >> 40) & 7) << 2) | ((memmap >> 34) & 3);
	sli_mem_access.u64 = cvmx_read_csr(CVMX_PEXP_SLI_MEM_ACCESS_SUBIDX(subdid));
	sli_address = (u64)sli_mem_access.cn63xx.ba << 34;
	sli_address += memmap & 0x3ffffffffull;

	/* Create the DMA header */
	header.word0.u64 = 0;
	header.word0.cn38xx.fport = 0;
	header.word0.cn38xx.lport = rdev->net->hport->id;
	header.word0.cn38xx.type = (is_outbound) ? CVMX_DMA_ENGINE_TRANSFER_OUTBOUND :
		CVMX_DMA_ENGINE_TRANSFER_INBOUND;
	header.word0.cn38xx.addr = virt_to_phys(&dma_busy);

	/* Do the DMA */
	result = cvmx_dma_engine_transfer(0, header, local_addr,
					  sli_address, size);
	if (result == 0) {
		/* Wait for the DMA to complete */
		while (dma_busy)
			yield();
	}

	/* Unmap the SLI memory region */
	octeon_rio_mem_unmap(rdev->net->hport, rdev, remote_addr, size, memmap);

	return result;
}

/**
 * Add message to outbound mailbox
 *
 * @mport:  RapidIO Master port info
 * @rdev:   RIO device the message is be sent to
 * @mbox:   The outbound mailbox queue
 * @buffer: Pointer to the message buffer
 * @length: Length of the message buffer
 *
 * Returns Zero on success, negative on failure
 */
int rio_hw_add_outb_message(struct rio_mport *mport, struct rio_dev *rdev,
			    int mbox, void *buffer, size_t length)
{
	DEBUG_MBOX(mport, "OUT", mbox,
		   "send message(rdev=%p, buffer=%p, length=%lu)\n", rdev,
		   buffer, length);
	/*
	 * The current implementation of the rionet network driver
	 * assumes that outbound buffers must be freed in the callback
	 * routine for message complete. This means we can't use the
	 * PKO free to FPA pool function. We also need to add an
	 * Octeon specific SRIO header, so we might need a gather
	 * list.
	 */
	return -EINVAL;
}

/**
 * Add empty buffer to inbound mailbox
 *
 * @mport:  RapidIO Master port info
 * @mbox:   The inbound mailbox number
 * @buffer: Pointer to the message buffer
 *
 * Returns Zero on success, negative on failure
 */
int rio_hw_add_inb_buffer(struct rio_mport *mport, int mbox, void *buffer)
{
	DEBUG_MBOX(mport, "IN", mbox, "add buffer %p\n", buffer);
	/*
	 * The current implementation of the rionet network driver
	 * assumes that the buffers are used in FIFO order and will
	 * always be returned in that same order. This doesn't play
	 * well with Octeon's FPA pools.
	 */
	return -EINVAL;
}

/**
 * Get the next pending inbound message from a mailbox
 *
 * @mport:  RapidIO Master port info
 * @mbox:   The inbound mailbox number
 *
 * Returns Mailbox message pointer, or NULL.
 */
void *rio_hw_get_inb_message(struct rio_mport *mport, int mbox)
{
	DEBUG_MBOX(mport, "IN", mbox, "receive message\n");
	/*
	 * The current implementation of the rionet network driver
	 * assumes that the buffers are used in FIFO order and will
	 * always be returned in that same order. This doesn't play
	 * well with Octeon's FPA pools.
	 */
	return NULL;
}

/**
 * Open an inbound mailbox
 *
 * @mport:   RapidIO Master port info
 * @dev_id:  Device specific pointer to pass on event
 * @mbox:    The inbound mailbox number
 * @entries: Number of entries allowed in the incomming queue
 *
 * Returns Zero on success, negative on failure
 */
int rio_open_inb_mbox(struct rio_mport *mport, void *dev_id, int mbox,
		      int entries)
{
	DEBUG_MBOX(mport, "IN", mbox, "open(dev_id=%p, entries=%d)\n", dev_id,
		   entries);
	return -EINVAL;
}

/**
 * Close an inbound mailbox
 *
 * @mport:  RapidIO Master port info
 * @mbox:   The inbound mailbox number
 */
void rio_close_inb_mbox(struct rio_mport *mport, int mbox)
{
	DEBUG_MBOX(mport, "IN", mbox, "close\n");
}

/**
 * Open an outbound mailbox
 *
 * @mport:   RapidIO Master port info
 * @dev_id:  Device specific pointer to pass on event
 * @mbox:    The outbound mailbox number
 * @entries: Number of entries allowed in the outgoing queue
 *
 * Returns Zero on success, negative on failure
 */
int rio_open_outb_mbox(struct rio_mport *mport, void *dev_id, int mbox,
		       int entries)
{
	DEBUG_MBOX(mport, "OUT", mbox, "open(dev_id=%p, entries=%d)\n", dev_id,
		   entries);
	return -EINVAL;
}

/**
 * Close an outbound mailbox
 *
 * @mport:  RapidIO Master port info
 * @mbox:   The outbound mailbox number
 */
void rio_close_outb_mbox(struct rio_mport *mport, int mbox)
{
	DEBUG_MBOX(mport, "OUT", mbox, "close\n");
}

/**
 * Function to process incomming doorbells
 *
 * @mport:  SRIO port to check
 */
static void octeon_rio_rx_doorbell(struct rio_mport *mport)
{
	enum cvmx_srio_doorbell_status status;
	int destid_index;
	u32 sequence_num;
	int srcid;
	int priority;
	int is16bit;
	u16 data;
	struct rio_dbell *dbell;
	unsigned long flags;

	while (1) {
		spin_lock_irqsave(&mport2oct(mport)->lock, flags);
		status = cvmx_srio_receive_doorbell(mport->id, &destid_index,
			&sequence_num, &srcid, &priority, &is16bit, &data);
		spin_unlock_irqrestore(&mport2oct(mport)->lock, flags);
		if (status != CVMX_SRIO_DOORBELL_DONE)
			break;
		list_for_each_entry(dbell, &mport->dbells, node) {
			if ((dbell->res->start <= data) &&
			    (dbell->res->end >= data))
				dbell->dinb(mport, dbell->dev_id, srcid, data,
					data);
		}
	}
}

/**
 * Function to handle receiving a packet through the soft fifo
 *
 * @mport:  SRIO port to check
 */
static void octeon_rio_rx_soft_fifo(struct rio_mport *mport)
{
	int length = 8 + 256; /* SRIO header plus max of 256 byte */
	struct sk_buff *skb;
	unsigned long flags;

	skb = dev_alloc_skb(length);
	if (!skb) {
		RIO_PRINTK(mport, "Failed to allocate skb\n");
		return;
	}

	spin_lock_irqsave(&mport2oct(mport)->lock, flags);
	length = cvmx_srio_receive_spf(mport->id, skb->data, length);
	spin_unlock_irqrestore(&mport2oct(mport)->lock, flags);

	if (length > 0) {
		int ftype;
		int transaction;
		int tt;
		/* Update the SKB to match the length of data in it */
		__skb_put(skb, length);
		/*
		 * Figure out if this packet is a port write. The
		 * contents of the skb is the raw SRIO packet without
		 * the first ackID and CRF byte.
		 */
		tt = (skb->data[0]>>4) & 3; /* 0=8bit, 1=16bit IDs */
		ftype = skb->data[0] & 0xf; /* Port write is type 8 */
		/*
		 * The transaction type is after the IDs, so it moves
		 * based on their size.
		 */
		transaction = skb->data[(tt) ? 5 : 3] >> 4;
		/* Call the port write handler if this is a port write */
		if ((ftype == 0x8) && (transaction == 0x4)) {
			DEBUG_PACKET(mport, "RX", "%d byte port write\n",
				skb->len);
			rio_inb_pwrite_handler((union rio_pw_msg *)
				(skb->data + ((tt) ? 11 : 9)));
		} else
			DEBUG_PACKET(mport, "RX", "%d byte unknown packet\n",
				skb->len);
	}
	dev_kfree_skb_any(skb);
}

/**
 * Function to handle completion status of TX doorbells
 *
 * @mport:  SRIO port to check
 */
static void octeon_rio_tx_doorbell(struct rio_mport *mport)
{
	unsigned long flags;
	enum cvmx_srio_doorbell_status status;

	spin_lock_irqsave(&mport2oct(mport)->lock, flags);
	status = cvmx_srio_send_doorbell_status(mport->id);
	spin_unlock_irqrestore(&mport2oct(mport)->lock, flags);

	switch (status) {
	case CVMX_SRIO_DOORBELL_DONE:
		DEBUG_IRQ(mport, "TX doorbell complete\n");
		break;
	case CVMX_SRIO_DOORBELL_NONE:
		break;
	case CVMX_SRIO_DOORBELL_BUSY:
		DEBUG_IRQ(mport, "TX doorbell busy\n");
		break;
	case CVMX_SRIO_DOORBELL_RETRY:
		DEBUG_IRQ(mport, "TX doorbell needs retry\n");
		break;
	case CVMX_SRIO_DOORBELL_ERROR:
		DEBUG_IRQ(mport, "TX doorbell error\n");
		break;
	case CVMX_SRIO_DOORBELL_TMOUT:
		DEBUG_IRQ(mport, "TX doorbell timeout\n");
		break;
	}
}

/*
 * Since SRIO interrupts also propagate to CIU_INTX_SUM0[RML] without
 * any mask bits, we need to manually enable and disable SRIO interrupts
 * as a set. This macro sets the bits we care about in the enable and
 * status register.
 */
#define SET_IRQ_FIELD_BITS(reg, value)  \
	reg.s.link_dwn = value;         \
	reg.s.link_up = value;          \
	reg.s.rxbell = value;           \
	reg.s.bell_err = value;         \
	reg.s.txbell = value;           \
	reg.s.soft_rx = value;

/**
 * Enable or disable SRIO interrupts this driver cares about.
 *
 * @mport:  SRIO master port to enable/disable is for
 * @enable:
 */
static void octeon_rio_irq_set_enable(struct rio_mport *mport, int enable)
{
	union cvmx_sriox_int_enable int_enable;
	/* Enable the interrupts we care about */
	int_enable.u64 = cvmx_read_csr(CVMX_SRIOX_INT_ENABLE(mport->id));
	SET_IRQ_FIELD_BITS(int_enable, enable);
	cvmx_write_csr(CVMX_SRIOX_INT_ENABLE(mport->id), int_enable.u64);
}

/**
 * Translate an SRIO master port ID to Octeon IRQ number.
 *
 * @mport:  SRIO master port
 *
 * Returns IRQ number. -1 if mismatch.
 */
static int octeon_rio_mport2irq(struct rio_mport *mport)
{
	switch (mport->id) {
	case 0: return OCTEON_IRQ_SRIO0;
	case 1: return OCTEON_IRQ_SRIO1;
	case 2: return OCTEON_IRQ_SRIO2;
	case 3: return OCTEON_IRQ_SRIO3;
	default: return -1;
	}
}

/**
 * Delayed work handler for SRIO.
 *
 * @work:   Work to process
 */
static void octeon_rio_work(struct work_struct *work)
{
	struct octeon_rio_port *my_port = container_of(work,
						       struct octeon_rio_port,
						       work);
	struct rio_mport *mport = &my_port->mport;
	union cvmx_sriox_int_reg int_reg;
	union cvmx_sriox_int_reg int_reg_clear;

	/* Get which interrupt fired */
	int_reg.u64 = cvmx_read_csr(CVMX_SRIOX_INT_REG(mport->id));

	/*
	 * Clear the interrupts before we start processing them. SRIO
	 * interrupts also propagate to CIU_INTX_SUM0[RML] without any
	 * masks. This handler cares about some of these interrupts,
	 * but not others. It must be careful to clear enables and
	 * status for the bits it cares about to stop a possble
	 * interrupt lockup where other SRIO error handlers off of
	 * CIU_INTX_SUM0[RML] run at interrupt context.
	 */
	int_reg_clear.u64 = 0;
	SET_IRQ_FIELD_BITS(int_reg_clear, 1);
	int_reg_clear.u64 &= int_reg.u64;
	cvmx_write_csr(CVMX_SRIOX_INT_REG(mport->id), int_reg_clear.u64);

	/* SRIO Link transitioned up */
	if (int_reg.s.link_up)
		DEBUG_IRQ(mport, "Link up\n");

	/* SRIO Link transitioned down */
	if (int_reg.s.link_dwn)
		DEBUG_IRQ(mport, "Link down\n");

	/* Received a doorbell */
	if (int_reg.s.rxbell)
		octeon_rio_rx_doorbell(mport);

	/* Received a packet to the soft fifo */
	if (int_reg.s.soft_rx)
		octeon_rio_rx_soft_fifo(mport);

	/* TX doorbell */
	if (int_reg.s.bell_err || int_reg.s.txbell)
		octeon_rio_tx_doorbell(mport);

	enable_irq(octeon_rio_mport2irq(mport));
	octeon_rio_irq_set_enable(mport, 1);
}

/**
 * Interrupt handler for SRIO.
 *
 * @irq:     IRQ number
 * @irq_arg: Rapid IO port structure
 *
 * Returns IRQ_HANDLED
 */
static irqreturn_t octeon_rio_irq(int irq, void *irq_arg)
{
	struct rio_mport *mport = (struct rio_mport *)irq_arg;
	struct octeon_rio_port *my_port = container_of(mport,
						       struct octeon_rio_port,
						       mport);

	octeon_rio_irq_set_enable(mport, 0);
	disable_irq_nosync(irq);
	schedule_work(&my_port->work);
	return IRQ_HANDLED;
}

extern int cvm_oct_mem_fill_fpa(int pool, int elements);
extern int cvm_oct_alloc_fpa_pool(int pool, int size);

static struct rio_ops octeon_rio_ops = {
	.lcread = octeon_rio_lcread,
	.lcwrite = octeon_rio_lcwrite,
	.cread = octeon_rio_cread,
	.cwrite = octeon_rio_cwrite,
	.dsend = octeon_rio_dsend,
};

static struct octeon_rio_port srio_ports[4];

/**
 * Initialize the RapidIO system
 *
 * Returns Zero on success, negative on failure.
 */
static int __init octeon_rio_init(void)
{
	int count = 0;
	int port_index = (OCTEON_IS_MODEL(OCTEON_CN66XX) ? 4 : 2);
	union cvmx_mio_rst_ctlx mio_rst_ctl;
	int srio_port;

	if (octeon_is_simulation())
		return 0;

	if (!octeon_has_feature(OCTEON_FEATURE_SRIO))
		return 0;

	for (srio_port = 0; srio_port < port_index; srio_port++) {
		if (OCTEON_IS_MODEL(OCTEON_CN66XX)) {
			enum cvmx_qlm_mode mode = cvmx_qlm_get_mode(0);

			switch (srio_port) {
			case 0:  /* 1x4 lane */
				if (mode != CVMX_QLM_MODE_SRIO_1X4 &&
				    mode != CVMX_QLM_MODE_SRIO_2X2 &&
				    mode != CVMX_QLM_MODE_SRIO_4X1)
					continue;
				break;

			case 2:  /* 2x2 lane */
				if (mode != CVMX_QLM_MODE_SRIO_2X2 &&
				    mode != CVMX_QLM_MODE_SRIO_4X1)
					continue;
				break;

			case 3:
				if (mode != CVMX_QLM_MODE_SRIO_4X1)
					continue;
				break;

			default:
				continue;
			}
			mio_rst_ctl.u64 = cvmx_read_csr(CVMX_MIO_RST_CNTLX(0));
		} else {
			union cvmx_sriox_status_reg sriox_status_reg;
			sriox_status_reg.u64 =
				cvmx_read_csr(CVMX_SRIOX_STATUS_REG(srio_port));
			if (!sriox_status_reg.s.srio)
				continue;
			mio_rst_ctl.u64 = cvmx_read_csr(CVMX_MIO_RST_CTLX(srio_port));
		}
		INIT_WORK(&srio_ports[srio_port].work, octeon_rio_work);
		/* Only host mode ports enumerate. Endpoint does discovery */
		if (mio_rst_ctl.s.prtmode)
			srio_ports[srio_port].mport.host_deviceid = srio_port;
		else
			srio_ports[srio_port].mport.host_deviceid = -1;
		srio_ports[srio_port].mport.ops = &octeon_rio_ops;
		srio_ports[srio_port].mport.id = srio_port;
		srio_ports[srio_port].mport.index = 0;
		srio_ports[srio_port].mport.sys_size = 0;
		srio_ports[srio_port].mport.iores.start =
			CVMX_SRIOX_STATUS_REG(srio_port) & ((1ull << 49) - 1);
		srio_ports[srio_port].mport.iores.end =
			srio_ports[srio_port].mport.iores.start + 256;
		srio_ports[srio_port].mport.iores.flags = IORESOURCE_MEM;
		srio_ports[srio_port].mport.iores.name = "SRIO CSRs";
		srio_ports[srio_port].mport.phy_type = RIO_PHY_SERIAL;
		INIT_LIST_HEAD(&srio_ports[srio_port].mport.dbells);
		rio_init_dbell_res(&srio_ports[srio_port].mport.riores[
			RIO_DOORBELL_RESOURCE], 0, 0xffff);
		rio_init_mbox_res(&srio_ports[srio_port].mport.riores[
			RIO_INB_MBOX_RESOURCE], 0, 0);
		rio_init_mbox_res(&srio_ports[srio_port].mport.riores[
			RIO_OUTB_MBOX_RESOURCE], 0, 0);
		sprintf(srio_ports[srio_port].mport.name, "SRIO%d", srio_port);
		spin_lock_init(&srio_ports[srio_port].lock);
		RIO_PRINTK(&srio_ports[srio_port].mport, "Registering port\n");
		if (cvmx_srio_initialize(srio_port, 0) == 0) {
			count++;
			rio_register_mport(&srio_ports[srio_port].mport);
			if (request_irq(octeon_rio_mport2irq(
				&srio_ports[srio_port].mport),
				octeon_rio_irq, IRQF_SHARED,
				srio_ports[srio_port].mport.name,
				&srio_ports[srio_port].mport)) {
				RIO_PRINTK(&srio_ports[srio_port].mport,
					"Failed to register IRQ handler\n");
			} else
				octeon_rio_irq_set_enable(&srio_ports[srio_port].mport, 1);
		}
	}
	if (count) {
		int r;
		cvmx_fpa1_enable();
		r = cvm_oct_alloc_fpa_pool(CVMX_FPA_OUTPUT_BUFFER_POOL,
					   CVMX_FPA_OUTPUT_BUFFER_POOL_SIZE);
		if (r < 0)
			panic("cvm_oct_alloc_fpa_pool() failed.");
		cvm_oct_mem_fill_fpa(CVMX_FPA_OUTPUT_BUFFER_POOL, 128);
		cvmx_dma_engine_initialize();
	}

	/*
	 * The links sometimes take a little bit to come up. Delay a
	 * half second. Linux currently doesn't ever try to enumerate
	 * if the links come up after this call.
	 */
	msleep(500);
	/* rio_init_mports(); is now called by the core in device_initcall_sync() */
	return 0;
}
device_initcall(octeon_rio_init);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Cavium Inc. <support@cavium.com>");
MODULE_DESCRIPTION("Cavium Inc. Rapid IO driver.");
