/***********************license start***************
 * Copyright (c) 2003-2014  Cavium Inc. (support@cavium.com). All rights
 * reserved.
 *
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.

 *   * Neither the name of Cavium Inc. nor the names of
 *     its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written
 *     permission.

 * This Software, including technical data, may be subject to U.S. export  control
 * laws, including the U.S. Export Administration Act and its  associated
 * regulations, and may be subject to export or import  regulations in other
 * countries.

 * TO THE MAXIMUM EXTENT PERMITTED BY LAW, THE SOFTWARE IS PROVIDED "AS IS"
 * AND WITH ALL FAULTS AND CAVIUM INC. MAKES NO PROMISES, REPRESENTATIONS OR
 * WARRANTIES, EITHER EXPRESS, IMPLIED, STATUTORY, OR OTHERWISE, WITH RESPECT TO
 * THE SOFTWARE, INCLUDING ITS CONDITION, ITS CONFORMITY TO ANY REPRESENTATION OR
 * DESCRIPTION, OR THE EXISTENCE OF ANY LATENT OR PATENT DEFECTS, AND CAVIUM
 * SPECIFICALLY DISCLAIMS ALL IMPLIED (IF ANY) WARRANTIES OF TITLE,
 * MERCHANTABILITY, NONINFRINGEMENT, FITNESS FOR A PARTICULAR PURPOSE, LACK OF
 * VIRUSES, ACCURACY OR COMPLETENESS, QUIET ENJOYMENT, QUIET POSSESSION OR
 * CORRESPONDENCE TO DESCRIPTION. THE ENTIRE  RISK ARISING OUT OF USE OR
 * PERFORMANCE OF THE SOFTWARE LIES WITH YOU.
 ***********************license end**************************************/


/**
 * cvmx-gserx-defs.h
 *
 * Configuration and status register (CSR) type definitions for
 * Octeon gserx.
 *
 * This file is auto generated. Do not edit.
 *
 * <hr>$Revision$<hr>
 *
 */
#ifndef __CVMX_GSERX_DEFS_H__
#define __CVMX_GSERX_DEFS_H__

#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_ANA_ATEST(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_ANA_ATEST(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000800ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_ANA_ATEST(block_id) (CVMX_ADD_IO_SEG(0x0001180090000800ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_ANA_SEL(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_ANA_SEL(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000808ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_ANA_SEL(block_id) (CVMX_ADD_IO_SEG(0x0001180090000808ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_BR_RXX_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_BR_RXX_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000400ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128;
}
#else
#define CVMX_GSERX_BR_RXX_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000400ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_BR_RXX_EER(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_BR_RXX_EER(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000418ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128;
}
#else
#define CVMX_GSERX_BR_RXX_EER(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000418ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_BR_TXX_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_BR_TXX_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000420ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128;
}
#else
#define CVMX_GSERX_BR_TXX_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000420ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_BR_TXX_CUR(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_BR_TXX_CUR(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000438ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128;
}
#else
#define CVMX_GSERX_BR_TXX_CUR(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000438ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_CFG(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_CFG(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000080ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_CFG(block_id) (CVMX_ADD_IO_SEG(0x0001180090000080ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DBG(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_DBG(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000098ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_DBG(block_id) (CVMX_ADD_IO_SEG(0x0001180090000098ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_LOOPBK_EN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_LOOPBK_EN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001008ull);
}
#else
#define CVMX_GSERX_DLMX_LOOPBK_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001008ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_LOS_BIAS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_LOS_BIAS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001010ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_LOS_BIAS(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001010ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_LOS_LEVEL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_LOS_LEVEL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001018ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_LOS_LEVEL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001018ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_MISC_STATUS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_MISC_STATUS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000000ull);
}
#else
#define CVMX_GSERX_DLMX_MISC_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000000ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_MPLL_EN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_MPLL_EN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001020ull);
}
#else
#define CVMX_GSERX_DLMX_MPLL_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001020ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_MPLL_HALF_RATE(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_MPLL_HALF_RATE(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001028ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_MPLL_HALF_RATE(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001028ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_MPLL_MULTIPLIER(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_MPLL_MULTIPLIER(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001030ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_MPLL_MULTIPLIER(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001030ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_MPLL_STATUS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_MPLL_STATUS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_MPLL_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_PHY_RESET(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_PHY_RESET(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001038ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_PHY_RESET(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001038ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_REFCLK_SEL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_REFCLK_SEL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000008ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_REFCLK_SEL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000008ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_REF_CLKDIV2(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_REF_CLKDIV2(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001040ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_REF_CLKDIV2(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001040ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_REF_SSP_EN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_REF_SSP_EN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001048ull);
}
#else
#define CVMX_GSERX_DLMX_REF_SSP_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001048ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_REF_USE_PAD(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_REF_USE_PAD(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001050ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_REF_USE_PAD(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001050ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_RX_DATA_EN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_RX_DATA_EN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090002008ull);
}
#else
#define CVMX_GSERX_DLMX_RX_DATA_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002008ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_RX_EQ(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_RX_EQ(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090002010ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_RX_EQ(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002010ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_RX_LOS_EN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_RX_LOS_EN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090002018ull);
}
#else
#define CVMX_GSERX_DLMX_RX_LOS_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002018ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_RX_PLL_EN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_RX_PLL_EN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090002020ull);
}
#else
#define CVMX_GSERX_DLMX_RX_PLL_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002020ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_RX_RATE(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_RX_RATE(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090002028ull);
}
#else
#define CVMX_GSERX_DLMX_RX_RATE(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002028ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_RX_RESET(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_RX_RESET(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090002030ull);
}
#else
#define CVMX_GSERX_DLMX_RX_RESET(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002030ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_RX_STATUS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_RX_STATUS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090002000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_RX_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_RX_TERM_EN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_RX_TERM_EN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090002038ull);
}
#else
#define CVMX_GSERX_DLMX_RX_TERM_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002038ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TEST_BYPASS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TEST_BYPASS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001058ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_TEST_BYPASS(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001058ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TEST_POWERDOWN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TEST_POWERDOWN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001060ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_TEST_POWERDOWN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001060ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TX_AMPLITUDE(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TX_AMPLITUDE(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090003008ull);
}
#else
#define CVMX_GSERX_DLMX_TX_AMPLITUDE(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003008ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TX_CM_EN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TX_CM_EN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090003010ull);
}
#else
#define CVMX_GSERX_DLMX_TX_CM_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003010ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TX_DATA_EN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TX_DATA_EN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090003018ull);
}
#else
#define CVMX_GSERX_DLMX_TX_DATA_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003018ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TX_EN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TX_EN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090003020ull);
}
#else
#define CVMX_GSERX_DLMX_TX_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003020ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TX_PREEMPH(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TX_PREEMPH(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090003028ull);
}
#else
#define CVMX_GSERX_DLMX_TX_PREEMPH(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003028ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TX_RATE(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TX_RATE(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090003030ull);
}
#else
#define CVMX_GSERX_DLMX_TX_RATE(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003030ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TX_RESET(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TX_RESET(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090003038ull);
}
#else
#define CVMX_GSERX_DLMX_TX_RESET(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003038ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TX_STATUS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TX_STATUS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090003000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_TX_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TX_TERM_OFFSET(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TX_TERM_OFFSET(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090003040ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_TX_TERM_OFFSET(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003040ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_EQ_WAIT_TIME(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_EQ_WAIT_TIME(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800904E0000ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_EQ_WAIT_TIME(block_id) (CVMX_ADD_IO_SEG(0x00011800904E0000ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_GLBL_TAD(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_GLBL_TAD(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090460400ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_GLBL_TAD(block_id) (CVMX_ADD_IO_SEG(0x0001180090460400ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_GLBL_TM_ADMON(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_GLBL_TM_ADMON(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090460408ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_GLBL_TM_ADMON(block_id) (CVMX_ADD_IO_SEG(0x0001180090460408ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_IDDQ_MODE(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_IDDQ_MODE(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000018ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_IDDQ_MODE(block_id) (CVMX_ADD_IO_SEG(0x0001180090000018ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_LBERT_CFG(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_LBERT_CFG(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904C0020ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_LBERT_CFG(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904C0020ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_LBERT_ECNT(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_LBERT_ECNT(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904C0028ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_LBERT_ECNT(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904C0028ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_LBERT_PAT_CFG(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_LBERT_PAT_CFG(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904C0018ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_LBERT_PAT_CFG(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904C0018ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_MISC_CFG_0(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_MISC_CFG_0(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904C0000ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_MISC_CFG_0(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904C0000ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_MISC_CFG_1(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_MISC_CFG_1(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904C0008ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_MISC_CFG_1(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904C0008ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_PCS_CTLIFC_0(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_PCS_CTLIFC_0(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904C0060ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_PCS_CTLIFC_0(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904C0060ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_PCS_CTLIFC_1(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_PCS_CTLIFC_1(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904C0068ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_PCS_CTLIFC_1(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904C0068ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_PCS_CTLIFC_2(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_PCS_CTLIFC_2(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904C0070ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_PCS_CTLIFC_2(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904C0070ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_PMA_LOOPBACK_CTRL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_PMA_LOOPBACK_CTRL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904400D0ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_PMA_LOOPBACK_CTRL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904400D0ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_PWR_CTRL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_PWR_CTRL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904400D8ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_PWR_CTRL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904400D8ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_RX_AEQ_OUT_0(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_RX_AEQ_OUT_0(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090440280ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_RX_AEQ_OUT_0(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440280ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_RX_AEQ_OUT_1(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_RX_AEQ_OUT_1(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090440288ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_RX_AEQ_OUT_1(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440288ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_RX_AEQ_OUT_2(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_RX_AEQ_OUT_2(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090440290ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_RX_AEQ_OUT_2(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440290ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_RX_CFG_0(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_RX_CFG_0(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090440000ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_RX_CFG_0(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440000ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_RX_CFG_1(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_RX_CFG_1(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090440008ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_RX_CFG_1(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440008ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_RX_CFG_2(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_RX_CFG_2(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090440010ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_RX_CFG_2(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440010ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_RX_CFG_3(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_RX_CFG_3(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090440018ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_RX_CFG_3(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440018ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_RX_CFG_4(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_RX_CFG_4(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090440020ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_RX_CFG_4(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440020ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_RX_CFG_5(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_RX_CFG_5(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090440028ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_RX_CFG_5(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440028ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_RX_CTLE_CTRL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_RX_CTLE_CTRL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090440058ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_RX_CTLE_CTRL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440058ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_RX_LOOP_CTRL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_RX_LOOP_CTRL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090440048ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_RX_LOOP_CTRL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440048ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_RX_MISC_OVRRD(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_RX_MISC_OVRRD(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090440258ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_RX_MISC_OVRRD(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440258ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_RX_PRECORR_CTRL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_RX_PRECORR_CTRL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090440060ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_RX_PRECORR_CTRL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440060ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_RX_VALBBD_CTRL_0(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_RX_VALBBD_CTRL_0(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090440240ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_RX_VALBBD_CTRL_0(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440240ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_RX_VALBBD_CTRL_1(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_RX_VALBBD_CTRL_1(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090440248ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_RX_VALBBD_CTRL_1(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440248ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_RX_VALBBD_CTRL_2(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_RX_VALBBD_CTRL_2(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090440250ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_RX_VALBBD_CTRL_2(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440250ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_RX_VMA_CTRL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_RX_VMA_CTRL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090440200ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_RX_VMA_CTRL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440200ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_RX_VMA_STATUS_0(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_RX_VMA_STATUS_0(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904402B8ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_RX_VMA_STATUS_0(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904402B8ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_RX_VMA_STATUS_1(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_RX_VMA_STATUS_1(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904402C0ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_RX_VMA_STATUS_1(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904402C0ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_TX_CFG_0(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_TX_CFG_0(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904400A8ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_TX_CFG_0(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904400A8ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_TX_CFG_1(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_TX_CFG_1(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904400B0ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_TX_CFG_1(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904400B0ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_TX_CFG_2(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_TX_CFG_2(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904400B8ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_TX_CFG_2(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904400B8ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_TX_CFG_3(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_TX_CFG_3(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904400C0ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_TX_CFG_3(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904400C0ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_TX_PRE_EMPHASIS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_TX_PRE_EMPHASIS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904400C8ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_TX_PRE_EMPHASIS(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904400C8ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANE_LPBKEN(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_LANE_LPBKEN(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000110ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_LANE_LPBKEN(block_id) (CVMX_ADD_IO_SEG(0x0001180090000110ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANE_MODE(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_LANE_MODE(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000118ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_LANE_MODE(block_id) (CVMX_ADD_IO_SEG(0x0001180090000118ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANE_POFF(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_LANE_POFF(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000108ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_LANE_POFF(block_id) (CVMX_ADD_IO_SEG(0x0001180090000108ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANE_PX_MODE_0(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 11)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANE_PX_MODE_0(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904E0040ull) + (((offset) & 15) + ((block_id) & 15) * 0x80000ull) * 32;
}
#else
#define CVMX_GSERX_LANE_PX_MODE_0(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904E0040ull) + (((offset) & 15) + ((block_id) & 15) * 0x80000ull) * 32)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANE_PX_MODE_1(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 11)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANE_PX_MODE_1(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904E0048ull) + (((offset) & 15) + ((block_id) & 15) * 0x80000ull) * 32;
}
#else
#define CVMX_GSERX_LANE_PX_MODE_1(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904E0048ull) + (((offset) & 15) + ((block_id) & 15) * 0x80000ull) * 32)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANE_SRST(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_LANE_SRST(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000100ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_LANE_SRST(block_id) (CVMX_ADD_IO_SEG(0x0001180090000100ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANE_VMA_COARSE_CTRL_0(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_LANE_VMA_COARSE_CTRL_0(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800904E01B0ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_LANE_VMA_COARSE_CTRL_0(block_id) (CVMX_ADD_IO_SEG(0x00011800904E01B0ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANE_VMA_COARSE_CTRL_1(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_LANE_VMA_COARSE_CTRL_1(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800904E01B8ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_LANE_VMA_COARSE_CTRL_1(block_id) (CVMX_ADD_IO_SEG(0x00011800904E01B8ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANE_VMA_COARSE_CTRL_2(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_LANE_VMA_COARSE_CTRL_2(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800904E01C0ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_LANE_VMA_COARSE_CTRL_2(block_id) (CVMX_ADD_IO_SEG(0x00011800904E01C0ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANE_VMA_FINE_CTRL_0(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_LANE_VMA_FINE_CTRL_0(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800904E01C8ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_LANE_VMA_FINE_CTRL_0(block_id) (CVMX_ADD_IO_SEG(0x00011800904E01C8ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANE_VMA_FINE_CTRL_1(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_LANE_VMA_FINE_CTRL_1(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800904E01D0ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_LANE_VMA_FINE_CTRL_1(block_id) (CVMX_ADD_IO_SEG(0x00011800904E01D0ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANE_VMA_FINE_CTRL_2(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_LANE_VMA_FINE_CTRL_2(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800904E01D8ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_LANE_VMA_FINE_CTRL_2(block_id) (CVMX_ADD_IO_SEG(0x00011800904E01D8ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_PCS_CLK_REQ(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_PCS_CLK_REQ(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080478ull);
}
#else
#define CVMX_GSERX_PCIE_PCS_CLK_REQ(block_id) (CVMX_ADD_IO_SEG(0x0001180090080478ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_PIPEX_TXDEEMPH(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 3)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PCIE_PIPEX_TXDEEMPH(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080480ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8;
}
#else
#define CVMX_GSERX_PCIE_PIPEX_TXDEEMPH(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090080480ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_PIPE_COM_CLK(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_PIPE_COM_CLK(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080470ull);
}
#else
#define CVMX_GSERX_PCIE_PIPE_COM_CLK(block_id) (CVMX_ADD_IO_SEG(0x0001180090080470ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_PIPE_CRST(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_PIPE_CRST(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080458ull);
}
#else
#define CVMX_GSERX_PCIE_PIPE_CRST(block_id) (CVMX_ADD_IO_SEG(0x0001180090080458ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_PIPE_PORT_LOOPBK(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_PIPE_PORT_LOOPBK(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080468ull);
}
#else
#define CVMX_GSERX_PCIE_PIPE_PORT_LOOPBK(block_id) (CVMX_ADD_IO_SEG(0x0001180090080468ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_PIPE_PORT_SEL(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_PIPE_PORT_SEL(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080460ull);
}
#else
#define CVMX_GSERX_PCIE_PIPE_PORT_SEL(block_id) (CVMX_ADD_IO_SEG(0x0001180090080460ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_PIPE_RST(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_PIPE_RST(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080448ull);
}
#else
#define CVMX_GSERX_PCIE_PIPE_RST(block_id) (CVMX_ADD_IO_SEG(0x0001180090080448ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_PIPE_RST_STS(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_PIPE_RST_STS(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080450ull);
}
#else
#define CVMX_GSERX_PCIE_PIPE_RST_STS(block_id) (CVMX_ADD_IO_SEG(0x0001180090080450ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_PIPE_STATUS(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_PIPE_STATUS(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080400ull);
}
#else
#define CVMX_GSERX_PCIE_PIPE_STATUS(block_id) (CVMX_ADD_IO_SEG(0x0001180090080400ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_TX_DEEMPH_GEN1(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_TX_DEEMPH_GEN1(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080408ull);
}
#else
#define CVMX_GSERX_PCIE_TX_DEEMPH_GEN1(block_id) (CVMX_ADD_IO_SEG(0x0001180090080408ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_TX_DEEMPH_GEN2_3P5DB(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_TX_DEEMPH_GEN2_3P5DB(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080410ull);
}
#else
#define CVMX_GSERX_PCIE_TX_DEEMPH_GEN2_3P5DB(block_id) (CVMX_ADD_IO_SEG(0x0001180090080410ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_TX_DEEMPH_GEN2_6DB(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_TX_DEEMPH_GEN2_6DB(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080418ull);
}
#else
#define CVMX_GSERX_PCIE_TX_DEEMPH_GEN2_6DB(block_id) (CVMX_ADD_IO_SEG(0x0001180090080418ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_TX_SWING_FULL(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_TX_SWING_FULL(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080420ull);
}
#else
#define CVMX_GSERX_PCIE_TX_SWING_FULL(block_id) (CVMX_ADD_IO_SEG(0x0001180090080420ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_TX_SWING_LOW(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_TX_SWING_LOW(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080428ull);
}
#else
#define CVMX_GSERX_PCIE_TX_SWING_LOW(block_id) (CVMX_ADD_IO_SEG(0x0001180090080428ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_TX_VBOOST_LVL(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_TX_VBOOST_LVL(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080440ull);
}
#else
#define CVMX_GSERX_PCIE_TX_VBOOST_LVL(block_id) (CVMX_ADD_IO_SEG(0x0001180090080440ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_IDCODE_HI(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_IDCODE_HI(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090400008ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_IDCODE_HI(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090400008ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_IDCODE_LO(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_IDCODE_LO(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090400000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_IDCODE_LO(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090400000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE0_LOOPBACK(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE0_LOOPBACK(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090408170ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE0_LOOPBACK(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408170ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE0_RX_LBERT_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE0_RX_LBERT_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904080B0ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE0_RX_LBERT_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904080B0ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE0_RX_LBERT_ERR(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE0_RX_LBERT_ERR(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904080B8ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE0_RX_LBERT_ERR(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904080B8ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE0_RX_OVRD_IN_LO(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE0_RX_OVRD_IN_LO(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090408028ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE0_RX_OVRD_IN_LO(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408028ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE0_TXDEBUG(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE0_TXDEBUG(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090408080ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE0_TXDEBUG(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408080ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE0_TX_LBERT_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE0_TX_LBERT_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904080A8ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE0_TX_LBERT_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904080A8ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE0_TX_OVRD_IN_HI(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE0_TX_OVRD_IN_HI(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090408008ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE0_TX_OVRD_IN_HI(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408008ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE0_TX_OVRD_IN_LO(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE0_TX_OVRD_IN_LO(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090408000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE0_TX_OVRD_IN_LO(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE1_LOOPBACK(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE1_LOOPBACK(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090408970ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE1_LOOPBACK(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408970ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE1_RX_LBERT_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE1_RX_LBERT_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904088B0ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE1_RX_LBERT_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904088B0ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE1_RX_LBERT_ERR(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE1_RX_LBERT_ERR(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904088B8ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE1_RX_LBERT_ERR(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904088B8ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE1_RX_OVRD_IN_LO(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE1_RX_OVRD_IN_LO(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090408828ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE1_RX_OVRD_IN_LO(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408828ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE1_TXDEBUG(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE1_TXDEBUG(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090408880ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE1_TXDEBUG(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408880ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE1_TX_LBERT_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE1_TX_LBERT_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904088A8ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE1_TX_LBERT_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904088A8ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE1_TX_OVRD_IN_HI(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE1_TX_OVRD_IN_HI(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090408808ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE1_TX_OVRD_IN_HI(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408808ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE1_TX_OVRD_IN_LO(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE1_TX_OVRD_IN_LO(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090408800ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE1_TX_OVRD_IN_LO(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408800ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_OVRD_IN_LO(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_OVRD_IN_LO(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090400088ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_OVRD_IN_LO(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090400088ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHY_CTL(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_PHY_CTL(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000000ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_PHY_CTL(block_id) (CVMX_ADD_IO_SEG(0x0001180090000000ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PIPE_LPBK(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_PIPE_LPBK(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000200ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_PIPE_LPBK(block_id) (CVMX_ADD_IO_SEG(0x0001180090000200ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PLL_PX_MODE_0(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 11)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_PLL_PX_MODE_0(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904E0030ull) + (((offset) & 15) + ((block_id) & 15) * 0x80000ull) * 32;
}
#else
#define CVMX_GSERX_PLL_PX_MODE_0(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904E0030ull) + (((offset) & 15) + ((block_id) & 15) * 0x80000ull) * 32)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PLL_PX_MODE_1(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 11)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_PLL_PX_MODE_1(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904E0038ull) + (((offset) & 15) + ((block_id) & 15) * 0x80000ull) * 32;
}
#else
#define CVMX_GSERX_PLL_PX_MODE_1(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904E0038ull) + (((offset) & 15) + ((block_id) & 15) * 0x80000ull) * 32)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PLL_STAT(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_PLL_STAT(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000010ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_PLL_STAT(block_id) (CVMX_ADD_IO_SEG(0x0001180090000010ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_QLM_STAT(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_QLM_STAT(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800900000A0ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_QLM_STAT(block_id) (CVMX_ADD_IO_SEG(0x00011800900000A0ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_RDET_TIME(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_RDET_TIME(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800904E0008ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_RDET_TIME(block_id) (CVMX_ADD_IO_SEG(0x00011800904E0008ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_REFCLK_SEL(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_REFCLK_SEL(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000008ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_REFCLK_SEL(block_id) (CVMX_ADD_IO_SEG(0x0001180090000008ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_RX_COAST(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_RX_COAST(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000138ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_RX_COAST(block_id) (CVMX_ADD_IO_SEG(0x0001180090000138ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_RX_EIE_DETEN(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_RX_EIE_DETEN(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000148ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_RX_EIE_DETEN(block_id) (CVMX_ADD_IO_SEG(0x0001180090000148ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_RX_EIE_DETSTS(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_RX_EIE_DETSTS(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000150ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_RX_EIE_DETSTS(block_id) (CVMX_ADD_IO_SEG(0x0001180090000150ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_RX_EIE_FILTER(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_RX_EIE_FILTER(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000158ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_RX_EIE_FILTER(block_id) (CVMX_ADD_IO_SEG(0x0001180090000158ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_RX_POLARITY(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_RX_POLARITY(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000160ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_RX_POLARITY(block_id) (CVMX_ADD_IO_SEG(0x0001180090000160ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_RX_PWR_CTRL_P1(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_RX_PWR_CTRL_P1(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800904600B0ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_RX_PWR_CTRL_P1(block_id) (CVMX_ADD_IO_SEG(0x00011800904600B0ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_CFG(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_SATA_CFG(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100208ull);
}
#else
#define CVMX_GSERX_SATA_CFG(block_id) (CVMX_ADD_IO_SEG(0x0001180090100208ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_LANE_RST(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_SATA_LANE_RST(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100210ull);
}
#else
#define CVMX_GSERX_SATA_LANE_RST(block_id) (CVMX_ADD_IO_SEG(0x0001180090100210ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_P0_TX_AMP_GENX(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((((offset >= 1) && (offset <= 3))) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_SATA_P0_TX_AMP_GENX(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100480ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8;
}
#else
#define CVMX_GSERX_SATA_P0_TX_AMP_GENX(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090100480ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_P0_TX_PREEMPH_GENX(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((((offset >= 1) && (offset <= 3))) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_SATA_P0_TX_PREEMPH_GENX(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100400ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8;
}
#else
#define CVMX_GSERX_SATA_P0_TX_PREEMPH_GENX(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090100400ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_P1_TX_AMP_GENX(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((((offset >= 1) && (offset <= 3))) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_SATA_P1_TX_AMP_GENX(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800901004A0ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8;
}
#else
#define CVMX_GSERX_SATA_P1_TX_AMP_GENX(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800901004A0ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_P1_TX_PREEMPH_GENX(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((((offset >= 1) && (offset <= 3))) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_SATA_P1_TX_PREEMPH_GENX(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100420ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8;
}
#else
#define CVMX_GSERX_SATA_P1_TX_PREEMPH_GENX(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090100420ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_REF_SSP_EN(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_SATA_REF_SSP_EN(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100600ull);
}
#else
#define CVMX_GSERX_SATA_REF_SSP_EN(block_id) (CVMX_ADD_IO_SEG(0x0001180090100600ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_RX_INVERT(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_SATA_RX_INVERT(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100218ull);
}
#else
#define CVMX_GSERX_SATA_RX_INVERT(block_id) (CVMX_ADD_IO_SEG(0x0001180090100218ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_SSC_CLK_SEL(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_SATA_SSC_CLK_SEL(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100238ull);
}
#else
#define CVMX_GSERX_SATA_SSC_CLK_SEL(block_id) (CVMX_ADD_IO_SEG(0x0001180090100238ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_SSC_EN(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_SATA_SSC_EN(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100228ull);
}
#else
#define CVMX_GSERX_SATA_SSC_EN(block_id) (CVMX_ADD_IO_SEG(0x0001180090100228ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_SSC_RANGE(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_SATA_SSC_RANGE(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100230ull);
}
#else
#define CVMX_GSERX_SATA_SSC_RANGE(block_id) (CVMX_ADD_IO_SEG(0x0001180090100230ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_STATUS(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_SATA_STATUS(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100200ull);
}
#else
#define CVMX_GSERX_SATA_STATUS(block_id) (CVMX_ADD_IO_SEG(0x0001180090100200ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_TX_INVERT(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_SATA_TX_INVERT(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100220ull);
}
#else
#define CVMX_GSERX_SATA_TX_INVERT(block_id) (CVMX_ADD_IO_SEG(0x0001180090100220ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SCRATCH(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_SCRATCH(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000020ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_SCRATCH(block_id) (CVMX_ADD_IO_SEG(0x0001180090000020ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SLICEX_RX_SDLL_CTRL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 1)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_SLICEX_RX_SDLL_CTRL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090460220ull) + (((offset) & 1) + ((block_id) & 15) * 0x8ull) * 2097152;
}
#else
#define CVMX_GSERX_SLICEX_RX_SDLL_CTRL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090460220ull) + (((offset) & 1) + ((block_id) & 15) * 0x8ull) * 2097152)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SLICE_CFG(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_SLICE_CFG(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090460060ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_SLICE_CFG(block_id) (CVMX_ADD_IO_SEG(0x0001180090460060ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SPD(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_SPD(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000088ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_SPD(block_id) (CVMX_ADD_IO_SEG(0x0001180090000088ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SRST(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_SRST(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000090ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_SRST(block_id) (CVMX_ADD_IO_SEG(0x0001180090000090ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_TX_VBOOST(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_TX_VBOOST(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000130ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_TX_VBOOST(block_id) (CVMX_ADD_IO_SEG(0x0001180090000130ull) + ((block_id) & 15) * 0x1000000ull)
#endif

/**
 * cvmx_gser#_ana_atest
 */
union cvmx_gserx_ana_atest {
	uint64_t u64;
	struct cvmx_gserx_ana_atest_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_12_63               : 52;
	uint64_t ana_dac_b                    : 7;  /**< Used to control the B-side DAC input to the analog test block. Note that the QLM4 register
                                                         is tied to the analog test block, for non-CCPI links. Note that the CCPI4 register is tied
                                                         to the analog test block, for CCPI links. The other GSER()_ANA_ATEST registers are
                                                         unused. For diagnostic use only. */
	uint64_t ana_dac_a                    : 5;  /**< Used to control A-side DAC input to the analog test block. Note that the QLM4 register is
                                                         tied to the analog test block, for non-CCPI links. Note that the CCPI4 register is tied to
                                                         the analog test block, for CCPI links. The other GSER()_ANA_ATEST registers are unused.
                                                         For diagnostic use only. */
#else
	uint64_t ana_dac_a                    : 5;
	uint64_t ana_dac_b                    : 7;
	uint64_t reserved_12_63               : 52;
#endif
	} s;
	struct cvmx_gserx_ana_atest_s         cn78xx;
};
typedef union cvmx_gserx_ana_atest cvmx_gserx_ana_atest_t;

/**
 * cvmx_gser#_ana_sel
 */
union cvmx_gserx_ana_sel {
	uint64_t u64;
	struct cvmx_gserx_ana_sel_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t ana_sel                      : 9;  /**< Used to control the adr_global input to the analog test block. Note that the QLM0 register
                                                         is tied to the analog test block, for non-CCPI links. Note that the QLM8 register is tied
                                                         to the analog test block, for CCPI links. The other GSER()_ANA_SEL registers are unused.
                                                         For diagnostic use only. */
#else
	uint64_t ana_sel                      : 9;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_ana_sel_s           cn78xx;
};
typedef union cvmx_gserx_ana_sel cvmx_gserx_ana_sel_t;

/**
 * cvmx_gser#_br_rx#_ctl
 */
union cvmx_gserx_br_rxx_ctl {
	uint64_t u64;
	struct cvmx_gserx_br_rxx_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_3_63                : 61;
	uint64_t rxt_swm                      : 1;  /**< Set when RX Base-R Link Training is to be performed under software control. For diagnostic
                                                         use only. */
	uint64_t rxt_preset                   : 1;  /**< For all link training, this bit determines how to configure the preset bit in the
                                                         coefficient update message that is sent to the far end transmitter. When set, a one time
                                                         request is made that the coefficients be set to a state where equalization is turned off.
                                                         To perform a preset, set this bit prior to link training. Link training needs to be
                                                         disabled to complete the request and get the rxtrain state machine back to idle. Note that
                                                         it is illegal to set both the preset and initialize bits at the same time. For diagnostic
                                                         use only. */
	uint64_t rxt_initialize               : 1;  /**< For all link training, this bit determines how to configure the initialize bit in the
                                                         coefficient update message that is sent to the far end transmitter of RX training. When
                                                         set, a request is made that the coefficients be set to its INITIALIZE state. To perform an
                                                         initialize prior to link training, set this bit prior to performing link training. Note
                                                         that it is illegal to set both the preset and initialize bits at the same time. Since the
                                                         far end transmitter is required to be initialized prior to starting link training, it is
                                                         not expected that software will need to set this bit. For diagnostic use only. */
#else
	uint64_t rxt_initialize               : 1;
	uint64_t rxt_preset                   : 1;
	uint64_t rxt_swm                      : 1;
	uint64_t reserved_3_63                : 61;
#endif
	} s;
	struct cvmx_gserx_br_rxx_ctl_s        cn78xx;
};
typedef union cvmx_gserx_br_rxx_ctl cvmx_gserx_br_rxx_ctl_t;

/**
 * cvmx_gser#_br_rx#_eer
 *
 * GSER software Base-R RX Link Training equalization evaluation request (EER). A write to
 * RXT_EER initiates a equalization request to the RAW PCS. A read of this register returns the
 * equalization status message and a valid bit indicating it was updated. These registers are for
 * diagnostic use only.
 */
union cvmx_gserx_br_rxx_eer {
	uint64_t u64;
	struct cvmx_gserx_br_rxx_eer_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t rxt_eer                      : 1;  /**< When RX Base-R Link Training is being performed under software control,
                                                         (GSER()_BR_RX()_CTL[RXT_SWM] is set), writing this bit initiates an equalization
                                                         request to the RAW PCS. Reading this bit always returns a zero. */
	uint64_t rxt_esv                      : 1;  /**< When performing an equalization request (RXT_EER), this bit, when set, indicates that the
                                                         Equalization Status (RXT_ESM) is valid. When issuing a RXT_EER request, it is expected
                                                         that RXT_ESV will get written to zero so that a valid RXT_ESM can be determined. */
	uint64_t rxt_esm                      : 14; /**< When performing an equalization request (RXT_EER), this is the equalization status message
                                                         from the RAW PCS. It is valid when RXT_ESV is set.
                                                         _ <13:6>: Figure of merit. An 8-bit output from the PHY indicating the quality of the
                                                         received data eye. A higher value indicates better link equalization, with 8'd0 indicating
                                                         worst equalization setting and 8'd255 indicating the best equalization setting.
                                                         _ <5:4>: RX recommended TXPOST direction change.
                                                         _ <3:2>: RX recommended TXMAIN direction change.
                                                         _ <1:0>: RX recommended TXPRE direction change.
                                                         Recommended direction change outputs from the PHY for the link partner transmitter
                                                         coefficients.
                                                         0x0 = Hold.
                                                         0x1 = Increment.
                                                         0x2 = Decrement.
                                                         0x3 = Hold. */
#else
	uint64_t rxt_esm                      : 14;
	uint64_t rxt_esv                      : 1;
	uint64_t rxt_eer                      : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_br_rxx_eer_s        cn78xx;
};
typedef union cvmx_gserx_br_rxx_eer cvmx_gserx_br_rxx_eer_t;

/**
 * cvmx_gser#_br_tx#_ctl
 */
union cvmx_gserx_br_txx_ctl {
	uint64_t u64;
	struct cvmx_gserx_br_txx_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t txt_swm                      : 1;  /**< Set when TX Base-R Link Training is to be performed under software control. For diagnostic
                                                         use only. */
#else
	uint64_t txt_swm                      : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_br_txx_ctl_s        cn78xx;
};
typedef union cvmx_gserx_br_txx_ctl cvmx_gserx_br_txx_ctl_t;

/**
 * cvmx_gser#_br_tx#_cur
 */
union cvmx_gserx_br_txx_cur {
	uint64_t u64;
	struct cvmx_gserx_br_txx_cur_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_14_63               : 50;
	uint64_t txt_cur                      : 14; /**< When TX Base-R Link Training is being performed under software control,
                                                         (GSER()_BR_TX()_CTL.TXT_SWM is set), this is the Coefficient Update to be written to the
                                                         PHY.
                                                         For diagnostic use only.
                                                         <13:9> = TX_POST<4:0>.
                                                         <8:4> = TX_SWING<4:0>.
                                                         <3:0> = TX_PRE<4:0>. */
#else
	uint64_t txt_cur                      : 14;
	uint64_t reserved_14_63               : 50;
#endif
	} s;
	struct cvmx_gserx_br_txx_cur_s        cn78xx;
};
typedef union cvmx_gserx_br_txx_cur cvmx_gserx_br_txx_cur_t;

/**
 * cvmx_gser#_cfg
 */
union cvmx_gserx_cfg {
	uint64_t u64;
	struct cvmx_gserx_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_5_63                : 59;
	uint64_t bgx_quad                     : 1;  /**< For non-CCPI links, indicates the BGX is in quad aggregation mode when GSER()_CFG[BGX]
                                                         is also set. A single controller is used for all four lanes. For CCPI links, this bit has
                                                         no meaning. */
	uint64_t bgx_dual                     : 1;  /**< For non-CCPI links, indicates the BGX is in dual aggregation mode when GSER()_CFG[BGX]
                                                         is also set. A single controller is used for lanes 0 and 1 and another controller is used
                                                         for lanes 2 and 3. For CCPI links, this bit has no meaning. */
	uint64_t bgx                          : 1;  /**< For non-CCPI links, indicates the GSER is configured for BGX mode. Only one of the BGX,
                                                         ILA, or PCIE modes can be set at any one time. For CCPI links, this bit has no meaning. */
	uint64_t ila                          : 1;  /**< For non-CCPI links, indicates the GSER is configured for ILK/ILA mode. For CCPI links this
                                                         bit will be set. Only one of the BGX, ILA, or PCIE modes can be set at any one time. For
                                                         CCPI links, this bit has no meaning. */
	uint64_t pcie                         : 1;  /**< For non-CCPI links, indicates the GSER is configured for PCIE mode. Only one of the BGX,
                                                         ILA, or PCIE modes can be set at any one time. For CCPI links, this bit has no meaning. */
#else
	uint64_t pcie                         : 1;
	uint64_t ila                          : 1;
	uint64_t bgx                          : 1;
	uint64_t bgx_dual                     : 1;
	uint64_t bgx_quad                     : 1;
	uint64_t reserved_5_63                : 59;
#endif
	} s;
	struct cvmx_gserx_cfg_s               cn78xx;
};
typedef union cvmx_gserx_cfg cvmx_gserx_cfg_t;

/**
 * cvmx_gser#_dbg
 */
union cvmx_gserx_dbg {
	uint64_t u64;
	struct cvmx_gserx_dbg_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t rxqtm_on                     : 1;  /**< For non-BGX/ILK configurations, setting this bit enables the RX FIFOs. This allows
                                                         received data to become visible to the RSL debug port. For diagnostic use only. */
#else
	uint64_t rxqtm_on                     : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dbg_s               cn78xx;
};
typedef union cvmx_gserx_dbg cvmx_gserx_dbg_t;

/**
 * cvmx_gser#_dlm#_loopbk_en
 *
 * DLM0 Tx-to-Rx Loopback Enable.
 *
 */
union cvmx_gserx_dlmx_loopbk_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_loopbk_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t lane1_loopbk_en              : 1;  /**< Lane 1 Tx-to-Rx Loopback Enable.  When this signal is
                                                         asserted, data from the transmit predriver is looped back
                                                         to the receive slivers.  LOS is bypassed and based on the
                                                         txN_en input so that rxN_los = !txN_data_en. */
	uint64_t reserved_1_7                 : 7;
	uint64_t lane0_loopbk_en              : 1;  /**< Lane 0 Tx-to-Rx Loopback Enable.  When this signal is
                                                         asserted, data from the transmit predriver is looped back
                                                         to the receive slivers.  LOS is bypassed and based on the
                                                         txN_en input so that rxN_los = !txN_data_en. */
#else
	uint64_t lane0_loopbk_en              : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t lane1_loopbk_en              : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_loopbk_en_s    cn70xx;
	struct cvmx_gserx_dlmx_loopbk_en_s    cn70xxp1;
};
typedef union cvmx_gserx_dlmx_loopbk_en cvmx_gserx_dlmx_loopbk_en_t;

/**
 * cvmx_gser#_dlm#_los_bias
 *
 * DLM Loss-of-Signal Detector Threshold Level Control.
 *
 */
union cvmx_gserx_dlmx_los_bias {
	uint64_t u64;
	struct cvmx_gserx_dlmx_los_bias_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_3_63                : 61;
	uint64_t los_bias                     : 3;  /**< A positive, binary bit setting change results in a
                                                         +15mVp incremental change in the LOS threshold.  A negative
                                                         bit setting change results in a -15-mVp incremental change
                                                         in the LOS threshold.  The 3'b000 setting is reserved and
                                                         must not be used.
                                                         0x0: Reserved
                                                         0x1: 120 mV (default CEI)
                                                         0x2: 135 mV (default PCIe/SATA)
                                                         0x3: 150 mV
                                                         0x4:  45 mV
                                                         0x5:  60 mV
                                                         0x6:  75 mV
                                                         0x7:  90 mV */
#else
	uint64_t los_bias                     : 3;
	uint64_t reserved_3_63                : 61;
#endif
	} s;
	struct cvmx_gserx_dlmx_los_bias_s     cn70xx;
	struct cvmx_gserx_dlmx_los_bias_s     cn70xxp1;
};
typedef union cvmx_gserx_dlmx_los_bias cvmx_gserx_dlmx_los_bias_t;

/**
 * cvmx_gser#_dlm#_los_level
 *
 * DLM Loss-of-Signal Sensitivity Level Contol.
 *
 */
union cvmx_gserx_dlmx_los_level {
	uint64_t u64;
	struct cvmx_gserx_dlmx_los_level_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_5_63                : 59;
	uint64_t los_level                    : 5;  /**< Sets the sesitivity level for the Loss-of-Signal
                                                         detector.  This signal must be set to 5'b01001. */
#else
	uint64_t los_level                    : 5;
	uint64_t reserved_5_63                : 59;
#endif
	} s;
	struct cvmx_gserx_dlmx_los_level_s    cn70xx;
	struct cvmx_gserx_dlmx_los_level_s    cn70xxp1;
};
typedef union cvmx_gserx_dlmx_los_level cvmx_gserx_dlmx_los_level_t;

/**
 * cvmx_gser#_dlm#_misc_status
 *
 * DLM0 Miscellaneous Status.
 *
 */
union cvmx_gserx_dlmx_misc_status {
	uint64_t u64;
	struct cvmx_gserx_dlmx_misc_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t tx1_uflow                    : 1;  /**< When set, indicates transmit FIFO underflow
                                                         has occured on lane 1. */
	uint64_t reserved_1_7                 : 7;
	uint64_t tx0_uflow                    : 1;  /**< When set, indicates transmit FIFO underflow
                                                         has occured on lane 0. */
#else
	uint64_t tx0_uflow                    : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t tx1_uflow                    : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_misc_status_s  cn70xx;
	struct cvmx_gserx_dlmx_misc_status_s  cn70xxp1;
};
typedef union cvmx_gserx_dlmx_misc_status cvmx_gserx_dlmx_misc_status_t;

/**
 * cvmx_gser#_dlm#_mpll_en
 *
 * DLM0 PHY PLL Enable.
 *
 */
union cvmx_gserx_dlmx_mpll_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_mpll_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t mpll_en                      : 1;  /**< When deasserted, the MPLL is off and the PHY is in P2 state. */
#else
	uint64_t mpll_en                      : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dlmx_mpll_en_s      cn70xx;
	struct cvmx_gserx_dlmx_mpll_en_s      cn70xxp1;
};
typedef union cvmx_gserx_dlmx_mpll_en cvmx_gserx_dlmx_mpll_en_t;

/**
 * cvmx_gser#_dlm#_mpll_half_rate
 *
 * DLM MPLL Low-Power Mode Enable.
 *
 */
union cvmx_gserx_dlmx_mpll_half_rate {
	uint64_t u64;
	struct cvmx_gserx_dlmx_mpll_half_rate_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t mpll_half_rate               : 1;  /**< Enables a low-power mode feature for the MPLL block.  This signal
                                                         should be asserted only when the MPLL is operating at a clock rate
                                                         less than or equal to 1.5626 GHz. */
#else
	uint64_t mpll_half_rate               : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dlmx_mpll_half_rate_s cn70xx;
	struct cvmx_gserx_dlmx_mpll_half_rate_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_mpll_half_rate cvmx_gserx_dlmx_mpll_half_rate_t;

/**
 * cvmx_gser#_dlm#_mpll_multiplier
 *
 * DLM MPLL Frequency Multiplier Control.
 *
 */
union cvmx_gserx_dlmx_mpll_multiplier {
	uint64_t u64;
	struct cvmx_gserx_dlmx_mpll_multiplier_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_7_63                : 57;
	uint64_t mpll_multiplier              : 7;  /**< Multiples the reference clock to a frequency suitable for
                                                         intended operating speed. */
#else
	uint64_t mpll_multiplier              : 7;
	uint64_t reserved_7_63                : 57;
#endif
	} s;
	struct cvmx_gserx_dlmx_mpll_multiplier_s cn70xx;
	struct cvmx_gserx_dlmx_mpll_multiplier_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_mpll_multiplier cvmx_gserx_dlmx_mpll_multiplier_t;

/**
 * cvmx_gser#_dlm#_mpll_status
 *
 * DLM PLL Lock Status.
 *
 */
union cvmx_gserx_dlmx_mpll_status {
	uint64_t u64;
	struct cvmx_gserx_dlmx_mpll_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t mpll_status                  : 1;  /**< This is the lock status of the PHY PLL.  When asserted,
                                                         it indicates the PHY's MPLL has reached a stable, running
                                                         state. */
#else
	uint64_t mpll_status                  : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dlmx_mpll_status_s  cn70xx;
	struct cvmx_gserx_dlmx_mpll_status_s  cn70xxp1;
};
typedef union cvmx_gserx_dlmx_mpll_status cvmx_gserx_dlmx_mpll_status_t;

/**
 * cvmx_gser#_dlm#_phy_reset
 *
 * DLM Core and State Machine Reset.
 *
 */
union cvmx_gserx_dlmx_phy_reset {
	uint64_t u64;
	struct cvmx_gserx_dlmx_phy_reset_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t phy_reset                    : 1;  /**< Resets the core and all state machines with the exception of the
                                                         reference clock buffer and JTAG interface.  Asserting PHY_RESET
                                                         triggers the assertion of teh Tx and Rx reset signals.  Power
                                                         and clocks are required before deasserting PHY_RESET. */
#else
	uint64_t phy_reset                    : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dlmx_phy_reset_s    cn70xx;
	struct cvmx_gserx_dlmx_phy_reset_s    cn70xxp1;
};
typedef union cvmx_gserx_dlmx_phy_reset cvmx_gserx_dlmx_phy_reset_t;

/**
 * cvmx_gser#_dlm#_ref_clkdiv2
 *
 * DLM Input Reference Clock Divider Control.
 *
 */
union cvmx_gserx_dlmx_ref_clkdiv2 {
	uint64_t u64;
	struct cvmx_gserx_dlmx_ref_clkdiv2_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t ref_clkdiv2                  : 1;  /**< If the input reference clock is greater than 100Mhz, this signal must
                                                         be asserted.  The reference clock frequency is then divided by 2 to
                                                         keep it in the range required by the MPLL. */
#else
	uint64_t ref_clkdiv2                  : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dlmx_ref_clkdiv2_s  cn70xx;
	struct cvmx_gserx_dlmx_ref_clkdiv2_s  cn70xxp1;
};
typedef union cvmx_gserx_dlmx_ref_clkdiv2 cvmx_gserx_dlmx_ref_clkdiv2_t;

/**
 * cvmx_gser#_dlm#_ref_ssp_en
 *
 * DLM0 Reference Clock Enable for the PHY.
 *
 */
union cvmx_gserx_dlmx_ref_ssp_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_ref_ssp_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t ref_ssp_en                   : 1;  /**< Enables the PHY's internal reference clock. */
#else
	uint64_t ref_ssp_en                   : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dlmx_ref_ssp_en_s   cn70xx;
	struct cvmx_gserx_dlmx_ref_ssp_en_s   cn70xxp1;
};
typedef union cvmx_gserx_dlmx_ref_ssp_en cvmx_gserx_dlmx_ref_ssp_en_t;

/**
 * cvmx_gser#_dlm#_ref_use_pad
 *
 * DLM Select Reference Clock.
 *
 */
union cvmx_gserx_dlmx_ref_use_pad {
	uint64_t u64;
	struct cvmx_gserx_dlmx_ref_use_pad_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t ref_use_pad                  : 1;  /**< When asserted, selects the external ref_pad_clk_[p,m]
                                                         inputs as the reference clock sourse.  When deasserted,
                                                         ref_alt_clk_[p,m] are selected from an on-chip
                                                         source of the reference clock. REF_USE_PAD must be
                                                         clear for DLM1 and DLM2. */
#else
	uint64_t ref_use_pad                  : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dlmx_ref_use_pad_s  cn70xx;
	struct cvmx_gserx_dlmx_ref_use_pad_s  cn70xxp1;
};
typedef union cvmx_gserx_dlmx_ref_use_pad cvmx_gserx_dlmx_ref_use_pad_t;

/**
 * cvmx_gser#_dlm#_refclk_sel
 *
 * DLM Reference Clock Select.
 *
 */
union cvmx_gserx_dlmx_refclk_sel {
	uint64_t u64;
	struct cvmx_gserx_dlmx_refclk_sel_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t refclk_sel                   : 1;  /**< When clear, selects common reference clock 0.
                                                         When set, selects common reference clock 1.
                                                         GSER0_DLMn_REF_USE_PAD[REF_USE_PAD] must be clear
                                                         to select either common reference clock. */
#else
	uint64_t refclk_sel                   : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dlmx_refclk_sel_s   cn70xx;
	struct cvmx_gserx_dlmx_refclk_sel_s   cn70xxp1;
};
typedef union cvmx_gserx_dlmx_refclk_sel cvmx_gserx_dlmx_refclk_sel_t;

/**
 * cvmx_gser#_dlm#_rx_data_en
 *
 * DLM Receiver Enable.
 *
 */
union cvmx_gserx_dlmx_rx_data_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_data_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t rx1_data_en                  : 1;  /**< Enables the clock and data recovery logic fir Lane 1. */
	uint64_t reserved_1_7                 : 7;
	uint64_t rx0_data_en                  : 1;  /**< Enables the clock and data recovery logic for Lane 0. */
#else
	uint64_t rx0_data_en                  : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t rx1_data_en                  : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_data_en_s   cn70xx;
	struct cvmx_gserx_dlmx_rx_data_en_s   cn70xxp1;
};
typedef union cvmx_gserx_dlmx_rx_data_en cvmx_gserx_dlmx_rx_data_en_t;

/**
 * cvmx_gser#_dlm#_rx_eq
 *
 * DLM Receiver Equalization Setting.
 *
 */
union cvmx_gserx_dlmx_rx_eq {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_eq_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_11_63               : 53;
	uint64_t rx1_eq                       : 3;  /**< Selects the amount of equalization in the Lane 1 receiver. */
	uint64_t reserved_3_7                 : 5;
	uint64_t rx0_eq                       : 3;  /**< Selects the amount of equalization in the Lane 0 receiver. */
#else
	uint64_t rx0_eq                       : 3;
	uint64_t reserved_3_7                 : 5;
	uint64_t rx1_eq                       : 3;
	uint64_t reserved_11_63               : 53;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_eq_s        cn70xx;
	struct cvmx_gserx_dlmx_rx_eq_s        cn70xxp1;
};
typedef union cvmx_gserx_dlmx_rx_eq cvmx_gserx_dlmx_rx_eq_t;

/**
 * cvmx_gser#_dlm#_rx_los_en
 *
 * DLM Loss of Signal Detector Enable.
 *
 */
union cvmx_gserx_dlmx_rx_los_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_los_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t rx1_los_en                   : 1;  /**< Lane 1 Loss of Signal Detector Enable. */
	uint64_t reserved_1_7                 : 7;
	uint64_t rx0_los_en                   : 1;  /**< Lane 0 Loss of Signal Detector Enable. */
#else
	uint64_t rx0_los_en                   : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t rx1_los_en                   : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_los_en_s    cn70xx;
	struct cvmx_gserx_dlmx_rx_los_en_s    cn70xxp1;
};
typedef union cvmx_gserx_dlmx_rx_los_en cvmx_gserx_dlmx_rx_los_en_t;

/**
 * cvmx_gser#_dlm#_rx_pll_en
 *
 * DLM0 DPLL Enable.
 *
 */
union cvmx_gserx_dlmx_rx_pll_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_pll_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t rx1_pll_en                   : 1;  /**< Lane 1 Receiver DPLL Enable. */
	uint64_t reserved_1_7                 : 7;
	uint64_t rx0_pll_en                   : 1;  /**< Lane 0 Receiver DPLL Enable. */
#else
	uint64_t rx0_pll_en                   : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t rx1_pll_en                   : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_pll_en_s    cn70xx;
	struct cvmx_gserx_dlmx_rx_pll_en_s    cn70xxp1;
};
typedef union cvmx_gserx_dlmx_rx_pll_en cvmx_gserx_dlmx_rx_pll_en_t;

/**
 * cvmx_gser#_dlm#_rx_rate
 *
 * DLM0 Rx Data Rate.
 *
 */
union cvmx_gserx_dlmx_rx_rate {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_rate_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_10_63               : 54;
	uint64_t rx1_rate                     : 2;  /**< Lane 1 Rx Data Rate
                                                         - 00: mpll_baud_clk
                                                         - 01: mpll_baud_clk / 2
                                                         - 10: mpll_baud_clk / 4
                                                         - 11: Not Supported */
	uint64_t reserved_2_7                 : 6;
	uint64_t rx0_rate                     : 2;  /**< Lane 0 Rx Data Rate
                                                         - 00: mpll_baud_clk
                                                         - 01: mpll_baud_clk / 2
                                                         - 10: mpll_baud_clk / 4
                                                         - 11: Not Supported */
#else
	uint64_t rx0_rate                     : 2;
	uint64_t reserved_2_7                 : 6;
	uint64_t rx1_rate                     : 2;
	uint64_t reserved_10_63               : 54;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_rate_s      cn70xx;
	struct cvmx_gserx_dlmx_rx_rate_s      cn70xxp1;
};
typedef union cvmx_gserx_dlmx_rx_rate cvmx_gserx_dlmx_rx_rate_t;

/**
 * cvmx_gser#_dlm#_rx_reset
 *
 * DLM0 Receiver Reset.
 *
 */
union cvmx_gserx_dlmx_rx_reset {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_reset_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t rx1_reset                    : 1;  /**< Lane 1 Receiver Reset. */
	uint64_t reserved_1_7                 : 7;
	uint64_t rx0_reset                    : 1;  /**< Lane 0 Receiver Reset. */
#else
	uint64_t rx0_reset                    : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t rx1_reset                    : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_reset_s     cn70xx;
	struct cvmx_gserx_dlmx_rx_reset_s     cn70xxp1;
};
typedef union cvmx_gserx_dlmx_rx_reset cvmx_gserx_dlmx_rx_reset_t;

/**
 * cvmx_gser#_dlm#_rx_status
 *
 * DLM Receive DPLL State Indicator.
 *
 */
union cvmx_gserx_dlmx_rx_status {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t rx1_status                   : 1;  /**< Indicates the current state of the Lane 1 receiver DPLL and clock.
                                                         When cleared, rxN_clk can be disabled or not running at its
                                                         target rate. */
	uint64_t reserved_1_7                 : 7;
	uint64_t rx0_status                   : 1;  /**< Indicates the current state of the Lane 0 receiver DPLL and clock.
                                                         When cleared, rxN_clk can be disabled or not running at its
                                                         target rate. */
#else
	uint64_t rx0_status                   : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t rx1_status                   : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_status_s    cn70xx;
	struct cvmx_gserx_dlmx_rx_status_s    cn70xxp1;
};
typedef union cvmx_gserx_dlmx_rx_status cvmx_gserx_dlmx_rx_status_t;

/**
 * cvmx_gser#_dlm#_rx_term_en
 *
 * DLM0 PMA Receiver Termination.
 *
 */
union cvmx_gserx_dlmx_rx_term_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_term_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t rx1_term_en                  : 1;  /**< Lane 1 PMA Receiver Termination.
                                                         - 0: Terminations removed
                                                         - 1: Terminations present */
	uint64_t reserved_1_7                 : 7;
	uint64_t rx0_term_en                  : 1;  /**< Lane 0 PMA Receiver Termination.
                                                         - 0: Terminations removed
                                                         - 1: Terminations present */
#else
	uint64_t rx0_term_en                  : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t rx1_term_en                  : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_term_en_s   cn70xx;
	struct cvmx_gserx_dlmx_rx_term_en_s   cn70xxp1;
};
typedef union cvmx_gserx_dlmx_rx_term_en cvmx_gserx_dlmx_rx_term_en_t;

/**
 * cvmx_gser#_dlm#_test_bypass
 *
 * DLM Test Bypass.
 *
 */
union cvmx_gserx_dlmx_test_bypass {
	uint64_t u64;
	struct cvmx_gserx_dlmx_test_bypass_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t test_bypass                  : 1;  /**< When asserted, all circuits Power-Down but leave Reference Clock
                                                         Active. */
#else
	uint64_t test_bypass                  : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dlmx_test_bypass_s  cn70xx;
	struct cvmx_gserx_dlmx_test_bypass_s  cn70xxp1;
};
typedef union cvmx_gserx_dlmx_test_bypass cvmx_gserx_dlmx_test_bypass_t;

/**
 * cvmx_gser#_dlm#_test_powerdown
 *
 * DLM Test Powerdown.
 *
 */
union cvmx_gserx_dlmx_test_powerdown {
	uint64_t u64;
	struct cvmx_gserx_dlmx_test_powerdown_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t test_powerdown               : 1;  /**< When asserted, Powers down all circuitry in the PHY for IDDQ testing. */
#else
	uint64_t test_powerdown               : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dlmx_test_powerdown_s cn70xx;
	struct cvmx_gserx_dlmx_test_powerdown_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_test_powerdown cvmx_gserx_dlmx_test_powerdown_t;

/**
 * cvmx_gser#_dlm#_tx_amplitude
 *
 * DLM0 Tx Amplitude (Full Swing Mode).
 *
 */
union cvmx_gserx_dlmx_tx_amplitude {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_amplitude_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t tx1_amplitude                : 7;  /**< This static value sets the lanuch amplitude of the Lane 1 transmitter
                                                         when pipeP_tx_swing is set to 0x7f (default state). */
	uint64_t reserved_7_7                 : 1;
	uint64_t tx0_amplitude                : 7;  /**< This static value sets the lanuch amplitude of the Lane 0 transmitter
                                                         when pipeP_tx_swing is set to 0x7f (default state). */
#else
	uint64_t tx0_amplitude                : 7;
	uint64_t reserved_7_7                 : 1;
	uint64_t tx1_amplitude                : 7;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_amplitude_s cn70xx;
	struct cvmx_gserx_dlmx_tx_amplitude_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_tx_amplitude cvmx_gserx_dlmx_tx_amplitude_t;

/**
 * cvmx_gser#_dlm#_tx_cm_en
 *
 * DLM0 Transmit Common-Mode Control Enable.
 *
 */
union cvmx_gserx_dlmx_tx_cm_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_cm_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t tx1_cm_en                    : 1;  /**< Enables the Lane 1 transmitter's common mode hold circuitry. */
	uint64_t reserved_1_7                 : 7;
	uint64_t tx0_cm_en                    : 1;  /**< Enables the lane 0 transmitter's common mode hold circuitry. */
#else
	uint64_t tx0_cm_en                    : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t tx1_cm_en                    : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_cm_en_s     cn70xx;
	struct cvmx_gserx_dlmx_tx_cm_en_s     cn70xxp1;
};
typedef union cvmx_gserx_dlmx_tx_cm_en cvmx_gserx_dlmx_tx_cm_en_t;

/**
 * cvmx_gser#_dlm#_tx_data_en
 *
 * DLM0 Transmit Driver Enable.
 *
 */
union cvmx_gserx_dlmx_tx_data_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_data_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t tx1_data_en                  : 1;  /**< Enables the Lane 1 primary transmitter driver for serial data. */
	uint64_t reserved_1_7                 : 7;
	uint64_t tx0_data_en                  : 1;  /**< Enables the Lane 0 primary transmitter driver for serial data. */
#else
	uint64_t tx0_data_en                  : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t tx1_data_en                  : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_data_en_s   cn70xx;
	struct cvmx_gserx_dlmx_tx_data_en_s   cn70xxp1;
};
typedef union cvmx_gserx_dlmx_tx_data_en cvmx_gserx_dlmx_tx_data_en_t;

/**
 * cvmx_gser#_dlm#_tx_en
 *
 * DLM Transmit Clocking and Data Sampling Enable.
 *
 */
union cvmx_gserx_dlmx_tx_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t tx1_en                       : 1;  /**< Enables the Lane 1 transmit clock path and Tx word alignment. */
	uint64_t reserved_1_7                 : 7;
	uint64_t tx0_en                       : 1;  /**< Enables the Lane 0 transmit clock path and Tx word alignment. */
#else
	uint64_t tx0_en                       : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t tx1_en                       : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_en_s        cn70xx;
	struct cvmx_gserx_dlmx_tx_en_s        cn70xxp1;
};
typedef union cvmx_gserx_dlmx_tx_en cvmx_gserx_dlmx_tx_en_t;

/**
 * cvmx_gser#_dlm#_tx_preemph
 *
 * DLM0 Tx Deemphasis.
 *
 */
union cvmx_gserx_dlmx_tx_preemph {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_preemph_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t tx1_preemph                  : 7;  /**< Sets the Lane 1 Tx driver de-emphasis value to meet the Tx eye mask. */
	uint64_t reserved_7_7                 : 1;
	uint64_t tx0_preemph                  : 7;  /**< Sets the Lane 0 Tx driver de-emphasis value to meet the Tx eye mask. */
#else
	uint64_t tx0_preemph                  : 7;
	uint64_t reserved_7_7                 : 1;
	uint64_t tx1_preemph                  : 7;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_preemph_s   cn70xx;
	struct cvmx_gserx_dlmx_tx_preemph_s   cn70xxp1;
};
typedef union cvmx_gserx_dlmx_tx_preemph cvmx_gserx_dlmx_tx_preemph_t;

/**
 * cvmx_gser#_dlm#_tx_rate
 *
 * DLM0 Tx Data Rate.
 *
 */
union cvmx_gserx_dlmx_tx_rate {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_rate_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_10_63               : 54;
	uint64_t tx1_rate                     : 2;  /**< Selects the Lane 1 baud rate for the transmit path.
                                                         - 00: baud
                                                         - 01: baud / 2
                                                         - 10: baud / 4
                                                         - 11: Not supported */
	uint64_t reserved_2_7                 : 6;
	uint64_t tx0_rate                     : 2;  /**< Selects the Lane 0 baud rate for the transmit path.
                                                         - 00: baud
                                                         - 01: baud / 2
                                                         - 10: baud / 4
                                                         - 11: Not supported */
#else
	uint64_t tx0_rate                     : 2;
	uint64_t reserved_2_7                 : 6;
	uint64_t tx1_rate                     : 2;
	uint64_t reserved_10_63               : 54;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_rate_s      cn70xx;
	struct cvmx_gserx_dlmx_tx_rate_s      cn70xxp1;
};
typedef union cvmx_gserx_dlmx_tx_rate cvmx_gserx_dlmx_tx_rate_t;

/**
 * cvmx_gser#_dlm#_tx_reset
 *
 * DLM0 Tx Reset.
 *
 */
union cvmx_gserx_dlmx_tx_reset {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_reset_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t tx1_reset                    : 1;  /**< Resets all Lane 1 transmitter settings and state machines. */
	uint64_t reserved_1_7                 : 7;
	uint64_t tx0_reset                    : 1;  /**< Resets all Lane 0 transmitter settings and state machines. */
#else
	uint64_t tx0_reset                    : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t tx1_reset                    : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_reset_s     cn70xx;
	struct cvmx_gserx_dlmx_tx_reset_s     cn70xxp1;
};
typedef union cvmx_gserx_dlmx_tx_reset cvmx_gserx_dlmx_tx_reset_t;

/**
 * cvmx_gser#_dlm#_tx_status
 *
 * DLM Transmit Common Mode Control Status.
 *
 */
union cvmx_gserx_dlmx_tx_status {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_10_63               : 54;
	uint64_t tx1_cm_status                : 1;  /**< When asserted, the Lane 1 transmitter differential pair is held to half
                                                         of vptxN durring an electrical IDLE.  Otherwise, weakly held to
                                                         ground through a high impedance connection. */
	uint64_t tx1_status                   : 1;  /**< Signals when the Lane 1 transmitter is ready to properly sample the
                                                         incoming data for transmission. */
	uint64_t reserved_2_7                 : 6;
	uint64_t tx0_cm_status                : 1;  /**< When asserted, the Lane 0 transmitter differential pair is held to half
                                                         of vptxN durring an electrical IDLE.  Otherwise, weakly held to
                                                         ground through a high impedance connection. */
	uint64_t tx0_status                   : 1;  /**< Signals when the Lane 0 transmitter is ready to properly sample the
                                                         incoming data for transmission. */
#else
	uint64_t tx0_status                   : 1;
	uint64_t tx0_cm_status                : 1;
	uint64_t reserved_2_7                 : 6;
	uint64_t tx1_status                   : 1;
	uint64_t tx1_cm_status                : 1;
	uint64_t reserved_10_63               : 54;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_status_s    cn70xx;
	struct cvmx_gserx_dlmx_tx_status_s    cn70xxp1;
};
typedef union cvmx_gserx_dlmx_tx_status cvmx_gserx_dlmx_tx_status_t;

/**
 * cvmx_gser#_dlm#_tx_term_offset
 *
 * DLM Transmitter Termination Offset.
 *
 */
union cvmx_gserx_dlmx_tx_term_offset {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_term_offset_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_13_63               : 51;
	uint64_t tx1_term_offset              : 5;  /**< Applies an offset to the Lande 1 resistor calibration value.  Not to be
                                                         used during normal operation. */
	uint64_t reserved_5_7                 : 3;
	uint64_t tx0_term_offset              : 5;  /**< Applies an offset to the Lane 0 resistor calibration value.  Not to be
                                                         used during normal operation. */
#else
	uint64_t tx0_term_offset              : 5;
	uint64_t reserved_5_7                 : 3;
	uint64_t tx1_term_offset              : 5;
	uint64_t reserved_13_63               : 51;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_term_offset_s cn70xx;
	struct cvmx_gserx_dlmx_tx_term_offset_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_tx_term_offset cvmx_gserx_dlmx_tx_term_offset_t;

/**
 * cvmx_gser#_eq_wait_time
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_eq_wait_time {
	uint64_t u64;
	struct cvmx_gserx_eq_wait_time_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_8_63                : 56;
	uint64_t rxeq_wait_cnt                : 4;  /**< Determines the wait time after VMA RX-EQ completes and before sampling
                                                         tap1 and starting the precorrelation check. */
	uint64_t txeq_wait_cnt                : 4;  /**< Determines the wait time from applying the TX-EQ controls (swing/pre/post)
                                                         to the sampling of the sds_pcs_tx_comp_out. */
#else
	uint64_t txeq_wait_cnt                : 4;
	uint64_t rxeq_wait_cnt                : 4;
	uint64_t reserved_8_63                : 56;
#endif
	} s;
	struct cvmx_gserx_eq_wait_time_s      cn78xx;
};
typedef union cvmx_gserx_eq_wait_time cvmx_gserx_eq_wait_time_t;

/**
 * cvmx_gser#_glbl_tad
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_glbl_tad {
	uint64_t u64;
	struct cvmx_gserx_glbl_tad_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t pcs_sds_tad_8_5              : 4;  /**< AMON Specific mode selection.
                                                         Set GSER()_GLBL_TM_ADMON[AMON_ON].
                                                         Decodes 0x0 - 0x4 require GSER()_GLBL_TM_ADMON[LSEL] set.
                                                         Decodes 0x5 - 0x5 do not require GSER()_GLBL_TM_ADMON[LSEL] set.
                                                         In both cases, the resulting signals can be observed on the AMON pin.
                                                         0x0 = TX txdrv DAC 100ua sink current monitor.
                                                         0x1 = TX vcnt precision dcc.
                                                         0x2 = RX sdll topregout.
                                                         0x3 = RX ldll vctrl_i.
                                                         0x4 = RX RX term VCM voltage.
                                                         0x5 = Global bandgap voltage.
                                                         0x6 = Global CTAT voltage.
                                                         0x7 = Global internal 100ua reference current.
                                                         0x8 = Global external 100ua reference current.
                                                         0x9 = Global Rterm calibration reference voltage.
                                                         0xA = Global Rterm calibration comparator voltage.
                                                         0xB = Global Force VCNT thru DAC.
                                                         0xC = Global VDD voltage.
                                                         0xD = Global VDDCLK voltage.
                                                         0xE = Global PLL regulate VCO supply.
                                                         0xF = Global VCTRL for VCO varactor control. */
	uint64_t pcs_sds_tad_4_0              : 5;  /**< DMON Specific mode selection.
                                                         Set GSER()_GLBL_TM_ADMON[DMON_ON].
                                                         Decodes 0x0 - 0xe require GSER()_GLBL_TM_ADMON[LSEL] set.
                                                         Decodes 0xf - 0x1f do not require GSER()_GLBL_TM_ADMON[LSEL] set.
                                                         In both cases, the resulting signals can be observed on the DMON pin.
                                                         0x00 = DFE Data Q.
                                                         0x01 = DFE Edge I.
                                                         0x02 = DFE CK Q.
                                                         0x03 = DFE CK I.
                                                         0x04 = TBD.
                                                         0x05-0x7 = Reserved.
                                                         0x08 = RX ld_rx[0].
                                                         0x09 = RX rx_clk.
                                                         0x0A = RX q_error_stg.
                                                         0x0B = RX q_data_stg.
                                                         0x0C-0x0E = Reserved.
                                                         0x0F = Special case to observe supply in global. Sds_vdda and a internal regulated supply
                                                         can be observed on DMON and DMONB
                                                         respectively.  sds_vss can be observed on AMON. GSER()_GLBL_TM_ADMON[AMON_ON]
                                                         must not be set.
                                                         0x10: PLL_CLK 0 degree.
                                                         0x11: Sds_tst_fb_clk.
                                                         0x12: Buffered refclk.
                                                         0x13: Div 8 of core clock (core_clk_out).
                                                         0x14-0x1F: Reserved. */
#else
	uint64_t pcs_sds_tad_4_0              : 5;
	uint64_t pcs_sds_tad_8_5              : 4;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_glbl_tad_s          cn78xx;
};
typedef union cvmx_gserx_glbl_tad cvmx_gserx_glbl_tad_t;

/**
 * cvmx_gser#_glbl_tm_admon
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_glbl_tm_admon {
	uint64_t u64;
	struct cvmx_gserx_glbl_tm_admon_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_8_63                : 56;
	uint64_t amon_on                      : 1;  /**< When set, AMON test mode is enabled; see GSER()_GLBL_TAD. */
	uint64_t dmon_on                      : 1;  /**< When set, DMON test mode is enabled; see GSER()_GLBL_TAD. */
	uint64_t reserved_3_5                 : 3;
	uint64_t lsel                         : 3;  /**< Three bits to select 1 out of 4 lanes for AMON/DMON test.
                                                         0x0 = Selects lane 0.
                                                         0x1 = Selects lane 1.
                                                         0x2 = Selects lane 2.
                                                         0x3 = Selects lane 3.
                                                         0x4-0x7 = Reserved. */
#else
	uint64_t lsel                         : 3;
	uint64_t reserved_3_5                 : 3;
	uint64_t dmon_on                      : 1;
	uint64_t amon_on                      : 1;
	uint64_t reserved_8_63                : 56;
#endif
	} s;
	struct cvmx_gserx_glbl_tm_admon_s     cn78xx;
};
typedef union cvmx_gserx_glbl_tm_admon cvmx_gserx_glbl_tm_admon_t;

/**
 * cvmx_gser#_iddq_mode
 *
 * These registers are reset by hardware only during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_iddq_mode {
	uint64_t u64;
	struct cvmx_gserx_iddq_mode_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t phy_iddq_mode                : 1;  /**< When set, power downs all circuitry in PHY for IDDQ testing */
#else
	uint64_t phy_iddq_mode                : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_iddq_mode_s         cn78xx;
};
typedef union cvmx_gserx_iddq_mode cvmx_gserx_iddq_mode_t;

/**
 * cvmx_gser#_lane#_lbert_cfg
 *
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_lbert_cfg {
	uint64_t u64;
	struct cvmx_gserx_lanex_lbert_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t lbert_pg_err_insert          : 1;  /**< Insert one bit error into the LSB of the LBERT generated
                                                         stream.  A single write to this bit inserts a single bit
                                                         error. */
	uint64_t lbert_pm_sync_start          : 1;  /**< Synchronize the pattern matcher LFSR with the incoming
                                                         data.  Writing this bit resets the error counter and
                                                         starts a synchronization of the PM.  There is no need
                                                         to write this bit back to a zero to run normally. */
	uint64_t lbert_pg_en                  : 1;  /**< Enable the LBERT pattern generator. */
	uint64_t lbert_pg_width               : 2;  /**< LBERT pattern generator data width:
                                                         0x0 = 8-bit data.
                                                         0x1 = 10-bit data.
                                                         0x2 = 16-bit data.
                                                         0x3 = 20-bit data. */
	uint64_t lbert_pg_mode                : 4;  /**< LBERT pattern generator mode; when changing modes,
                                                         must be disabled first:
                                                         0x0 = Disabled.
                                                         0x1 = lfsr31 = X^31 + X^28 + 1.
                                                         0x2 = lfsr23 = X^23 + X^18 + 1.
                                                         0x3 = lfsr23 = X^23 + X^21 + X^16 + X^8 + X^5 + X^2 + 1.
                                                         0x4 = lfsr16 = X^16 + X^5 + X^4 + X^3 + 1.
                                                         0x5 = lfsr15 = X^15 + X^14 + 1.
                                                         0x6 = lfsr11 = X^11 + X^9 + 1.
                                                         0x7 = lfsr7  = X^7 + X^6 + 1.
                                                         0x8 = Fixed word (PAT0).
                                                         0x9 = DC-balanced word (PAT0, ~PAT0)
                                                         0xA = Fixed Pattern (000, PAT0, 3ff, ~PAT0).
                                                         0xB-F = Reserved. */
	uint64_t lbert_pm_en                  : 1;  /**< Enable LBERT pattern matcher. */
	uint64_t lbert_pm_width               : 2;  /**< LBERT pattern matcher data width.
                                                         0x0 = 8-bit data.
                                                         0x1 = 10-bit data.
                                                         0x2 = 16-bit data.
                                                         0x3 = 20-bit data. */
	uint64_t lbert_pm_mode                : 4;  /**< LBERT pattern matcher mode; when changing modes,
                                                         must be disabled first:
                                                         0x0 = Disabled.
                                                         0x1 = lfsr31 = X^31 + X^28 + 1.
                                                         0x2 = lfsr23 = X^23 + X^18 + 1.
                                                         0x3 = lfsr23 = X^23 + X^21 + X^16 + X^8 + X^5 + X^2 + 1.
                                                         0x4 = lfsr16 = X^16 + X^5 + X^4 + X^3 + 1.
                                                         0x5 = lfsr15 = X^15 + X^14 + 1.
                                                         0x6 = lfsr11 = X^11 + X^9 + 1.
                                                         0x7 = lfsr7  = X^7 + X^6 + 1.
                                                         0x8 = Fixed word (PAT0).
                                                         0x9 = DC-balanced word (PAT0, ~PAT0).
                                                         0xA = Fixed Pattern: (000, PAT0, 3ff, ~PAT0).
                                                         0xB-F = Reserved. */
#else
	uint64_t lbert_pm_mode                : 4;
	uint64_t lbert_pm_width               : 2;
	uint64_t lbert_pm_en                  : 1;
	uint64_t lbert_pg_mode                : 4;
	uint64_t lbert_pg_width               : 2;
	uint64_t lbert_pg_en                  : 1;
	uint64_t lbert_pm_sync_start          : 1;
	uint64_t lbert_pg_err_insert          : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_lanex_lbert_cfg_s   cn78xx;
};
typedef union cvmx_gserx_lanex_lbert_cfg cvmx_gserx_lanex_lbert_cfg_t;

/**
 * cvmx_gser#_lane#_lbert_ecnt
 *
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 * The error registers are reset on a read-only when the pattern matcher is enabled.
 * If the pattern matcher is disabled, the registers return the error count that was
 * indicated when the pattern matcher was disabled and never reset.
 */
union cvmx_gserx_lanex_lbert_ecnt {
	uint64_t u64;
	struct cvmx_gserx_lanex_lbert_ecnt_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t lbert_err_ovbit14            : 1;  /**< If this bit is set, multiply LBERT_ERR_CNT by 128.
                                                         If this bit is set and LBERT_ERR_CNT = 2^15-1, signals
                                                         overflow of the counter. */
	uint64_t lbert_err_cnt                : 15; /**< Current error count.
                                                         If LBERT_ERR_OVBIT14 field is active, then multiply
                                                         count by 128. */
#else
	uint64_t lbert_err_cnt                : 15;
	uint64_t lbert_err_ovbit14            : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_lanex_lbert_ecnt_s  cn78xx;
};
typedef union cvmx_gserx_lanex_lbert_ecnt cvmx_gserx_lanex_lbert_ecnt_t;

/**
 * cvmx_gser#_lane#_lbert_pat_cfg
 *
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_lbert_pat_cfg {
	uint64_t u64;
	struct cvmx_gserx_lanex_lbert_pat_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_10_63               : 54;
	uint64_t lbert_pg_pat                 : 10; /**< Programmable 10-bit pattern to be used in the LBERT pattern mode;
                                                         applies when GSER()_LANE()_LBERT_CFG[LBERT_PG_MODE]
                                                         is equal to 8, 9, or 10. */
#else
	uint64_t lbert_pg_pat                 : 10;
	uint64_t reserved_10_63               : 54;
#endif
	} s;
	struct cvmx_gserx_lanex_lbert_pat_cfg_s cn78xx;
};
typedef union cvmx_gserx_lanex_lbert_pat_cfg cvmx_gserx_lanex_lbert_pat_cfg_t;

/**
 * cvmx_gser#_lane#_misc_cfg_0
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_misc_cfg_0 {
	uint64_t u64;
	struct cvmx_gserx_lanex_misc_cfg_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t use_pma_polarity             : 1;  /**< If set, the PMA control is used to define the polarity.
                                                         In not set, GSER()_LANE()_RX_CFG_0[CFG_RX_POL_INVERT]
                                                         is used. */
	uint64_t cfg_pcs_loopback             : 1;  /**< Assert for Parallel Loopback Raw PCS TX to Raw PCS RX. */
	uint64_t pcs_tx_mode_ovrrd_en         : 1;  /**< Override enable for Raw PCS TX data width. */
	uint64_t pcs_rx_mode_ovrrd_en         : 1;  /**< Override enable for Raw PCS RX data width. */
	uint64_t cfg_eie_det_cnt              : 4;  /**< EIE detect state machine required number of consecutive
                                                         PHY EIE status assertions to determine EIE and assert Raw
                                                         PCS output pcs_mac_rx_eie_det_sts. */
	uint64_t eie_det_stl_on_time          : 3;  /**< EIE detec state machine "on" delay prior to sampling
                                                         PHY EIE status. */
	uint64_t eie_det_stl_off_time         : 3;  /**< EIE detec state machine "off" delay prior to sampling
                                                         PHY EIE status. */
	uint64_t tx_bit_order                 : 1;  /**< 0x1: Reverse bit order of parallel data to SerDes TX.
                                                         0x0: Maintain bit order of parallel data to SerDes TX. */
	uint64_t rx_bit_order                 : 1;  /**< 0x1: Reverse bit order of parallel data to SerDes RX.
                                                         0x0: Maintain bit order of parallel data to SerDes RX. */
#else
	uint64_t rx_bit_order                 : 1;
	uint64_t tx_bit_order                 : 1;
	uint64_t eie_det_stl_off_time         : 3;
	uint64_t eie_det_stl_on_time          : 3;
	uint64_t cfg_eie_det_cnt              : 4;
	uint64_t pcs_rx_mode_ovrrd_en         : 1;
	uint64_t pcs_tx_mode_ovrrd_en         : 1;
	uint64_t cfg_pcs_loopback             : 1;
	uint64_t use_pma_polarity             : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_lanex_misc_cfg_0_s  cn78xx;
};
typedef union cvmx_gserx_lanex_misc_cfg_0 cvmx_gserx_lanex_misc_cfg_0_t;

/**
 * cvmx_gser#_lane#_misc_cfg_1
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_misc_cfg_1 {
	uint64_t u64;
	struct cvmx_gserx_lanex_misc_cfg_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_13_63               : 51;
	uint64_t par_tx_init                  : 1;  /**< Performs parallel initialization of SerDes interface TX
                                                         fifo pointers. */
	uint64_t tx_polarity                  : 1;  /**< Invert polarity of trasmitted bit stream.  Inversion is
                                                         performed in the SerDes interface transmit datapth. */
	uint64_t rx_polarity_ovrrd_en         : 1;  /**< Override mac_pcs_rxX_polarity control pin values
                                                         When set, RX polarity inversion is specified from
                                                         RX_POLARITY_OVRRD_VAL, and mac_pcs_rxX_polarity is ignored. */
	uint64_t rx_polarity_ovrrd_val        : 1;  /**< Controls RX polarity inversion when RX_POLARITY_OVRRD_EN
                                                         is set. Inversion is performed in the SerDes interface receive
                                                         datapath. */
	uint64_t reserved_2_8                 : 7;
	uint64_t mac_tx_fifo_rd_ptr_ival      : 2;  /**< Initial value for MAC to PCS TX FIFO read pointer. */
#else
	uint64_t mac_tx_fifo_rd_ptr_ival      : 2;
	uint64_t reserved_2_8                 : 7;
	uint64_t rx_polarity_ovrrd_val        : 1;
	uint64_t rx_polarity_ovrrd_en         : 1;
	uint64_t tx_polarity                  : 1;
	uint64_t par_tx_init                  : 1;
	uint64_t reserved_13_63               : 51;
#endif
	} s;
	struct cvmx_gserx_lanex_misc_cfg_1_s  cn78xx;
};
typedef union cvmx_gserx_lanex_misc_cfg_1 cvmx_gserx_lanex_misc_cfg_1_t;

/**
 * cvmx_gser#_lane#_pcs_ctlifc_0
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_pcs_ctlifc_0 {
	uint64_t u64;
	struct cvmx_gserx_lanex_pcs_ctlifc_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_14_63               : 50;
	uint64_t cfg_tx_vboost_en_ovrrd_val   : 1;  /**< Specifies TX VBOOST Enable request when its override bit
                                                         is asserted GSER()_LANE()_PCS_CTLIFC_2[CFG_TX_VBOOST_EN_OVRRD_EN]. */
	uint64_t cfg_tx_coeff_req_ovrrd_val   : 1;  /**< Specifies TX Coefficient request when its override bit
                                                         is asserted GSER()_LANE()_PCS_CTLIFC_2[CFG_TX_COEFF_REQ_OVRRD_EN]. */
	uint64_t cfg_rx_cdr_coast_req_ovrrd_val : 1;/**< Specifies RX CDR Coast request when its override bit
                                                         is asserted GSER()_LANE()_PCS_CTLIFC_2[CFG_RX_COAST_REQ_OVRRD_EN]. */
	uint64_t cfg_tx_detrx_en_req_ovrrd_val : 1; /**< Specifies TX Detect RX request when its override bit
                                                         is asserted GSER()_LANE()_PCS_CTLIFC_2[CFG_TX_DETRX_EN_REQ_OVRRD_EN]. */
	uint64_t cfg_soft_reset_req_ovrrd_val : 1;  /**< Specifies Soft Reset request when its override bit
                                                         is asserted GSER()_LANE()_PCS_CTLIFC_2[CFG_SOFT_RESET_REQ_OVRRD_EN]. */
	uint64_t cfg_lane_pwr_off_ovrrd_val   : 1;  /**< Specifies Lane Power Off Reset request when its override bit
                                                         is asserted GSER()_LANE()_PCS_CTLIFC_2[CFG_LANE_PWR_OFF_OVRRD_EN]. */
	uint64_t cfg_tx_mode_ovrrd_val        : 2;  /**< Override PCS TX mode (data width) when its override bit
                                                         is asserted GSER()_LANE()_PCS_CTLIFC_2[CFG_TX_MODE_OVRRD_EN].
                                                         0x0 = 8-bit raw data (not supported).
                                                         0x1 = 10-bit raw data (not supported).
                                                         0x2 = 16-bit raw data (not supported).
                                                         0x3 = 20-bit raw data. */
	uint64_t cfg_tx_pstate_req_ovrrd_val  : 2;  /**< Override TX pstate request when its override bit
                                                         is asserted GSER()_LANE()_PCS_CTLIFC_2[CFG_TX_PSTATE_REQ_OVRRD_EN]. */
	uint64_t cfg_lane_mode_req_ovrrd_val  : 4;  /**< Override Lane Mode request when its override bit
                                                         is asserted GSER()_LANE()_PCS_CTLIFC_2[CFG_LANE_MODE_REQ_OVRRD_EN]. */
#else
	uint64_t cfg_lane_mode_req_ovrrd_val  : 4;
	uint64_t cfg_tx_pstate_req_ovrrd_val  : 2;
	uint64_t cfg_tx_mode_ovrrd_val        : 2;
	uint64_t cfg_lane_pwr_off_ovrrd_val   : 1;
	uint64_t cfg_soft_reset_req_ovrrd_val : 1;
	uint64_t cfg_tx_detrx_en_req_ovrrd_val : 1;
	uint64_t cfg_rx_cdr_coast_req_ovrrd_val : 1;
	uint64_t cfg_tx_coeff_req_ovrrd_val   : 1;
	uint64_t cfg_tx_vboost_en_ovrrd_val   : 1;
	uint64_t reserved_14_63               : 50;
#endif
	} s;
	struct cvmx_gserx_lanex_pcs_ctlifc_0_s cn78xx;
};
typedef union cvmx_gserx_lanex_pcs_ctlifc_0 cvmx_gserx_lanex_pcs_ctlifc_0_t;

/**
 * cvmx_gser#_lane#_pcs_ctlifc_1
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_pcs_ctlifc_1 {
	uint64_t u64;
	struct cvmx_gserx_lanex_pcs_ctlifc_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t cfg_rx_pstate_req_ovrrd_val  : 2;  /**< Override RX pstate request when its override bit
                                                         is asserted GSER()_LANE()_PCS_CTLIFC_2[CFG_TX_PSTATE_REQ_OVRRD_EN]. */
	uint64_t reserved_2_6                 : 5;
	uint64_t cfg_rx_mode_ovrrd_val        : 2;  /**< Override PCS RX mode (data width) when its override bit
                                                         is asserted GSER()_LANE()_PCS_CTLIFC_2[CFG_RX_MODE_OVRRD_EN].
                                                         0x0 = 8-bit raw data (not supported).
                                                         0x1 = 10-bit raw data (not supported).
                                                         0x2 = 16-bit raw data (not supported).
                                                         0x3 = 20-bit raw data. */
#else
	uint64_t cfg_rx_mode_ovrrd_val        : 2;
	uint64_t reserved_2_6                 : 5;
	uint64_t cfg_rx_pstate_req_ovrrd_val  : 2;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_lanex_pcs_ctlifc_1_s cn78xx;
};
typedef union cvmx_gserx_lanex_pcs_ctlifc_1 cvmx_gserx_lanex_pcs_ctlifc_1_t;

/**
 * cvmx_gser#_lane#_pcs_ctlifc_2
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_pcs_ctlifc_2 {
	uint64_t u64;
	struct cvmx_gserx_lanex_pcs_ctlifc_2_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t ctlifc_ovrrd_req             : 1;  /**< Writing to set this bit initiates a state machine interface request
                                                         for GSER()_LANE()_PCS_CTLIFC_0 and GSER()_LANE()_PCS_CTLIFC_1
                                                         override values. */
	uint64_t reserved_9_14                : 6;
	uint64_t cfg_tx_vboost_en_ovrrd_en    : 1;  /**< Override mac_pcs_txX vboost_en signal with the value specified in
                                                         GSER()_LANE()_PCS_CTLIFC_2[CFG_TX_VBOOST_EN_OVRRD_VAL]. */
	uint64_t cfg_tx_coeff_req_ovrrd_en    : 1;  /**< Override mac_pcs_txX_coeff_req signal with the value specified in
                                                         GSER()_LANE()_PCS_CTLIFC_0[CFG_TX_COEFF_REQ_OVRRD_VAL]. */
	uint64_t cfg_rx_cdr_coast_req_ovrrd_en : 1; /**< Override mac_pcs_rxX_cdr_coast signal with the value specified in
                                                         GSER()_LANE()_PCS_CTLIFC_2[CFG_RX_COAST_REQ_OVRRD_VAL]. */
	uint64_t cfg_tx_detrx_en_req_ovrrd_en : 1;  /**< Override mac_pcs_txX_detrx_en signal with the value specified in
                                                         GSER()_LANE()_PCS_CTLIFC_2[CFG_TX_DETRX_EN_REQ_OVRRD_VAL]. */
	uint64_t cfg_soft_reset_req_ovrrd_en  : 1;  /**< Override mac_pcs_laneX_soft_rst signal with the value specified in
                                                         GSER()_LANE()_PCS_CTLIFC_2[CFG_SOFT_RESET_REQ_OVRRD_VAL]. */
	uint64_t cfg_lane_pwr_off_ovrrd_en    : 1;  /**< Override mac_pcs_laneX_pwr_off signal with the value specified in
                                                         GSER()_LANE()_PCS_CTLIFC_2[CFG_LANE_PWR_OFF_OVRRD_VAL]. */
	uint64_t cfg_tx_pstate_req_ovrrd_en   : 1;  /**< Override mac_pcs_txX_pstate[1:0] signal with the value specified in
                                                         GSER()_LANE()_PCS_CTLIFC_2[CFG_TX_PSTATE_REQ_OVRRD_VAL].
                                                         When using this field to change the TX Power State, you must also set
                                                         the override enable bits for the lane_mode, soft_reset and lane_pwr_off
                                                         fields.  The corresponding orrd_val fields should be programmed so as
                                                         not to cause undesired changes. */
	uint64_t cfg_rx_pstate_req_ovrrd_en   : 1;  /**< Override mac_pcs_rxX_pstate[1:0] signal with the value specified in
                                                         GSER()_LANE()_PCS_CTLIFC_2[CFG_RX_PSTATE_REQ_OVRRD_VAL].
                                                         When using this field to change the RX Power State, you must also set
                                                         the override enable bits for the lane_mode, soft_reset and lane_pwr_off
                                                         fields.  The corresponding orrd_val fields should be programmed so as
                                                         not to cause undesired changes. */
	uint64_t cfg_lane_mode_req_ovrrd_en   : 1;  /**< Override mac_pcs_laneX_mode[3:0] signal with the value specified in
                                                         is asserted GSER()_LANE()_PCS_CTLIFC_2[CFG_LANE_MODE_REQ_OVRRD_VAL]. */
#else
	uint64_t cfg_lane_mode_req_ovrrd_en   : 1;
	uint64_t cfg_rx_pstate_req_ovrrd_en   : 1;
	uint64_t cfg_tx_pstate_req_ovrrd_en   : 1;
	uint64_t cfg_lane_pwr_off_ovrrd_en    : 1;
	uint64_t cfg_soft_reset_req_ovrrd_en  : 1;
	uint64_t cfg_tx_detrx_en_req_ovrrd_en : 1;
	uint64_t cfg_rx_cdr_coast_req_ovrrd_en : 1;
	uint64_t cfg_tx_coeff_req_ovrrd_en    : 1;
	uint64_t cfg_tx_vboost_en_ovrrd_en    : 1;
	uint64_t reserved_9_14                : 6;
	uint64_t ctlifc_ovrrd_req             : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_lanex_pcs_ctlifc_2_s cn78xx;
};
typedef union cvmx_gserx_lanex_pcs_ctlifc_2 cvmx_gserx_lanex_pcs_ctlifc_2_t;

/**
 * cvmx_gser#_lane#_pma_loopback_ctrl
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_pma_loopback_ctrl {
	uint64_t u64;
	struct cvmx_gserx_lanex_pma_loopback_ctrl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_2_63                : 62;
	uint64_t cfg_ln_lpbk_mode_ovrrd_en    : 1;  /**< Enable override mac_pcs_loopbk_mode[3:0] with value of FG_LN_LPBK_MODE. */
	uint64_t cfg_ln_lpbk_mode             : 1;  /**< Override value when CFG_LN_LPBK_MODE_OVRRD_EN is set. */
#else
	uint64_t cfg_ln_lpbk_mode             : 1;
	uint64_t cfg_ln_lpbk_mode_ovrrd_en    : 1;
	uint64_t reserved_2_63                : 62;
#endif
	} s;
	struct cvmx_gserx_lanex_pma_loopback_ctrl_s cn78xx;
};
typedef union cvmx_gserx_lanex_pma_loopback_ctrl cvmx_gserx_lanex_pma_loopback_ctrl_t;

/**
 * cvmx_gser#_lane#_pwr_ctrl
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_pwr_ctrl {
	uint64_t u64;
	struct cvmx_gserx_lanex_pwr_ctrl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t tx_sds_fifo_reset_ovrrd_en   : 1;  /**< When asserted, TX_SDS_FIFO_RESET_OVVRD_VAL is used to specify the value of the reset
                                                         signal for the TX FIFO supplying data to the SerDes p2s interface. */
	uint64_t tx_sds_fifo_reset_ovrrd_val  : 1;  /**< When asserted, TX_SDS_FIFO_RESET_OVVRD_EN is asserted, this field is
                                                         used to specify the value of the reset
                                                         signal for the TX FIFO supplying data to the SerDes p2s interface. */
	uint64_t tx_pcs_reset_ovrrd_val       : 1;  /**< When TX_PCS_RESET_OVRRD_EN is
                                                         asserted, this field is used to specify the value of
                                                         the reset signal for PCS TX logic. */
	uint64_t rx_pcs_reset_ovrrd_val       : 1;  /**< When RX_PCS_RESET_OVRRD_EN is
                                                         asserted, this field is used to specify the value of
                                                         the reset signal for PCS RX logic. */
	uint64_t reserved_9_10                : 2;
	uint64_t rx_resetn_ovrrd_en           : 1;  /**< Override RX Power State machine rx_resetn
                                                         control signal.  When set, the rx_resetn control signal is taken
                                                         from the GSER()_LANE()_RX_CFG_0[RX_RESETN_OVRRD_VAL]
                                                         control bit. */
	uint64_t rx_resetn_ovrrd_val          : 1;  /**< Override RX Power State machine reset control
                                                         signal. When set, reset control signals are specified in
                                                         [RX_PCS_RESET_OVRRD_VAL]. */
	uint64_t rx_lctrl_ovrrd_en            : 1;  /**< Override RX Power State machine loop control
                                                         signals.  When set, the loop control settings are
                                                         specified in the GSER()_LANE()_RX_LOOP_CTRL[CFG_RX_LCTRL] field. */
	uint64_t rx_lctrl_ovrrd_val           : 1;  /**< Override RX Power State machine power down
                                                         control signal. When set, the power down control signal is
                                                         specified by GSER()_LANE()_RX_CFG_1[RX_CHPD_OVRRD_VAL]. */
	uint64_t tx_tristate_en_ovrrd_en      : 1;  /**< Override TX Power State machine TX tristate
                                                         control signal.  When set, TX tristate control signal is specified
                                                         in GSER()_LANE()_TX_CFG_0[TX_TRISTATE_EN_OVRRD_VAL]. */
	uint64_t tx_pcs_reset_ovrrd_en        : 1;  /**< Override TX Power State machine reset control
                                                         signal.  When set, reset control signals is specified in
                                                         [TX_PCS_RESET_OVRRD_VAL]. */
	uint64_t tx_elec_idle_ovrrd_en        : 1;  /**< Override mac_pcs_txX_elec_idle signal
                                                         When set, TX electrical idle is controlled from
                                                         GSER()_LANE()_TX_CFG_1[TX_ELEC_IDLE_OVRRD_VAL]
                                                         mac_pcs_txX_elec_idle signal is ignored. */
	uint64_t tx_pd_ovrrd_en               : 1;  /**< Override TX Power State machine TX lane
                                                         power-down control signal
                                                         When set, TX lane power down is controlled by
                                                         GSER()_LANE()_TX_CFG_0[TX_CHPD_OVRRD_VAL]. */
	uint64_t tx_p2s_resetn_ovrrd_en       : 1;  /**< Override TX Power State machine TX reset
                                                         control signal
                                                         When set, TX reset is controlled by
                                                         GSER()_LANE()_TX_CFG_0[TX_RESETN_OVRRD_VAL]. */
#else
	uint64_t tx_p2s_resetn_ovrrd_en       : 1;
	uint64_t tx_pd_ovrrd_en               : 1;
	uint64_t tx_elec_idle_ovrrd_en        : 1;
	uint64_t tx_pcs_reset_ovrrd_en        : 1;
	uint64_t tx_tristate_en_ovrrd_en      : 1;
	uint64_t rx_lctrl_ovrrd_val           : 1;
	uint64_t rx_lctrl_ovrrd_en            : 1;
	uint64_t rx_resetn_ovrrd_val          : 1;
	uint64_t rx_resetn_ovrrd_en           : 1;
	uint64_t reserved_9_10                : 2;
	uint64_t rx_pcs_reset_ovrrd_val       : 1;
	uint64_t tx_pcs_reset_ovrrd_val       : 1;
	uint64_t tx_sds_fifo_reset_ovrrd_val  : 1;
	uint64_t tx_sds_fifo_reset_ovrrd_en   : 1;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_gserx_lanex_pwr_ctrl_s    cn78xx;
};
typedef union cvmx_gserx_lanex_pwr_ctrl cvmx_gserx_lanex_pwr_ctrl_t;

/**
 * cvmx_gser#_lane#_rx_aeq_out_0
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_rx_aeq_out_0 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_aeq_out_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_10_63               : 54;
	uint64_t sds_pcs_rx_aeq_out           : 10; /**< <9:5>: DFE TAP5
                                                         <4:0>: DFE TAP4 */
#else
	uint64_t sds_pcs_rx_aeq_out           : 10;
	uint64_t reserved_10_63               : 54;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_aeq_out_0_s cn78xx;
};
typedef union cvmx_gserx_lanex_rx_aeq_out_0 cvmx_gserx_lanex_rx_aeq_out_0_t;

/**
 * cvmx_gser#_lane#_rx_aeq_out_1
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_rx_aeq_out_1 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_aeq_out_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t sds_pcs_rx_aeq_out           : 15; /**< <14:10> = DFE TAP3.
                                                         <9:5> = DFE TAP2.
                                                         <4:0> = DFE TAP1. */
#else
	uint64_t sds_pcs_rx_aeq_out           : 15;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_aeq_out_1_s cn78xx;
};
typedef union cvmx_gserx_lanex_rx_aeq_out_1 cvmx_gserx_lanex_rx_aeq_out_1_t;

/**
 * cvmx_gser#_lane#_rx_aeq_out_2
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_rx_aeq_out_2 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_aeq_out_2_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t sds_pcs_rx_aeq_out           : 15; /**< <9:8> = Reserved.
                                                         <7:4> = Pre-CTLE gain.
                                                         <3:0> = Post-CTLE gain. */
#else
	uint64_t sds_pcs_rx_aeq_out           : 15;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_aeq_out_2_s cn78xx;
};
typedef union cvmx_gserx_lanex_rx_aeq_out_2 cvmx_gserx_lanex_rx_aeq_out_2_t;

/**
 * cvmx_gser#_lane#_rx_cfg_0
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_rx_cfg_0 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_cfg_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t rx_datarate_ovrrd_en         : 1;  /**< Override enable for RX Power State Machine data rate signal. */
	uint64_t pcs_sds_rx_tristate_enable   : 1;  /**< RX termination high-Z enable. */
	uint64_t rx_resetn_ovvrd_val          : 1;  /**< This value overrides the RX Power State machine rx_resetn control
                                                         signal when GSER()_LANE()_PWR_CTRL[RX_RESETN_OVRRD_EN] is set. */
	uint64_t pcs_sds_rx_eyemon_en         : 1;  /**< RX eyemon test enable. */
	uint64_t pcs_sds_rx_pcm_ctrl          : 4;  /**< <11>: Reserved
                                                         <10-8>:
                                                           0x0 = 540mV.
                                                           0x1 = 540mV + 20mV.
                                                           0x2-0x3 = Reserved.
                                                           0x4 = 100-620mV (default).
                                                           0x5-0x7 = Reserved. */
	uint64_t rx_datarate_ovrrd_val        : 2;  /**< Specifies the data rate when RX_DATARATE_OVRRD_EN is asserted:
                                                         0x0 = Full rate.
                                                         0x1 = 1/2 data rate.
                                                         0x2 = 1/4 data rate.
                                                         0x3 = 1/8 data rate. */
	uint64_t cfg_rx_pol_invert            : 1;  /**< Invert the receive data.  Allies with GSER()_LANE()_MISC_CFG_0[USE_PMA_POLARITY]
                                                         is deasserted. */
	uint64_t rx_subblk_pd_ovrrd_val       : 5;  /**< Not supported. */
#else
	uint64_t rx_subblk_pd_ovrrd_val       : 5;
	uint64_t cfg_rx_pol_invert            : 1;
	uint64_t rx_datarate_ovrrd_val        : 2;
	uint64_t pcs_sds_rx_pcm_ctrl          : 4;
	uint64_t pcs_sds_rx_eyemon_en         : 1;
	uint64_t rx_resetn_ovvrd_val          : 1;
	uint64_t pcs_sds_rx_tristate_enable   : 1;
	uint64_t rx_datarate_ovrrd_en         : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_cfg_0_s    cn78xx;
};
typedef union cvmx_gserx_lanex_rx_cfg_0 cvmx_gserx_lanex_rx_cfg_0_t;

/**
 * cvmx_gser#_lane#_rx_cfg_1
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_rx_cfg_1 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_cfg_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t rx_chpd_ovrrd_val            : 1;  /**< Not supported. */
	uint64_t pcs_sds_rx_os_men            : 1;  /**< RX Offset manual enable. */
	uint64_t eie_en_ovvrd_en              : 1;  /**< Override enable for Electrical-Idle-Exit circuit. */
	uint64_t eie_en_ovvrd_val             : 1;  /**< Override value for Electrical-Idle-Exit circuit. */
	uint64_t reserved_11_11               : 1;
	uint64_t rx_pcie_mode_ovvrd_en        : 1;  /**< Override enable for RX_PCIE_MODE_OVVRD_VAL. */
	uint64_t rx_pcie_mode_ovvrd_val       : 1;  /**< Override value for RX_PCIE_MODE_OVVRD_VAL;
                                                         selects between RX terminations.
                                                         0x0 = pcs_sds_rx_terminate_to_vdda.
                                                         0x1 = VDDA. */
	uint64_t cfg_rx_dll_locken            : 1;  /**< Enable DLL lock when GSER()_LANE()_RX_MISC_OVRRD[CFG_RX_DLL_LOCKEN_OVRRD_EN] is asserted. */
	uint64_t pcs_sds_rx_cdr_ssc_mode      : 8;  /**< Per lane RX CDR SSC control:
                                                         <7:4> = Resrted.
                                                         <3> = Clean SSC error flag.
                                                         <2> = Diable SSC filter.
                                                         <1> = Enable SSC value usage.
                                                         <0> = Reserved. */
#else
	uint64_t pcs_sds_rx_cdr_ssc_mode      : 8;
	uint64_t cfg_rx_dll_locken            : 1;
	uint64_t rx_pcie_mode_ovvrd_val       : 1;
	uint64_t rx_pcie_mode_ovvrd_en        : 1;
	uint64_t reserved_11_11               : 1;
	uint64_t eie_en_ovvrd_val             : 1;
	uint64_t eie_en_ovvrd_en              : 1;
	uint64_t pcs_sds_rx_os_men            : 1;
	uint64_t rx_chpd_ovrrd_val            : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_cfg_1_s    cn78xx;
};
typedef union cvmx_gserx_lanex_rx_cfg_1 cvmx_gserx_lanex_rx_cfg_1_t;

/**
 * cvmx_gser#_lane#_rx_cfg_2
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_rx_cfg_2 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_cfg_2_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t pcs_sds_rx_terminate_to_vdda : 1;  /**< RX Termination control:
                                                         0 = Floating.
                                                         1 = Terminate to sds_vdda. */
	uint64_t pcs_sds_rx_sampler_boost     : 2;  /**< Controls amount of boost.
                                                         Note that this control can negatively impact reliability. */
	uint64_t pcs_sds_rx_sampler_boost_en  : 1;  /**< Faster sampler c2q.
                                                         For diagnostic use only. */
	uint64_t reserved_10_10               : 1;
	uint64_t rx_sds_rx_agc_mval           : 10; /**< AGC manual value only used when GSERX_LANE()_RX_CFG_5[RX_AGC_MEN_OVVRD_VAL] is set.
                                                         <9:8>: Reserved.
                                                         <7:4>: Pre-CTL gain
                                                         - 0 = -6dB
                                                         - 1 = -5dB
                                                         - 3 = +5dB.
                                                         <3:0>: Post-CTL gain (steps of 0.0875)
                                                         - 0x0 = lowest
                                                         - 0xf = lowest * 2.3125. */
#else
	uint64_t rx_sds_rx_agc_mval           : 10;
	uint64_t reserved_10_10               : 1;
	uint64_t pcs_sds_rx_sampler_boost_en  : 1;
	uint64_t pcs_sds_rx_sampler_boost     : 2;
	uint64_t pcs_sds_rx_terminate_to_vdda : 1;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_cfg_2_s    cn78xx;
};
typedef union cvmx_gserx_lanex_rx_cfg_2 cvmx_gserx_lanex_rx_cfg_2_t;

/**
 * cvmx_gser#_lane#_rx_cfg_3
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_rx_cfg_3 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_cfg_3_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t cfg_rx_errdet_ctrl           : 16; /**< RX Adaptive Equalizer Control.
                                                         Value of pcs_sds_rx_err_det_ctrl when
                                                         GSER()_LANE()_RX_MISC_OVRRD[CFG_RS_ERRDET_CTRL_OVRRD_EN]
                                                         is set.
                                                         <15:13>: Starting delta (6.7mV/step, 13.4mV + 6.7mV*N).
                                                         <12:10>: Minimum delta to adapt to (6.7mV/step, 13.4mV + 6.7mV*N).
                                                         <9:7>: Window mode (PM) delta (6.7mV/step, 13.4mV + 6.7mV*N).
                                                         <6>: Enable DFE for edge samplers.
                                                         <5:4>: Edge sampler DEF alpha:
                                                         0x0 = 1/4.
                                                         0x1 = 1/2.
                                                         0x2 = 3/4.
                                                         0x3 = 1.
                                                         <3:0>: Q/QB error sampler 1 threshold, 6.7mV/step. */
#else
	uint64_t cfg_rx_errdet_ctrl           : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_cfg_3_s    cn78xx;
};
typedef union cvmx_gserx_lanex_rx_cfg_3 cvmx_gserx_lanex_rx_cfg_3_t;

/**
 * cvmx_gser#_lane#_rx_cfg_4
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_rx_cfg_4 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_cfg_4_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t cfg_rx_errdet_ctrl           : 16; /**< RX adaptive equalizer control.
                                                         Value of pcs_sds_rx_err_det_ctrl when
                                                         GSER()_LANE()_RX_MISC_OVRRD[CFG_RS_ERRDET_CTRL_OVRRD_EN] is set.
                                                         <15:14>: Reserved
                                                         <13:8>: Q/QB error sampler 0 threshold, 6.7mV/step, used for training/LMS.
                                                         <7>: Enable Window mode, after training has finished.
                                                         <6:5>: Control sds_pcs_rx_vma_status[15:8].
                                                         0x0 = window counter[19:12] (FOM).
                                                         0x1 = window ouunter[11:4].
                                                         0x2 = CTLE pole, SDLL_IQ.
                                                         0x3 = pre-CTLE gain, CTLE peak.
                                                         <4>: Offset cancellation enable.
                                                         <3:0>: Max CTLE peak setting during training when pcs_sds_rx_vma_ctl[7] is set in
                                                         GSER()_LANE()_RX_VMA_CTRL. */
#else
	uint64_t cfg_rx_errdet_ctrl           : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_cfg_4_s    cn78xx;
};
typedef union cvmx_gserx_lanex_rx_cfg_4 cvmx_gserx_lanex_rx_cfg_4_t;

/**
 * cvmx_gser#_lane#_rx_cfg_5
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_rx_cfg_5 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_cfg_5_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_5_63                : 59;
	uint64_t rx_agc_men_ovvrd_en          : 1;  /**< Override enable for AGC manual mode. */
	uint64_t rx_agc_men_ovvrd_val         : 1;  /**< Override value for AGC manual mode. */
	uint64_t rx_widthsel_ovvrd_en         : 1;  /**< Override enable for RX width select to the SerDes pcs_sds_rx_widthsel. */
	uint64_t rx_widthsel_ovvrd_val        : 2;  /**< Override value for RX width select to the SerDes pcs_sds_rx_widthsel.
                                                         0x0 = 8-bit raw data.
                                                         0x1 = 10-bit raw data.
                                                         0x2 = 16-bit raw data.
                                                         0x3 = 20-bit raw data. */
#else
	uint64_t rx_widthsel_ovvrd_val        : 2;
	uint64_t rx_widthsel_ovvrd_en         : 1;
	uint64_t rx_agc_men_ovvrd_val         : 1;
	uint64_t rx_agc_men_ovvrd_en          : 1;
	uint64_t reserved_5_63                : 59;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_cfg_5_s    cn78xx;
};
typedef union cvmx_gserx_lanex_rx_cfg_5 cvmx_gserx_lanex_rx_cfg_5_t;

/**
 * cvmx_gser#_lane#_rx_ctle_ctrl
 *
 * These are the RAW PCS per-lane RX CTLE control registers.
 * These registers are reset by hardware only during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_rx_ctle_ctrl {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_ctle_ctrl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t pcs_sds_rx_ctle_bias_ctrl    : 2;  /**< CTLE bias trim bits.
                                                         0x0 = -10%.
                                                         0x1 =  0%.
                                                         0x2 = +5%.
                                                         0x3 = +10%. */
	uint64_t pcs_sds_rx_ctle_zero         : 4;  /**< Equalizer peaking control. */
	uint64_t rx_ctle_pole_ovrrd_en        : 1;  /**< Equalizer pole adjustment override enable. */
	uint64_t rx_ctle_pole_ovrrd_val       : 4;  /**< Equalizer pole adjustment override value.
                                                         RX pre-correlation sample counter control
                                                         bit 3: Optimize CTLE during training.
                                                         bit 2: Turn off DFE1 for edge samplers.
                                                         bits 1:0:
                                                         0x0 = ~ 5dB of peaking at 4.0 GHz.
                                                         0x1 = ~10dB of peaking at 5.0 GHz.
                                                         0x2 = ~15dB of peaking at 5.5 GHz.
                                                         0x3 = ~20dB of peaking at 6.0 GHz. */
	uint64_t pcs_sds_rx_ctle_pole_max     : 2;  /**< Maximum pole value (for VMA adaption, not applicable in manual mode). */
	uint64_t pcs_sds_rx_ctle_pole_min     : 2;  /**< Minimum pole value (for VMA adaption, not applicable in manual mode). */
	uint64_t pcs_sds_rx_ctle_pole_step    : 1;  /**< Step pole value (for VMA adaption, not applicable in manual mode). */
#else
	uint64_t pcs_sds_rx_ctle_pole_step    : 1;
	uint64_t pcs_sds_rx_ctle_pole_min     : 2;
	uint64_t pcs_sds_rx_ctle_pole_max     : 2;
	uint64_t rx_ctle_pole_ovrrd_val       : 4;
	uint64_t rx_ctle_pole_ovrrd_en        : 1;
	uint64_t pcs_sds_rx_ctle_zero         : 4;
	uint64_t pcs_sds_rx_ctle_bias_ctrl    : 2;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_ctle_ctrl_s cn78xx;
};
typedef union cvmx_gserx_lanex_rx_ctle_ctrl cvmx_gserx_lanex_rx_ctle_ctrl_t;

/**
 * cvmx_gser#_lane#_rx_loop_ctrl
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_rx_loop_ctrl {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_loop_ctrl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_12_63               : 52;
	uint64_t fast_dll_lock                : 1;  /**< Assert to enable fast DLL lock (for simulation purposes only). */
	uint64_t fast_ofst_cncl               : 1;  /**< Assert to enable fast Offset cancellation (for simulation purposes only). */
	uint64_t cfg_rx_lctrl                 : 10; /**< When GSER()_LANE()_PWR_CTRL[RX_LCTRL_OVRRD_EN] is set, loop control settings.
                                                         0x0 = cdr_en_byp.
                                                         0x1 = dfe_en_byp.
                                                         0x2 = agc_en_byp.
                                                         0x3 = ofst_cncl_en_byp.
                                                         0x4 = CDR resetn.
                                                         0x5 = CTLE resetn.
                                                         0x6 = VMA resetn.
                                                         0x7 = ofst_cncl_rstn_byp.
                                                         0x8 = lctrl_men.
                                                         0x9 - 0x3ff = Reserved. */
#else
	uint64_t cfg_rx_lctrl                 : 10;
	uint64_t fast_ofst_cncl               : 1;
	uint64_t fast_dll_lock                : 1;
	uint64_t reserved_12_63               : 52;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_loop_ctrl_s cn78xx;
};
typedef union cvmx_gserx_lanex_rx_loop_ctrl cvmx_gserx_lanex_rx_loop_ctrl_t;

/**
 * cvmx_gser#_lane#_rx_misc_ovrrd
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_rx_misc_ovrrd {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_misc_ovrrd_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_14_63               : 50;
	uint64_t cfg_rx_oob_clk_en_ovrrd_val  : 1;  /**< Not supported. */
	uint64_t cfg_rx_oob_clk_en_ovrrd_en   : 1;  /**< Not supported. */
	uint64_t cfg_rx_eie_det_ovrrd_val     : 1;  /**< Override value for RX Electrical-Idle-Exit
                                                         Detect Enable. */
	uint64_t cfg_rx_eie_det_ovrrd_en      : 1;  /**< Override enable for RX Electrical-Idle-Exit
                                                         Detect Enable. */
	uint64_t cfg_rx_cdr_ctrl_ovvrd_en     : 1;  /**< Not supported. */
	uint64_t cfg_rx_eq_eval_ovrrd_val     : 1;  /**< Training mode control in override mode. */
	uint64_t cfg_rx_eq_eval_ovrrd_en      : 1;  /**< Override enable for RX-EQ Eval
                                                         When asserted, training mode is controlled by
                                                         CFG_RX_EQ_EVAL_OVRRD_VAL. */
	uint64_t reserved_6_6                 : 1;
	uint64_t cfg_rx_dll_locken_ovvrd_en   : 1;  /**< When asserted, override DLL lock enable
                                                         signal from the RX Power State machine with
                                                         CFG_RX_DLL_LOCKEN in register
                                                         GSER()_LANE()_RX_CFG_1. */
	uint64_t cfg_rx_errdet_ctrl_ovvrd_en  : 1;  /**< When asserted, pcs_sds_rx_err_det_ctrl is set
                                                         to cfg_rx_errdet_ctrl in registers
                                                         GSER()_LANE()_RX_CFG_3 and GSER()_LANE()_RX_CFG_4. */
	uint64_t reserved_0_3                 : 4;
#else
	uint64_t reserved_0_3                 : 4;
	uint64_t cfg_rx_errdet_ctrl_ovvrd_en  : 1;
	uint64_t cfg_rx_dll_locken_ovvrd_en   : 1;
	uint64_t reserved_6_6                 : 1;
	uint64_t cfg_rx_eq_eval_ovrrd_en      : 1;
	uint64_t cfg_rx_eq_eval_ovrrd_val     : 1;
	uint64_t cfg_rx_cdr_ctrl_ovvrd_en     : 1;
	uint64_t cfg_rx_eie_det_ovrrd_en      : 1;
	uint64_t cfg_rx_eie_det_ovrrd_val     : 1;
	uint64_t cfg_rx_oob_clk_en_ovrrd_en   : 1;
	uint64_t cfg_rx_oob_clk_en_ovrrd_val  : 1;
	uint64_t reserved_14_63               : 50;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_misc_ovrrd_s cn78xx;
};
typedef union cvmx_gserx_lanex_rx_misc_ovrrd cvmx_gserx_lanex_rx_misc_ovrrd_t;

/**
 * cvmx_gser#_lane#_rx_precorr_ctrl
 *
 * These are the RAW PCS per-lane RX precorrelation control registers. These registers are for
 * diagnostic use only.
 * These registers are reset by hardware only during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_rx_precorr_ctrl {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_precorr_ctrl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_5_63                : 59;
	uint64_t rx_precorr_disable           : 1;  /**< Disable RX precorrelation calculation. */
	uint64_t rx_precorr_en_ovrrd_en       : 1;  /**< Override enable for RX precorrelation calculation enable. */
	uint64_t rx_precorr_en_ovrrd_val      : 1;  /**< Override value for RX precorrelation calculation enable. */
	uint64_t pcs_sds_rx_precorr_scnt_ctrl : 2;  /**< RX precorrelation sample counter control.
                                                         0x0 = Load max sample counter with 0x1FF.
                                                         0x1 = Load max sample counter with 0x3FF.
                                                         0x2 = Load max sample counter with 0x7FF.
                                                         0x3 = Load max sample counter with 0xFFF. */
#else
	uint64_t pcs_sds_rx_precorr_scnt_ctrl : 2;
	uint64_t rx_precorr_en_ovrrd_val      : 1;
	uint64_t rx_precorr_en_ovrrd_en       : 1;
	uint64_t rx_precorr_disable           : 1;
	uint64_t reserved_5_63                : 59;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_precorr_ctrl_s cn78xx;
};
typedef union cvmx_gserx_lanex_rx_precorr_ctrl cvmx_gserx_lanex_rx_precorr_ctrl_t;

/**
 * cvmx_gser#_lane#_rx_valbbd_ctrl_0
 *
 * These registers are reset by hardware only during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_rx_valbbd_ctrl_0 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_valbbd_ctrl_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_14_63               : 50;
	uint64_t agc_gain                     : 2;  /**< AGC gain. */
	uint64_t dfe_gain                     : 2;  /**< DFE gain. */
	uint64_t dfe_c5_mval                  : 4;  /**< DFE Tap5 manual value when GSER()_LANE()_RX_VALBBD_CTRL_2[DFE_OVRD_EN] and
                                                         GSER()_LANE()_RX_VALBBD_CTRL_2[DFE_C5_OVRD_VAL] are both set. */
	uint64_t dfe_c5_msgn                  : 1;  /**< DFE Tap5 manual sign when GSER()_LANE()_RX_VALBBD_CTRL_2[DFE_OVRD_EN] and
                                                         GSER()_LANE()_RX_VALBBD_CTRL_2[DFE_C5_OVRD_VAL] are both set. */
	uint64_t dfe_c4_mval                  : 4;  /**< DFE Tap4 manual value when GSER()_LANE()_RX_VALBBD_CTRL_2[DFE_OVRD_EN] and
                                                         GSER()_LANE()_RX_VALBBD_CTRL_2[DFE_C5_OVRD_VAL] are both set. */
	uint64_t dfe_c4_msgn                  : 1;  /**< DFE Tap4 manual sign when GSER()_LANE()_RX_VALBBD_CTRL_2[DFE_OVRD_EN] and
                                                         GSER()_LANE()_RX_VALBBD_CTRL_2[DFE_C5_OVRD_VAL] are both set. */
#else
	uint64_t dfe_c4_msgn                  : 1;
	uint64_t dfe_c4_mval                  : 4;
	uint64_t dfe_c5_msgn                  : 1;
	uint64_t dfe_c5_mval                  : 4;
	uint64_t dfe_gain                     : 2;
	uint64_t agc_gain                     : 2;
	uint64_t reserved_14_63               : 50;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_valbbd_ctrl_0_s cn78xx;
};
typedef union cvmx_gserx_lanex_rx_valbbd_ctrl_0 cvmx_gserx_lanex_rx_valbbd_ctrl_0_t;

/**
 * cvmx_gser#_lane#_rx_valbbd_ctrl_1
 *
 * These registers are reset by hardware only during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_rx_valbbd_ctrl_1 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_valbbd_ctrl_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t dfe_c3_mval                  : 4;  /**< DFE Tap3 manual value when GSER()_LANE()_RX_VALBBD_CTRL_2[DFE_OVRD_EN] and
                                                         GSER()_LANE()_RX_VALBBD_CTRL_2[DFE_C5_OVRD_VAL] are both set. */
	uint64_t dfe_c3_msgn                  : 1;  /**< DFE Tap3 manual sign when GSER()_LANE()_RX_VALBBD_CTRL_2[DFE_OVRD_EN] and
                                                         GSER()_LANE()_RX_VALBBD_CTRL_2[DFE_C5_OVRD_VAL] are both set. */
	uint64_t dfe_c2_mval                  : 4;  /**< DFE Tap2 manual value when GSER()_LANE()_RX_VALBBD_CTRL_2[DFE_OVRD_EN] and
                                                         GSER()_LANE()_RX_VALBBD_CTRL_2[DFE_C5_OVRD_VAL] are both set. */
	uint64_t dfe_c2_msgn                  : 1;  /**< DFE Tap2 manual sign when GSER()_LANE()_RX_VALBBD_CTRL_2[DFE_OVRD_EN] and
                                                         GSER()_LANE()_RX_VALBBD_CTRL_2[DFE_C5_OVRD_VAL] are both set. */
	uint64_t dfe_c1_mval                  : 4;  /**< DFE Tap1 manual value when GSER()_LANE()_RX_VALBBD_CTRL_2[DFE_OVRD_EN] and
                                                         GSER()_LANE()_RX_VALBBD_CTRL_2[DFE_C5_OVRD_VAL] are both set.
                                                         Recommended settings: For the following modes:
                                                         5G_REFCLK100, 5G_REFCLK15625_QSGMII, and 5G_REFCLK125, it is recommended that DFE_C1_MVAL
                                                         be set to zero after setting GSER()_LANE_P()_MODE_1[VMA_MM] and also after
                                                         updating the GSER()_LANE()_RX_VALBBD_CTRL_2 register. In all other modes this
                                                         register can be ignored. */
	uint64_t dfe_c1_msgn                  : 1;  /**< DFE Tap1 manual sign when GSER()_LANE()_RX_VALBBD_CTRL_2[DFE_OVRD_EN] and
                                                         GSER()_LANE()_RX_VALBBD_CTRL_2[DFE_C5_OVRD_VAL] are both set. */
#else
	uint64_t dfe_c1_msgn                  : 1;
	uint64_t dfe_c1_mval                  : 4;
	uint64_t dfe_c2_msgn                  : 1;
	uint64_t dfe_c2_mval                  : 4;
	uint64_t dfe_c3_msgn                  : 1;
	uint64_t dfe_c3_mval                  : 4;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_valbbd_ctrl_1_s cn78xx;
};
typedef union cvmx_gserx_lanex_rx_valbbd_ctrl_1 cvmx_gserx_lanex_rx_valbbd_ctrl_1_t;

/**
 * cvmx_gser#_lane#_rx_valbbd_ctrl_2
 *
 * These registers are reset by hardware only during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_rx_valbbd_ctrl_2 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_valbbd_ctrl_2_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_6_63                : 58;
	uint64_t dfe_ovrd_en                  : 1;  /**< Override enable for DFE tap controls. When asserted, the register bits in
                                                         GSER()_LANE()_RX_VALBBD_CTRL_0 and GSER()_LANE()_RX_VALBBD_CTRL_1 are
                                                         used for controlling the DFE tap manual mode, instead the manual mode signal indexed by
                                                         GSER()_LANE_MODE[LMODE]. Recommended settings: For the following modes: 5G_REFCLK100,
                                                         5G_REFCLK15625_QSGMII, and 5G_REFCLK125, it is recommended that DFE tap controls be put in
                                                         manual mode by setting this bit. In all other modes this register can be ignored. */
	uint64_t dfe_c5_ovrd_val              : 1;  /**< Override value for DFE Tap5 manual enable. Recommended settings: For the following modes;
                                                         5G_REFCLK100, 5G_REFCLK15625_QSGMII, and 5G_REFCLK125, it is recommended that the DFE Tap5
                                                         manual enable be set after setting GSER()_LANE_P()_MODE_1[VMA_MM]. In all
                                                         other modes this register can be ignored. */
	uint64_t dfe_c4_ovrd_val              : 1;  /**< Override value for DFE Tap4 manual enable. Recommended settings: For the following modes:
                                                         5G_REFCLK100, 5G_REFCLK15625_QSGMII, and 5G_REFCLK125, it is recommended that the DFE Tap4
                                                         manual enable be set after setting GSER()_LANE_P()_MODE_1[VMA_MM]. In all
                                                         other modes this register can be ignored. */
	uint64_t dfe_c3_ovrd_val              : 1;  /**< Override value for DFE Tap3 manual enable. Recommended settings: For the following modes;
                                                         5G_REFCLK100, 5G_REFCLK15625_QSGMII, and 5G_REFCLK125, it is recommended that the DFE Tap3
                                                         manual enable be set after setting GSER()_LANE_P()_MODE_1[VMA_MM]. In all
                                                         other modes this register can be ignored. */
	uint64_t dfe_c2_ovrd_val              : 1;  /**< Override value for DFE Tap2 manual enable. Recommended settings: For the following modes;
                                                         5G_REFCLK100, 5G_REFCLK15625_QSGMII, and 5G_REFCLK125, it is recommended that the DFE Tap2
                                                         manual enable be set after setting GSER()_LANE_P()_MODE_1[VMA_MM]. In all
                                                         other modes this register can be ignored. */
	uint64_t dfe_c1_ovrd_val              : 1;  /**< Override value for DFE Tap1 manual enable. Recommended settings: For the following modes;
                                                         5G_REFCLK100, 5G_REFCLK15625_QSGMII, and 5G_REFCLK125, it is recommended that the DFE Tap1
                                                         manual enable be set after setting GSER()_LANE_P()_MODE_1[VMA_MM]. In all
                                                         other modes this register can be ignored. */
#else
	uint64_t dfe_c1_ovrd_val              : 1;
	uint64_t dfe_c2_ovrd_val              : 1;
	uint64_t dfe_c3_ovrd_val              : 1;
	uint64_t dfe_c4_ovrd_val              : 1;
	uint64_t dfe_c5_ovrd_val              : 1;
	uint64_t dfe_ovrd_en                  : 1;
	uint64_t reserved_6_63                : 58;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_valbbd_ctrl_2_s cn78xx;
};
typedef union cvmx_gserx_lanex_rx_valbbd_ctrl_2 cvmx_gserx_lanex_rx_valbbd_ctrl_2_t;

/**
 * cvmx_gser#_lane#_rx_vma_ctrl
 *
 * These are the RAW PCS per-lane RX VMA control registers. These registers are for diagnostic
 * use only.
 * These registers are reset by hardware only during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_rx_vma_ctrl {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_vma_ctrl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t vma_fine_cfg_sel_ovrrd_en    : 1;  /**< Enable override of VMA fine configuration selection. */
	uint64_t vma_fine_cfg_sel_ovrrd_val   : 1;  /**< Override value of VMA fine configuration selection.
                                                         - 0: Coarse mode.
                                                         - 1: Fine mode. */
	uint64_t rx_fom_div_delta             : 1;  /**< TX figure of merit delta division-mode enable. */
	uint64_t rx_vna_ctrl_18_16            : 3;  /**< RX VMA loop control. */
	uint64_t rx_vna_ctrl_9_0              : 10; /**< RX VMA loop control.
                                                         <9:8> = Parameter settling wait time.
                                                         <7> = Limit CTLE peak to max value.
                                                         <6> = Long reach enabled.
                                                         <5> = Short reach enabled.
                                                         <4> = Training done override enable.
                                                         <3> = Training done override value.
                                                         <2:0> = VMA clock modulation. */
#else
	uint64_t rx_vna_ctrl_9_0              : 10;
	uint64_t rx_vna_ctrl_18_16            : 3;
	uint64_t rx_fom_div_delta             : 1;
	uint64_t vma_fine_cfg_sel_ovrrd_val   : 1;
	uint64_t vma_fine_cfg_sel_ovrrd_en    : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_vma_ctrl_s cn78xx;
};
typedef union cvmx_gserx_lanex_rx_vma_ctrl cvmx_gserx_lanex_rx_vma_ctrl_t;

/**
 * cvmx_gser#_lane#_rx_vma_status_0
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_rx_vma_status_0 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_vma_status_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_8_63                : 56;
	uint64_t sds_pcs_rx_vma_status        : 8;  /**< <8> = DFE Powerdown.
                                                         <7> = Reserved.
                                                         <6:2> = CTLE Peak.
                                                         <1:0> = CTLE Pole. */
#else
	uint64_t sds_pcs_rx_vma_status        : 8;
	uint64_t reserved_8_63                : 56;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_vma_status_0_s cn78xx;
};
typedef union cvmx_gserx_lanex_rx_vma_status_0 cvmx_gserx_lanex_rx_vma_status_0_t;

/**
 * cvmx_gser#_lane#_rx_vma_status_1
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lanex_rx_vma_status_1 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_vma_status_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t sds_pcs_rx_vma_status        : 16; /**< <15:8>: Output is controlled by GSER()_LANE()_RX_CFG_3[CFG_RX_ERRDET_CTRL[6:5]
                                                         0x0 = Pre-CTL gain, CTLE Peak.
                                                         0x1 = CTL pole, SDLL_IQ.
                                                         0x2 = Window counter[11:3].
                                                         0x3 = Window counter[19:12] (VMA RAW FOM).
                                                         <7>: Training done
                                                         <6>: Internal state machine training done
                                                         <5:3>: Internal state machine Delta
                                                         <2:0>: CDR Phase Offset, DLL IQ Training value. */
#else
	uint64_t sds_pcs_rx_vma_status        : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_vma_status_1_s cn78xx;
};
typedef union cvmx_gserx_lanex_rx_vma_status_1 cvmx_gserx_lanex_rx_vma_status_1_t;

/**
 * cvmx_gser#_lane#_tx_cfg_0
 *
 * These registers are for diagnostic use only. These registers are reset by hardware only during
 * chip cold reset. The values of the CSR fields in these registers do not change during chip
 * warm or soft resets.
 */
union cvmx_gserx_lanex_tx_cfg_0 {
	uint64_t u64;
	struct cvmx_gserx_lanex_tx_cfg_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t tx_tristate_en_ovrd_val      : 1;  /**< TX termination high-Z enable. */
	uint64_t tx_chpd_ovrd_val             : 1;  /**< TX lane power down. */
	uint64_t reserved_10_13               : 4;
	uint64_t tx_resetn_ovrd_val           : 1;  /**< TX P2S rest. */
	uint64_t tx_cm_mode                   : 1;  /**< Assert to enable fast Common-Mode charge up. For simulation purposes only. */
	uint64_t cfg_tx_swing                 : 5;  /**< TX output swing control.
                                                         Default swing encoding when GSER()_LANE()_TX_CFG_1[TX_SWING_OVRRD_EN] is
                                                         asserted. */
	uint64_t fast_rdet_mode               : 1;  /**< Assert to enable fast RX Detection. For simulation purposes only. */
	uint64_t fast_tristate_mode           : 1;  /**< Assert to enable fast Tristate power up. For simulation purposes only. */
	uint64_t reserved_0_0                 : 1;
#else
	uint64_t reserved_0_0                 : 1;
	uint64_t fast_tristate_mode           : 1;
	uint64_t fast_rdet_mode               : 1;
	uint64_t cfg_tx_swing                 : 5;
	uint64_t tx_cm_mode                   : 1;
	uint64_t tx_resetn_ovrd_val           : 1;
	uint64_t reserved_10_13               : 4;
	uint64_t tx_chpd_ovrd_val             : 1;
	uint64_t tx_tristate_en_ovrd_val      : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_lanex_tx_cfg_0_s    cn78xx;
};
typedef union cvmx_gserx_lanex_tx_cfg_0 cvmx_gserx_lanex_tx_cfg_0_t;

/**
 * cvmx_gser#_lane#_tx_cfg_1
 *
 * These registers are for diagnostic use only. These registers are reset by hardware only during
 * chip cold reset. The values of the CSR fields in these registers do not change during chip
 * warm or soft resets.
 */
union cvmx_gserx_lanex_tx_cfg_1 {
	uint64_t u64;
	struct cvmx_gserx_lanex_tx_cfg_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t tx_widthsel_ovrd_en          : 1;  /**< Override enable for pcs_sds_txX_widthsel, TX parallel interface width setting. */
	uint64_t tx_widthsel_ovrd_val         : 2;  /**< Override value for pcs_sds_widthsel, TX parallel interface width setting.
                                                         0x0 = 8-bit (not supported).
                                                         0x1 = 10-bit (not supported).
                                                         0x2 = 16-bit (not supported).
                                                         0x3 = 20-bit (not supported). */
	uint64_t tx_vboost_en_ovrrd_en        : 1;  /**< Override enable for pcs_sds_txX_vboost_en, TX  vboost mode enable. */
	uint64_t tx_turbo_en_ovrrd_en         : 1;  /**< Override enable for pcs_sds_txX_turbo_en, Turbo mode enable. */
	uint64_t tx_swing_ovrd_en             : 1;  /**< Override enable for pcs_sds_txX_swing, TX swing. */
	uint64_t tx_premptap_ovrd_val         : 1;  /**< Override enable for pcs_sds_txX_preemptap, preemphasis control. */
	uint64_t tx_elec_idle_ovrrd_en        : 1;  /**< Override enable for pcs_sds_txX_elec_idle, TX electrical idle. */
	uint64_t smpl_rate_ovrd_en            : 1;  /**< Override enable for TX Power state machine sample rate. When asserted, the TX sample is
                                                         specified from SMPL_RATE_OVRD_VAL and the TX Power state machine control signal is
                                                         ignored. */
	uint64_t smpl_rate_ovrd_val           : 3;  /**< Specifies the sample rate (strobe assertion) relative to mac_pcs_txX_clk when
                                                         SMPL_RATE_OVRD_EN is asserted.
                                                         0x0 = full rate.
                                                         0x1 = 1/2 data rate.
                                                         0x2 = 1/4 data rate.
                                                         0x3 = 1/8 data rate.
                                                         0x4 = 1/18 data rate.
                                                         0x5-7 = Reserved. */
	uint64_t tx_datarate_ovrd_en          : 1;  /**< Override enable for RX Power state machine data rate signal. When set, rx_datarate is
                                                         specified from TX_DATA_RATE_OVRD_VAL and the RX Power State Machine control signal is
                                                         ignored. */
	uint64_t tx_datarate_ovrd_val         : 2;  /**< Specifies the TX data rate when TX_DATARATE_OVRD_EN is asserted.
                                                         0x0 = full rate.
                                                         0x1 = 1/2 data rate.
                                                         0x2 = 1/4 data rate.
                                                         0x3 = 1/8 data rate. */
#else
	uint64_t tx_datarate_ovrd_val         : 2;
	uint64_t tx_datarate_ovrd_en          : 1;
	uint64_t smpl_rate_ovrd_val           : 3;
	uint64_t smpl_rate_ovrd_en            : 1;
	uint64_t tx_elec_idle_ovrrd_en        : 1;
	uint64_t tx_premptap_ovrd_val         : 1;
	uint64_t tx_swing_ovrd_en             : 1;
	uint64_t tx_turbo_en_ovrrd_en         : 1;
	uint64_t tx_vboost_en_ovrrd_en        : 1;
	uint64_t tx_widthsel_ovrd_val         : 2;
	uint64_t tx_widthsel_ovrd_en          : 1;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_gserx_lanex_tx_cfg_1_s    cn78xx;
};
typedef union cvmx_gserx_lanex_tx_cfg_1 cvmx_gserx_lanex_tx_cfg_1_t;

/**
 * cvmx_gser#_lane#_tx_cfg_2
 *
 * These registers are for diagnostic use only. These registers are reset by hardware only during
 * chip cold reset. The values of the CSR fields in these registers do not change during chip
 * warm or soft resets.
 */
union cvmx_gserx_lanex_tx_cfg_2 {
	uint64_t u64;
	struct cvmx_gserx_lanex_tx_cfg_2_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t pcs_sds_tx_dcc_en            : 1;  /**< DCC Enable. */
	uint64_t reserved_3_14                : 12;
	uint64_t rcvr_test_ovrd_en            : 1;  /**< Override RX detect disable and test pulse. */
	uint64_t rcvr_test_ovrd_val           : 1;  /**< Override value for RX detect test pulse; used to create a pulse during which the receiver
                                                         detect test operation is performed. */
	uint64_t tx_rx_detect_dis_ovrd_val    : 1;  /**< Override value of RX detect disable. */
#else
	uint64_t tx_rx_detect_dis_ovrd_val    : 1;
	uint64_t rcvr_test_ovrd_val           : 1;
	uint64_t rcvr_test_ovrd_en            : 1;
	uint64_t reserved_3_14                : 12;
	uint64_t pcs_sds_tx_dcc_en            : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_lanex_tx_cfg_2_s    cn78xx;
};
typedef union cvmx_gserx_lanex_tx_cfg_2 cvmx_gserx_lanex_tx_cfg_2_t;

/**
 * cvmx_gser#_lane#_tx_cfg_3
 *
 * These registers are for diagnostic use only. These registers are reset by hardware only during
 * chip cold reset. The values of the CSR fields in these registers do not change during chip
 * warm or soft resets.
 */
union cvmx_gserx_lanex_tx_cfg_3 {
	uint64_t u64;
	struct cvmx_gserx_lanex_tx_cfg_3_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t cfg_tx_vboost_en             : 1;  /**< Specifies the value of TX VBoost enable when
                                                         GSER()_LANE()_TX_CFG_1[TX_VBOOST_EN_OVRRD_EN] is asserted. */
	uint64_t reserved_7_13                : 7;
	uint64_t pcs_sds_tx_gain              : 3;  /**< TX Gain. For debug use only. */
	uint64_t pcs_sds_tx_srate_sel         : 3;  /**< Reserved. */
	uint64_t cfg_tx_turbo_en              : 1;  /**< Specifies value ot TX turbo enable when GSER()_LANE()_TX_CFG_1[TX_TURBO_EN] is set. */
#else
	uint64_t cfg_tx_turbo_en              : 1;
	uint64_t pcs_sds_tx_srate_sel         : 3;
	uint64_t pcs_sds_tx_gain              : 3;
	uint64_t reserved_7_13                : 7;
	uint64_t cfg_tx_vboost_en             : 1;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_gserx_lanex_tx_cfg_3_s    cn78xx;
};
typedef union cvmx_gserx_lanex_tx_cfg_3 cvmx_gserx_lanex_tx_cfg_3_t;

/**
 * cvmx_gser#_lane#_tx_pre_emphasis
 *
 * These registers are for diagnostic use only. These registers are reset by hardware only during
 * chip cold reset. The values of the CSR fields in these registers do not change during chip
 * warm or soft resets.
 */
union cvmx_gserx_lanex_tx_pre_emphasis {
	uint64_t u64;
	struct cvmx_gserx_lanex_tx_pre_emphasis_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t cfg_tx_premptap              : 9;  /**< Override preemphasis control. Applies when
                                                         GSER()_LANE()_TX_CFG_3[TX_PREMPTAP_OVRD_EN] is asserted.
                                                         <8:4> = Post-cursor.
                                                         <3:0> = Pre-cursor. */
#else
	uint64_t cfg_tx_premptap              : 9;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_lanex_tx_pre_emphasis_s cn78xx;
};
typedef union cvmx_gserx_lanex_tx_pre_emphasis cvmx_gserx_lanex_tx_pre_emphasis_t;

/**
 * cvmx_gser#_lane_lpbken
 *
 * These registers are reset by hardware only during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lane_lpbken {
	uint64_t u64;
	struct cvmx_gserx_lane_lpbken_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t lpbken                       : 4;  /**< For links that are not in PCIE mode (including all CCPI links). When asserted in P0 state,
                                                         allows per lane TX-to-RX serial loopback activation.
                                                         <3>: Lane 3.
                                                         <2>: Lane 2.
                                                         <1>: Lane 1.
                                                         <0>: Lane 0. */
#else
	uint64_t lpbken                       : 4;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_lane_lpbken_s       cn78xx;
};
typedef union cvmx_gserx_lane_lpbken cvmx_gserx_lane_lpbken_t;

/**
 * cvmx_gser#_lane_mode
 *
 * These registers are reset by hardware only during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lane_mode {
	uint64_t u64;
	struct cvmx_gserx_lane_mode_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t lmode                        : 4;  /**< For links that are not in PCIE mode (including all CCPI links), used to index into the PHY
                                                         table to select electrical specs and link rate. Note that the PHY table can be modified
                                                         such that any supported link rate can be derived regardless of the configured LMODE.
                                                         0x0: R_25G_REFCLK100.
                                                         0x1: R_5G_REFCLK100.
                                                         0x2: R_8G_REFCLK100.
                                                         0x3: R_125G_REFCLK15625_KX (not supported).
                                                         0x4: R_3125G_REFCLK15625_XAUI.
                                                         For XAUI applications:
                                                         0x5: R_103125G_REFCLK15625_KR.
                                                         For XFI, XLAUI, KR applications:
                                                         0x6: R_125G_REFCLK15625_SGMII.
                                                         For SGMII applications:
                                                         0x7: R_5G_REFCLK15625_QSGMII (not supported).
                                                         0x8: R_625G_REFCLK15625_RXAUI.
                                                         For RXAUI, DXAUI applications:
                                                         0x9: R_25G_REFCLK125.
                                                         0xA: R_5G_REFCLK125.
                                                         0xB: R_8G_REFCLK125.
                                                         0xC - 0xF: Reserved.
                                                         This register is not used for PCIE configurations. For non-CCPI links, this register
                                                         defaults to R_625G_REFCLK15625_RXAUI. For CCPI links, the value is mapped at reset from
                                                         the
                                                         GSER()_SPD and the appropriate table updates are performed so the rate is obtained for the
                                                         particular reference clock.
                                                         It is recommended that the PHY be in reset when reconfiguring the LMODE
                                                         (GSER()_PHY_CTL[PHY_RESET] is set).
                                                         Once the LMODE has been configured, and the PHY is out of reset, the table entries for the
                                                         selected LMODE must be updated to reflect the reference clock speed. Refer to the register
                                                         description and index into the table using the rate and reference speed to obtain the
                                                         recommended values.
                                                         _ Write GSER()_PLL_P()_MODE_0.
                                                         _ Write GSER()_PLL_P()_MODE_1.
                                                         _ Write GSER()_LANE_P()_MODE_0.
                                                         _ Write GSER()_LANE_P()_MODE_1.
                                                         where in "P(z)", z equals LMODE. */
#else
	uint64_t lmode                        : 4;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_lane_mode_s         cn78xx;
};
typedef union cvmx_gserx_lane_mode cvmx_gserx_lane_mode_t;

/**
 * cvmx_gser#_lane_p#_mode_0
 *
 * These are the RAW PCS lane settings mode 0 registers. There is one register per
 * 4 lanes per GSER per GSER_LMODE_E value (0..11). Only one entry is used at any given time in a
 * given GSER lane - the one selected by the corresponding GSER()_LANE_MODE[LMODE].
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lane_px_mode_0 {
	uint64_t u64;
	struct cvmx_gserx_lane_px_mode_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t ctle                         : 2;  /**< Continuous time linear equalizer pole configuration.
                                                         0x0 = ~5dB of peaking at 4 GHz (Minimum bandwidth).
                                                         0x1 =~10dB of peaking at 5 GHz
                                                         0x2 = ~15dB of peaking at 5.5 GHz
                                                         0x3 = ~20dB of peaking at 6 GHz (Maximum bandwidth).
                                                         Recommended settings:
                                                         _ R_25G_REFCLK100:          0x0
                                                         _ R_5G_REFCLK100:           0x0
                                                         _ R_8G_REFCLK100:           0x3
                                                         _ R_125G_REFCLK15625_KX:    0x0
                                                         _ R_3125G_REFCLK15625_XAUI: 0x0
                                                         _ R_103125G_REFCLK15625_KR: 0x3
                                                         _ R_125G_REFCLK15625_SGMII: 0x0
                                                         _ R_5G_REFCLK15625_QSGMII:  0x0
                                                         _ R_625G_REFCLK15625_RXAUI: 0x0
                                                         _ R_25G_REFCLK125:          0x0
                                                         _ R_5G_REFCLK125:           0x0
                                                         _ R_8G_REFCLK125:           0x3 */
	uint64_t pcie                         : 1;  /**< Selects between RX terminations.
                                                         - 0: Differential termination
                                                         - 1: Termination between pad and SDS_VDDS.
                                                          Recommended settings:
                                                          _ R_25G_REFCLK100:          0x1
                                                          _ R_5G_REFCLK100:           0x1
                                                          _ R_8G_REFCLK100:           0x0
                                                          _ R_125G_REFCLK15625_KX:    0x0
                                                          _ R_3125G_REFCLK15625_XAUI: 0x0
                                                          _ R_103125G_REFCLK15625_KR: 0x0
                                                          _ R_125G_REFCLK15625_SGMII: 0x0
                                                          _ R_5G_REFCLK15625_QSGMII:  0x0
                                                          _ R_625G_REFCLK15625_RXAUI: 0x0
                                                          _ R_25G_REFCLK125:          0x1
                                                          _ R_5G_REFCLK125:           0x1
                                                          _ R_8G_REFCLK125:           0x0 */
	uint64_t tx_ldiv                      : 2;  /**< Configures clock divider used to determine the receive rate.
                                                         0x0 = full data rate.
                                                         0x1 = 1/2 data rate.
                                                         0x2 = 1/4 data rate.
                                                         0x3 = 1/8 data rate.
                                                         Recommended settings:
                                                         _ R_25G_REFCLK100:          0x1
                                                         _ R_5G_REFCLK100:           0x0
                                                         _ R_8G_REFCLK100:           0x0
                                                         _ R_125G_REFCLK15625_KX:    0x2
                                                         _ R_3125G_REFCLK15625_XAUI: 0x1
                                                         _ R_103125G_REFCLK15625_KR: 0x0
                                                         _ R_125G_REFCLK15625_SGMII: 0x2
                                                         _ R_5G_REFCLK15625_QSGMII:  0x0
                                                         _ R_625G_REFCLK15625_RXAUI: 0x0
                                                         _ R_25G_REFCLK125:          0x1
                                                         _ R_5G_REFCLK125:           0x0
                                                         _ R_8G_REFCLK125:           0x0 */
	uint64_t rx_ldiv                      : 2;  /**< Configures clock divider used to determine the receive rate.
                                                         0x0 = full data rate
                                                         0x1 = 1/2 data rate
                                                         0x2 = 1/4 data rate
                                                         0x3 = 1/8 data rate
                                                         Recommended settings:
                                                         _ R_25G_REFCLK100:          0x1
                                                         _ R_5G_REFCLK100:           0x0
                                                         _ R_8G_REFCLK100:           0x0
                                                         _ R_125G_REFCLK15625_KX:    0x2
                                                         _ R_3125G_REFCLK15625_XAUI: 0x1
                                                         _ R_103125G_REFCLK15625_KR: 0x0
                                                         _ R_125G_REFCLK15625_SGMII: 0x2
                                                         _ R_5G_REFCLK15625_QSGMII:  0x0
                                                         _ R_625G_REFCLK15625_RXAUI: 0x0
                                                         _ R_25G_REFCLK125:          0x1
                                                         _ R_5G_REFCLK125:           0x0
                                                         _ R_8G_REFCLK125:           0x0 */
	uint64_t srate                        : 3;  /**< Sample rate, used to generate strobe to effectively divide the clock down to a slower
                                                         rate.
                                                         0x0 = Full rate
                                                         0x1 = 1/2 data rate
                                                         0x2 = 1/4 data rate
                                                         0x3 = 1/8 data rate
                                                         0x4 = 1/16 data rate
                                                         else = Reserved.
                                                         This field should always be cleared to zero (full rate). */
	uint64_t reserved_4_4                 : 1;
	uint64_t tx_mode                      : 2;  /**< TX data width:
                                                         0x0 = 8-bit raw data (not supported).
                                                         0x1 = 10-bit raw data (not supported).
                                                         0x2 = 16-bit raw data (not supported).
                                                         0x3 = 20-bit raw data. */
	uint64_t rx_mode                      : 2;  /**< RX data width:
                                                         0x0 = 8-bit raw data (not supported).
                                                         0x1 = 10-bit raw data (not supported).
                                                         0x2 = 16-bit raw data (not supported).
                                                         0x3 = 20-bit raw data. */
#else
	uint64_t rx_mode                      : 2;
	uint64_t tx_mode                      : 2;
	uint64_t reserved_4_4                 : 1;
	uint64_t srate                        : 3;
	uint64_t rx_ldiv                      : 2;
	uint64_t tx_ldiv                      : 2;
	uint64_t pcie                         : 1;
	uint64_t ctle                         : 2;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_gserx_lane_px_mode_0_s    cn78xx;
};
typedef union cvmx_gserx_lane_px_mode_0 cvmx_gserx_lane_px_mode_0_t;

/**
 * cvmx_gser#_lane_p#_mode_1
 *
 * These are the RAW PCS lane settings mode 1 registers. There is one register per 4 lanes,
 * (0..3) per GSER per GSER_LMODE_E value (0..11). Only one entry is used at any given time in a
 * given
 * GSER lane - the one selected by the corresponding GSER()_LANE_MODE[LMODE].
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lane_px_mode_1 {
	uint64_t u64;
	struct cvmx_gserx_lane_px_mode_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t vma_fine_cfg_sel             : 1;  /**< Recommended settings:
                                                         1 = Enabled. Fine step adaptation selected (10.3125 Gbaud rate).
                                                         0 = Disabled. Coarse step adaptation selected (rates lower than 10.3125 Gbaud). */
	uint64_t vma_mm                       : 1;  /**< Manual DFE verses adaptive DFE mode. Recommended settings:
                                                         0 = Adaptive DFE (5 Gbaud and higher)
                                                         1 = Manual DFE, fixed tap (3.125 Gbaud and lower). */
	uint64_t cdr_fgain                    : 4;  /**< CDR frequency gain.
                                                         Recommended settings:
                                                         _ R_25G_REFCLK100:          0xA
                                                         _ R_5G_REFCLK100:           0xA
                                                         _ R_8G_REFCLK100:           0xB
                                                         _ R_125G_REFCLK15625_KX:    0xC
                                                         _ R_3125G_REFCLK15625_XAUI: 0xC
                                                         _ R_103125G_REFCLK15625_KR: 0xA
                                                         _ R_125G_REFCLK15625_SGMII: 0xC
                                                         _ R_5G_REFCLK15625_QSGMII:  0xC
                                                         _ R_625G_REFCLK15625_RXAUI: 0xA
                                                         _ R_25G_REFCLK125:          0xA
                                                         _ R_5G_REFCLK125:           0xA
                                                         _ R_8G_REFCLK125:           0xB */
	uint64_t ph_acc_adj                   : 10; /**< Phase accumulator adjust.
                                                         Recommended settings:
                                                         _ R_25G_REFCLK100:          0x14
                                                         _ R_5G_REFCLK100:           0x14
                                                         _ R_8G_REFCLK100:           0x23
                                                         _ R_125G_REFCLK15625_KX:    0x1E
                                                         _ R_3125G_REFCLK15625_XAUI: 0x1E
                                                         _ R_103125G_REFCLK15625_KR: 0xF
                                                         _ R_125G_REFCLK15625_SGMII: 0x1E
                                                         _ R_5G_REFCLK15625_QSGMII:  0x1E
                                                         _ R_625G_REFCLK15625_RXAUI: 0x14
                                                         _ R_25G_REFCLK125:          0x14
                                                         _ R_5G_REFCLK125:           0x14
                                                         _ R_8G_REFCLK125:           0x23 */
#else
	uint64_t ph_acc_adj                   : 10;
	uint64_t cdr_fgain                    : 4;
	uint64_t vma_mm                       : 1;
	uint64_t vma_fine_cfg_sel             : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_lane_px_mode_1_s    cn78xx;
};
typedef union cvmx_gserx_lane_px_mode_1 cvmx_gserx_lane_px_mode_1_t;

/**
 * cvmx_gser#_lane_poff
 *
 * These registers are reset by hardware only during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lane_poff {
	uint64_t u64;
	struct cvmx_gserx_lane_poff_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t lpoff                        : 4;  /**< For links that are not in PCIE mode (including all CCPI links), allows for per lane power
                                                         down.
                                                         <3>: Lane 3.
                                                         <2>: Lane 2.
                                                         <1>: Lane 1.
                                                         <0>: Lane 0. */
#else
	uint64_t lpoff                        : 4;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_lane_poff_s         cn78xx;
};
typedef union cvmx_gserx_lane_poff cvmx_gserx_lane_poff_t;

/**
 * cvmx_gser#_lane_srst
 *
 * These registers are reset by hardware only during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lane_srst {
	uint64_t u64;
	struct cvmx_gserx_lane_srst_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t lsrst                        : 1;  /**< For links that are not in PCIE mode (including all CCPI links), resets all 4 lanes
                                                         (equivalent to the P2 power state) after any pending requests (power state change, rate
                                                         change) are complete. The lanes remain in reset state while this signal is asserted. When
                                                         the signal deasserts, the lanes exit the reset state and the PHY returns to the power
                                                         state the PHY was in prior. For diagnostic use only. */
#else
	uint64_t lsrst                        : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_lane_srst_s         cn78xx;
};
typedef union cvmx_gserx_lane_srst cvmx_gserx_lane_srst_t;

/**
 * cvmx_gser#_lane_vma_coarse_ctrl_0
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lane_vma_coarse_ctrl_0 {
	uint64_t u64;
	struct cvmx_gserx_lane_vma_coarse_ctrl_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t iq_max                       : 4;  /**< Slice DLL IQ maximum value in VMA coarse mode. */
	uint64_t iq_min                       : 4;  /**< Slice DLL IQ minimum value in VMA coarse mode. */
	uint64_t iq_step                      : 2;  /**< Slice DLL IQ step size in VMA coarse mode. */
	uint64_t window_wait                  : 3;  /**< Adaptation window wait setting in VMA coarse mode. */
	uint64_t lms_wait                     : 3;  /**< LMS wait time setting used to control the number of samples taken during the collection of
                                                         statistics in VMA coarse mode. */
#else
	uint64_t lms_wait                     : 3;
	uint64_t window_wait                  : 3;
	uint64_t iq_step                      : 2;
	uint64_t iq_min                       : 4;
	uint64_t iq_max                       : 4;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_lane_vma_coarse_ctrl_0_s cn78xx;
};
typedef union cvmx_gserx_lane_vma_coarse_ctrl_0 cvmx_gserx_lane_vma_coarse_ctrl_0_t;

/**
 * cvmx_gser#_lane_vma_coarse_ctrl_1
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lane_vma_coarse_ctrl_1 {
	uint64_t u64;
	struct cvmx_gserx_lane_vma_coarse_ctrl_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_10_63               : 54;
	uint64_t ctle_pmax                    : 4;  /**< RX CTLE peak maximum value in VMA coarse mode. */
	uint64_t ctle_pmin                    : 4;  /**< RX CTLE peak minimum value in VMA coarse mode. */
	uint64_t ctle_pstep                   : 2;  /**< CTLE peak step size in VMA coarse mode. */
#else
	uint64_t ctle_pstep                   : 2;
	uint64_t ctle_pmin                    : 4;
	uint64_t ctle_pmax                    : 4;
	uint64_t reserved_10_63               : 54;
#endif
	} s;
	struct cvmx_gserx_lane_vma_coarse_ctrl_1_s cn78xx;
};
typedef union cvmx_gserx_lane_vma_coarse_ctrl_1 cvmx_gserx_lane_vma_coarse_ctrl_1_t;

/**
 * cvmx_gser#_lane_vma_coarse_ctrl_2
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lane_vma_coarse_ctrl_2 {
	uint64_t u64;
	struct cvmx_gserx_lane_vma_coarse_ctrl_2_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_10_63               : 54;
	uint64_t pctle_gmax                   : 4;  /**< RX PRE-CTLE gain maximum value in VMA coarse mode. */
	uint64_t pctle_gmin                   : 4;  /**< RX PRE-CTLE gain minimum value in VMA coarse mode. */
	uint64_t pctle_gstep                  : 2;  /**< CTLE PRE-peak gain step size in VMA coarse mode. */
#else
	uint64_t pctle_gstep                  : 2;
	uint64_t pctle_gmin                   : 4;
	uint64_t pctle_gmax                   : 4;
	uint64_t reserved_10_63               : 54;
#endif
	} s;
	struct cvmx_gserx_lane_vma_coarse_ctrl_2_s cn78xx;
};
typedef union cvmx_gserx_lane_vma_coarse_ctrl_2 cvmx_gserx_lane_vma_coarse_ctrl_2_t;

/**
 * cvmx_gser#_lane_vma_fine_ctrl_0
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lane_vma_fine_ctrl_0 {
	uint64_t u64;
	struct cvmx_gserx_lane_vma_fine_ctrl_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t rx_sdll_iq_max_fine          : 4;  /**< RX Slice DLL IQ maximum value in VMA Fine mode (valid when
                                                         GSER()_LANE_P()_MODE_1[VMA_FINE_CFG_SEL]=1 and
                                                         GSER()_LANE_P()_MODE_1[VMA_MM]=0). */
	uint64_t rx_sdll_iq_min_fine          : 4;  /**< RX slice DLL IQ minimum value in VMA fine mode (valid when
                                                         GSER()_LANE_P()_MODE_1[VMA_FINE_CFG_SEL]=1 and
                                                         GSER()_LANE_P()_MODE_1[VMA_MM]=0). */
	uint64_t rx_sdll_iq_step_fine         : 2;  /**< RX Slice DLL IQ step size in VMA Fine mode (valid when
                                                         GSER()_LANE_P()_MODE_1[VMA_FINE_CFG_SEL]=1 and
                                                         GSER()_LANE_P()_MODE_1[VMA_MM]=0). */
	uint64_t vma_window_wait_fine         : 3;  /**< Adaptation window wait setting (in VMA fine mode); used to control the number of samples
                                                         taken during the collection of statistics (valid when
                                                         GSER()_LANE_P()_MODE_1[VMA_FINE_CFG_SEL]=1 and GSER()_LANE_P()_MODE_1[VMA_MM]=0). */
	uint64_t lms_wait_time_fine           : 3;  /**< LMS wait time setting (in VMA fine mode); used to control the number of samples taken
                                                         during the collection of statistics (valid when
                                                         GSER()_LANE_P()_MODE_1[VMA_FINE_CFG_SEL]=1 and GSER()_LANE_P()_MODE_1[VMA_MM]=0). */
#else
	uint64_t lms_wait_time_fine           : 3;
	uint64_t vma_window_wait_fine         : 3;
	uint64_t rx_sdll_iq_step_fine         : 2;
	uint64_t rx_sdll_iq_min_fine          : 4;
	uint64_t rx_sdll_iq_max_fine          : 4;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_lane_vma_fine_ctrl_0_s cn78xx;
};
typedef union cvmx_gserx_lane_vma_fine_ctrl_0 cvmx_gserx_lane_vma_fine_ctrl_0_t;

/**
 * cvmx_gser#_lane_vma_fine_ctrl_1
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lane_vma_fine_ctrl_1 {
	uint64_t u64;
	struct cvmx_gserx_lane_vma_fine_ctrl_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_10_63               : 54;
	uint64_t rx_ctle_peak_max_fine        : 4;  /**< RX CTLE peak maximum value in VMA fine mode (valid when
                                                         GSER()_LANE_P()_MODE_1[VMA_FINE_CFG_SEL]=1 and GSER()_LANE_P()_MODE_1[VMA_MM]=0). */
	uint64_t rx_ctle_peak_min_fine        : 4;  /**< RX CTLE peak minimum value in VMA fine mode (valid when
                                                         GSER()_LANE_P()_MODE_1[VMA_FINE_CFG_SEL]=1 and GSER()_LANE_P()_MODE_1[VMA_MM]=0). */
	uint64_t rx_ctle_peak_step_fine       : 2;  /**< RX CTLE Peak step size in VMA Fine mode (valid when
                                                         GSER()_LANE_P()_MODE_1[VMA_FINE_CFG_SEL]=1 and GSER()_LANE_P()_MODE_1[VMA_MM]=0). */
#else
	uint64_t rx_ctle_peak_step_fine       : 2;
	uint64_t rx_ctle_peak_min_fine        : 4;
	uint64_t rx_ctle_peak_max_fine        : 4;
	uint64_t reserved_10_63               : 54;
#endif
	} s;
	struct cvmx_gserx_lane_vma_fine_ctrl_1_s cn78xx;
};
typedef union cvmx_gserx_lane_vma_fine_ctrl_1 cvmx_gserx_lane_vma_fine_ctrl_1_t;

/**
 * cvmx_gser#_lane_vma_fine_ctrl_2
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_lane_vma_fine_ctrl_2 {
	uint64_t u64;
	struct cvmx_gserx_lane_vma_fine_ctrl_2_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_10_63               : 54;
	uint64_t rx_prectle_peak_max_fine     : 4;  /**< RX PRE-CTLE peak maximum value in VMA fine mode (valid when
                                                         GSER()_LANE_P()_MODE_1[VMA_FINE_CFG_SEL]=1 and GSER()_LANE_P()_MODE_1[VMA_MM]=0). */
	uint64_t rx_prectle_peak_min_fine     : 4;  /**< RX PRE-CTLE peak minimum value in VMA fine mode (valid when
                                                         GSER()_LANE_P()_MODE_1[VMA_FINE_CFG_SEL]=1 and GSER()_LANE_P()_MODE_1[VMA_MM]=0). */
	uint64_t rx_prectle_peak_step_fine    : 2;  /**< RX PRE-CTLE peak step size in VMA fine mode (valid when
                                                         GSER()_LANE_P()_MODE_1[VMA_FINE_CFG_SEL]=1 and GSER()_LANE_P()_MODE_1[VMA_MM]=0). */
#else
	uint64_t rx_prectle_peak_step_fine    : 2;
	uint64_t rx_prectle_peak_min_fine     : 4;
	uint64_t rx_prectle_peak_max_fine     : 4;
	uint64_t reserved_10_63               : 54;
#endif
	} s;
	struct cvmx_gserx_lane_vma_fine_ctrl_2_s cn78xx;
};
typedef union cvmx_gserx_lane_vma_fine_ctrl_2 cvmx_gserx_lane_vma_fine_ctrl_2_t;

/**
 * cvmx_gser#_pcie_pcs_clk_req
 *
 * PCIE PIPE Clock Required
 *
 */
union cvmx_gserx_pcie_pcs_clk_req {
	uint64_t u64;
	struct cvmx_gserx_pcie_pcs_clk_req_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t clk_req                      : 1;  /**< When asserted, indicates that the external logic requires the PHY's
                                                         PCLK to remain active, preventing the PIPE PCS from powering off
                                                         that clock while in the P2 state.
                                                         Note, the PCS hangs if this bit is asserted when a Fundamental Reset
                                                         is issued to the PEM. */
#else
	uint64_t clk_req                      : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_pcie_pcs_clk_req_s  cn70xx;
	struct cvmx_gserx_pcie_pcs_clk_req_s  cn70xxp1;
};
typedef union cvmx_gserx_pcie_pcs_clk_req cvmx_gserx_pcie_pcs_clk_req_t;

/**
 * cvmx_gser#_pcie_pipe#_txdeemph
 *
 * PCIE PIPE Transmitter De-emphasis.
 *
 */
union cvmx_gserx_pcie_pipex_txdeemph {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipex_txdeemph_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t pipe_txdeemph                : 1;  /**< Selects Transmitter De-emphasis.
                                                         - 0: enabled (6 dB / 3.5 dB)
                                                         - 1: No de-emphasis */
#else
	uint64_t pipe_txdeemph                : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_pcie_pipex_txdeemph_s cn70xx;
	struct cvmx_gserx_pcie_pipex_txdeemph_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_pipex_txdeemph cvmx_gserx_pcie_pipex_txdeemph_t;

/**
 * cvmx_gser#_pcie_pipe_com_clk
 *
 * PCIE Select Common Clock Mode for Receive Data Path.
 *
 */
union cvmx_gserx_pcie_pipe_com_clk {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipe_com_clk_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t com_clk                      : 1;  /**< When both ends of a PCIe link share a common reference clock, the
                                                         latency through the receiver's elasticity buffer can be shorter,
                                                         because no frequency offset exists between the two ends of the link.
                                                         Assert this control only if all physical lanes of the PHY are
                                                         guaranteed to be connected to links that share a common reference
                                                         clock. */
#else
	uint64_t com_clk                      : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_pcie_pipe_com_clk_s cn70xx;
	struct cvmx_gserx_pcie_pipe_com_clk_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_pipe_com_clk cvmx_gserx_pcie_pipe_com_clk_t;

/**
 * cvmx_gser#_pcie_pipe_crst
 *
 * PCIE PIPE Cold Reset.
 *
 */
union cvmx_gserx_pcie_pipe_crst {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipe_crst_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t pipe_crst                    : 1;  /**< PCIE PIPE Async Cold Reset Contol. */
#else
	uint64_t pipe_crst                    : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_pcie_pipe_crst_s    cn70xx;
	struct cvmx_gserx_pcie_pipe_crst_s    cn70xxp1;
};
typedef union cvmx_gserx_pcie_pipe_crst cvmx_gserx_pcie_pipe_crst_t;

/**
 * cvmx_gser#_pcie_pipe_port_loopbk
 *
 * PCIE Tx-to-Rx Loopback Enable.
 *
 */
union cvmx_gserx_pcie_pipe_port_loopbk {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipe_port_loopbk_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t pipe3_loopbk                 : 1;  /**< When this signal is asserted, data from the PIPE3 transmit predriver
                                                         is looped back to the receive slicers.  LOS is bypassed and based on
                                                         the TxN_en input so that rxN_los !txN_data_en. */
	uint64_t pipe2_loopbk                 : 1;  /**< When this signal is asserted, data from the PIPE2 transmit predriver
                                                         is looped back to the receive slicers.  LOS is bypassed and based on
                                                         the TxN_en input so that rxN_los !txN_data_en. */
	uint64_t pipe1_loopbk                 : 1;  /**< When this signal is asserted, data from the PIPE1 transmit predriver
                                                         is looped back to the receive slicers.  LOS is bypassed and based on
                                                         the TxN_en input so that rxN_los !txN_data_en. */
	uint64_t pipe0_loopbk                 : 1;  /**< When this signal is asserted, data from the PIPE0 transmit predriver
                                                         is looped back to the receive slicers.  LOS is bypassed and based on
                                                         the TxN_en input so that rxN_los !txN_data_en. */
#else
	uint64_t pipe0_loopbk                 : 1;
	uint64_t pipe1_loopbk                 : 1;
	uint64_t pipe2_loopbk                 : 1;
	uint64_t pipe3_loopbk                 : 1;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_pcie_pipe_port_loopbk_s cn70xx;
	struct cvmx_gserx_pcie_pipe_port_loopbk_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_pipe_port_loopbk cvmx_gserx_pcie_pipe_port_loopbk_t;

/**
 * cvmx_gser#_pcie_pipe_port_sel
 *
 * PCIE PIPE Enable Request.
 *
 */
union cvmx_gserx_pcie_pipe_port_sel {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipe_port_sel_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_3_63                : 61;
	uint64_t cfg_pem1_dlm2                : 1;  /**< The PIPE (Pipe1 or Pipe2) and PHY (DLM1 or DLM2) configuration for PEM1
                                                          when in 4-Pipe Mode.
                                                          This bit should not be set in Single Pipe or 2-Pipe Mode.
                                                         - 0: PEM1 is tied to Pipe1/DLM1.  This is 3x1 PCIe mode when all 4 PIPES are enabled.
                                                         - 1: PEM1 is tied to Pipe2/DLM2.  This is 2x1 PCIe mode with SATA */
	uint64_t pipe_port_sel                : 2;  /**< PIPE enable request.  Change only when phy_reset is asserted.
                                                         - 00: Disables all PIPEs
                                                         - 01: Single Pipe Mode. Enables PIPE0 (PEM0) only.
                                                             This is 1x4 PCIe mode.
                                                         - 10: 2-Pipe Mode.  Enables PIPEs 0 (PEM0) and 1 (PEM1).
                                                             This is 2x2 PCIe mode or 1x2 PCIe mode with SATA.
                                                         - 11: 4-Pipe Mode. Enables PIPEs 0 (PEM0), 1, 2 (PEM1), and 3 (PEM2).
                                                             This is 2x1 PCIe mode with SATA or 3x1 PCIe mode. */
#else
	uint64_t pipe_port_sel                : 2;
	uint64_t cfg_pem1_dlm2                : 1;
	uint64_t reserved_3_63                : 61;
#endif
	} s;
	struct cvmx_gserx_pcie_pipe_port_sel_s cn70xx;
	struct cvmx_gserx_pcie_pipe_port_sel_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_pipe_port_sel cvmx_gserx_pcie_pipe_port_sel_t;

/**
 * cvmx_gser#_pcie_pipe_rst
 *
 * PCIE PIPE Reset.
 *
 */
union cvmx_gserx_pcie_pipe_rst {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipe_rst_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t pipe3_rst                    : 1;  /**< Pipe 3 Reset.  Setting this bit will put Pipe 3 into reset.
                                                         PEM2 is always tied to Pipe 3. */
	uint64_t pipe2_rst                    : 1;  /**< Pipe 2 Reset.  Setting this bit will put Pipe 2 into reset.
                                                         PEM1 is tied to Pipe 2 in 3x1 PCIe mode (GSER_PCIE_PIPE_PORT_SEL.PIPE_PORT_SEL
                                                         is set to 4-pipe mode, and GSER_PCIE_PIPE_PORT_SEL.CFG_PEM1_DLM2 is also set). */
	uint64_t pipe1_rst                    : 1;  /**< Pipe 1 Reset.  Setting this bit will put Pipe 1 into reset.
                                                         PEM1 is tied to Pipe 1 in 2x2 PCIe or 2x1 PCIe with SATA modes. */
	uint64_t pipe0_rst                    : 1;  /**< Pipe 0 Reset.  Setting this bit will put Pipe 0 into reset.
                                                         PEM0 is always tied to Pipe 0. */
#else
	uint64_t pipe0_rst                    : 1;
	uint64_t pipe1_rst                    : 1;
	uint64_t pipe2_rst                    : 1;
	uint64_t pipe3_rst                    : 1;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_pcie_pipe_rst_s     cn70xx;
	struct cvmx_gserx_pcie_pipe_rst_s     cn70xxp1;
};
typedef union cvmx_gserx_pcie_pipe_rst cvmx_gserx_pcie_pipe_rst_t;

/**
 * cvmx_gser#_pcie_pipe_rst_sts
 *
 * PCIE PIPE Status Reset.
 *
 */
union cvmx_gserx_pcie_pipe_rst_sts {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipe_rst_sts_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t pipe3_rst                    : 1;  /**< Reflects the current state of the pipe3_rst_n which includes
                                                         the rst__pem2_pcs_rst_n term from the reset controller.  Note that
                                                         when PIPE3_RST is asserted (active low), no Pipe clocks are generated
                                                         to PEM3 and any RSL reads to the application side registers will time out. */
	uint64_t pipe2_rst                    : 1;  /**< Reflects the current state of the pipe2_rst_n which includes
                                                         the rst__pem2_pcs_rst_n term from the reset controller.  Note that
                                                         when PIPE2_RST is asserted (active low) and PEM1 is being used in
                                                         3x1 PCIe mode (4-Pipe Mode with CFG_PEM1_DLM2 set), no Pipe clocks
                                                         are generated to PEM1 and any RSL reads to the application side
                                                         registers will time out. */
	uint64_t pipe1_rst                    : 1;  /**< Reflects the current state of the pipe1_rst_n which includes
                                                         the rst__pem1_pcs_rst_n term from the reset controller.  Note that
                                                         when PIPE1_RST is asserted (active low) and PEM1 is being used in
                                                         2x2 PCIe or 2x1 PCIe with SATA, no Pipe clocks are generated to PEM1
                                                         and any RSL reads to the application side registers will time out. */
	uint64_t pipe0_rst                    : 1;  /**< Reflects the current state of the pipe0_rst_n which includes
                                                         the rst__pem0_pcs_rst_n term from the reset controller.  Note that
                                                         when PIPE0_RST is asserted (active low), no Pipe clocks are generated
                                                         to PEM0 and any RSL reads to the application side registers will time out. */
#else
	uint64_t pipe0_rst                    : 1;
	uint64_t pipe1_rst                    : 1;
	uint64_t pipe2_rst                    : 1;
	uint64_t pipe3_rst                    : 1;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_pcie_pipe_rst_sts_s cn70xx;
	struct cvmx_gserx_pcie_pipe_rst_sts_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_pipe_rst_sts cvmx_gserx_pcie_pipe_rst_sts_t;

/**
 * cvmx_gser#_pcie_pipe_status
 *
 * PCIE PIPE Status.
 *
 */
union cvmx_gserx_pcie_pipe_status {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipe_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t pipe3_clkreqn                : 1;  /**< When asserted, indicates that the PCS/PHY layer is in a mode where
                                                         reference clocks are required.  When deasserted, the PIPE PCS is
                                                         powered down into a state where the external reference clocks can
                                                         be turned off. */
	uint64_t pipe2_clkreqn                : 1;  /**< When asserted, indicates that the PCS/PHY layer is in a mode where
                                                         reference clocks are required.  When deasserted, the PIPE PCS is
                                                         powered down into a state where the external reference clocks can
                                                         be turned off. */
	uint64_t pipe1_clkreqn                : 1;  /**< When asserted, indicates that the PCS/PHY layer is in a mode where
                                                         reference clocks are required.  When deasserted, the PIPE PCS is
                                                         powered down into a state where the external reference clocks can
                                                         be turned off. */
	uint64_t pipe0_clkreqn                : 1;  /**< When asserted, indicates that the PCS/PHY layer is in a mode where
                                                         reference clocks are required.  When deasserted, the PIPE PCS is
                                                         powered down into a state where the external reference clocks can
                                                         be turned off. */
#else
	uint64_t pipe0_clkreqn                : 1;
	uint64_t pipe1_clkreqn                : 1;
	uint64_t pipe2_clkreqn                : 1;
	uint64_t pipe3_clkreqn                : 1;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_pcie_pipe_status_s  cn70xx;
	struct cvmx_gserx_pcie_pipe_status_s  cn70xxp1;
};
typedef union cvmx_gserx_pcie_pipe_status cvmx_gserx_pcie_pipe_status_t;

/**
 * cvmx_gser#_pcie_tx_deemph_gen1
 *
 * PCIE Tx De-emphasis at 3.5 dB.
 *
 */
union cvmx_gserx_pcie_tx_deemph_gen1 {
	uint64_t u64;
	struct cvmx_gserx_pcie_tx_deemph_gen1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_6_63                : 58;
	uint64_t tx_deemph_gen1               : 6;  /**< This static value sets the launch amplitude of the transmitter
                                                         when pipeP_tx_swing is set to 0x0 (default state). Used for
                                                         tuning at the board level for Rx eye compliance. */
#else
	uint64_t tx_deemph_gen1               : 6;
	uint64_t reserved_6_63                : 58;
#endif
	} s;
	struct cvmx_gserx_pcie_tx_deemph_gen1_s cn70xx;
	struct cvmx_gserx_pcie_tx_deemph_gen1_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_tx_deemph_gen1 cvmx_gserx_pcie_tx_deemph_gen1_t;

/**
 * cvmx_gser#_pcie_tx_deemph_gen2_3p5db
 *
 * PCIE Tx De-emphasis at 3.5 dB.
 *
 */
union cvmx_gserx_pcie_tx_deemph_gen2_3p5db {
	uint64_t u64;
	struct cvmx_gserx_pcie_tx_deemph_gen2_3p5db_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_6_63                : 58;
	uint64_t tx_deemph_gen2_3p5db         : 6;  /**< This static value sets the Tx driver deemphasis value in the case where
                                                         pipeP_tx_deemph is set to 1'b1 (default setting) and the PHY is running
                                                         at the Gen2 rate. Used for tuning at the board level for Rx eye compliance. */
#else
	uint64_t tx_deemph_gen2_3p5db         : 6;
	uint64_t reserved_6_63                : 58;
#endif
	} s;
	struct cvmx_gserx_pcie_tx_deemph_gen2_3p5db_s cn70xx;
	struct cvmx_gserx_pcie_tx_deemph_gen2_3p5db_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_tx_deemph_gen2_3p5db cvmx_gserx_pcie_tx_deemph_gen2_3p5db_t;

/**
 * cvmx_gser#_pcie_tx_deemph_gen2_6db
 *
 * PCIE Tx De-emphasis at 6 dB.
 *
 */
union cvmx_gserx_pcie_tx_deemph_gen2_6db {
	uint64_t u64;
	struct cvmx_gserx_pcie_tx_deemph_gen2_6db_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_6_63                : 58;
	uint64_t tx_deemph_gen2_6db           : 6;  /**< This static value sets the Tx driver deemphasis value in the case where
                                                         pipeP_tx_deemph is set to 1'b0 and the PHY is running at the Gen2 rate.
                                                         Used for tuning at the board level for Rx eye compliance. */
#else
	uint64_t tx_deemph_gen2_6db           : 6;
	uint64_t reserved_6_63                : 58;
#endif
	} s;
	struct cvmx_gserx_pcie_tx_deemph_gen2_6db_s cn70xx;
	struct cvmx_gserx_pcie_tx_deemph_gen2_6db_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_tx_deemph_gen2_6db cvmx_gserx_pcie_tx_deemph_gen2_6db_t;

/**
 * cvmx_gser#_pcie_tx_swing_full
 *
 * PCIE Tx Amplitude (Full Swing Mode).
 *
 */
union cvmx_gserx_pcie_tx_swing_full {
	uint64_t u64;
	struct cvmx_gserx_pcie_tx_swing_full_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_7_63                : 57;
	uint64_t tx_swing_hi                  : 7;  /**< This static value sets the launch amplitude of the transmitter when
                                                         pipeP_tx_swing is set to 1'b0 (default state).  Used for tuning at
                                                         the board level for Rx eye compliance. */
#else
	uint64_t tx_swing_hi                  : 7;
	uint64_t reserved_7_63                : 57;
#endif
	} s;
	struct cvmx_gserx_pcie_tx_swing_full_s cn70xx;
	struct cvmx_gserx_pcie_tx_swing_full_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_tx_swing_full cvmx_gserx_pcie_tx_swing_full_t;

/**
 * cvmx_gser#_pcie_tx_swing_low
 *
 * PCIE Tx Amplitude (Low Swing Mode).
 *
 */
union cvmx_gserx_pcie_tx_swing_low {
	uint64_t u64;
	struct cvmx_gserx_pcie_tx_swing_low_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_7_63                : 57;
	uint64_t tx_swing_lo                  : 7;  /**< This static value sets the launch amplitude of the transmitter when
                                                         pipeP_tx_swing is set to 1'b1 (low swing mode).  Used for tuning at
                                                         the board level for Rx eye compliance. */
#else
	uint64_t tx_swing_lo                  : 7;
	uint64_t reserved_7_63                : 57;
#endif
	} s;
	struct cvmx_gserx_pcie_tx_swing_low_s cn70xx;
	struct cvmx_gserx_pcie_tx_swing_low_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_tx_swing_low cvmx_gserx_pcie_tx_swing_low_t;

/**
 * cvmx_gser#_pcie_tx_vboost_lvl
 *
 * PCIE Tx Voltage Boost Level.
 *
 */
union cvmx_gserx_pcie_tx_vboost_lvl {
	uint64_t u64;
	struct cvmx_gserx_pcie_tx_vboost_lvl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_3_63                : 61;
	uint64_t tx_vboost_lvl                : 3;  /**< Controls the launch amplitude only when VPTX is less than the launch
                                                         amplitude correspnding to tx_vboost_lvl.  Valid settings:
                                                         - 011: Corresponds to a launch amplitude of 0.844V
                                                         - 100: Corresponds to a launch amplitude of 1.008V
                                                         - 101: Corresponds to a launch amplitude of 1.156V. */
#else
	uint64_t tx_vboost_lvl                : 3;
	uint64_t reserved_3_63                : 61;
#endif
	} s;
	struct cvmx_gserx_pcie_tx_vboost_lvl_s cn70xx;
	struct cvmx_gserx_pcie_tx_vboost_lvl_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_tx_vboost_lvl cvmx_gserx_pcie_tx_vboost_lvl_t;

/**
 * cvmx_gser#_phy#_idcode_hi
 *
 * PHY Version Hi.
 *
 */
union cvmx_gserx_phyx_idcode_hi {
	uint64_t u64;
	struct cvmx_gserx_phyx_idcode_hi_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t idcode_hi                    : 16; /**< The PHY version high. */
#else
	uint64_t idcode_hi                    : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_phyx_idcode_hi_s    cn70xx;
	struct cvmx_gserx_phyx_idcode_hi_s    cn70xxp1;
};
typedef union cvmx_gserx_phyx_idcode_hi cvmx_gserx_phyx_idcode_hi_t;

/**
 * cvmx_gser#_phy#_idcode_lo
 *
 * PHY Version Low.
 *
 */
union cvmx_gserx_phyx_idcode_lo {
	uint64_t u64;
	struct cvmx_gserx_phyx_idcode_lo_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t idcode_lo                    : 16; /**< The PHY version low. */
#else
	uint64_t idcode_lo                    : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_phyx_idcode_lo_s    cn70xx;
	struct cvmx_gserx_phyx_idcode_lo_s    cn70xxp1;
};
typedef union cvmx_gserx_phyx_idcode_lo cvmx_gserx_phyx_idcode_lo_t;

/**
 * cvmx_gser#_phy#_lane0_loopback
 *
 * PHY Lane 0 Loopback Control.
 *
 */
union cvmx_gserx_phyx_lane0_loopback {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane0_loopback_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_8_63                : 56;
	uint64_t ovrd_tx_lb                   : 1;  /**< Enables override of tx_lb_en pin. */
	uint64_t tx_lb_en_reg                 : 1;  /**< Value of tx_lb_en pin when OVRD_TX_LB is enabled. */
	uint64_t atb_vptx                     : 1;  /**< Places vptx0 on atb_s_p and gd on atb_s_m. */
	uint64_t atb_vreg_tx                  : 1;  /**< Places vreg_tx on atb_s_p and gd on atb_s_m. */
	uint64_t atb_vdccp                    : 1;  /**< Places vddc_m on atb_s_p. */
	uint64_t atb_vdccm                    : 1;  /**< Places vdcc_m on atb_s_m. */
	uint64_t reserved_1_1                 : 1;
	uint64_t sel_pmix_clk                 : 1;  /**< Selects pmix_clk for Tx clock for ATE test mode. */
#else
	uint64_t sel_pmix_clk                 : 1;
	uint64_t reserved_1_1                 : 1;
	uint64_t atb_vdccm                    : 1;
	uint64_t atb_vdccp                    : 1;
	uint64_t atb_vreg_tx                  : 1;
	uint64_t atb_vptx                     : 1;
	uint64_t tx_lb_en_reg                 : 1;
	uint64_t ovrd_tx_lb                   : 1;
	uint64_t reserved_8_63                : 56;
#endif
	} s;
	struct cvmx_gserx_phyx_lane0_loopback_s cn70xx;
	struct cvmx_gserx_phyx_lane0_loopback_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane0_loopback cvmx_gserx_phyx_lane0_loopback_t;

/**
 * cvmx_gser#_phy#_lane0_rx_lbert_ctl
 *
 * PHY LANE0 RX LBERT Control.
 *
 */
union cvmx_gserx_phyx_lane0_rx_lbert_ctl {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane0_rx_lbert_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_5_63                : 59;
	uint64_t sync                         : 1;  /**< Synchronizes pattern matcher with incoming data.  A write of a 1
                                                         to this bit resets the error counter and starts a synchronization of
                                                         the PM.  Once this bit is set, there is no need to write the field back
                                                         to a zero. */
	uint64_t mode                         : 4;  /**< Pattern to match.  When changing modes, the field must be set to zero
                                                          first.  This field should match what was configured for the TX LBERT
                                                          Control register.
                                                         - 0: disabled
                                                         - 1: lfsr31     X^31 + X^28 + 1
                                                         - 2: lfsr23     X^23 + X^18 + 1
                                                         - 3: lfsr15     X^15 + X^14 + 1
                                                         - 4: lfsr7      X^7 + X^6 + 1
                                                         - 5: d[n] = d[n-10]
                                                         - 6: d[n] = !d[n-10]
                                                         - 7: d[n] = !d[n-20]
                                                          - 15-8: Reserved. */
#else
	uint64_t mode                         : 4;
	uint64_t sync                         : 1;
	uint64_t reserved_5_63                : 59;
#endif
	} s;
	struct cvmx_gserx_phyx_lane0_rx_lbert_ctl_s cn70xx;
	struct cvmx_gserx_phyx_lane0_rx_lbert_ctl_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane0_rx_lbert_ctl cvmx_gserx_phyx_lane0_rx_lbert_ctl_t;

/**
 * cvmx_gser#_phy#_lane0_rx_lbert_err
 *
 * PHY LANE0 RX LBERT Error.
 * A read of this register, or a SYNC from the RX LBERT Control register
 * resets the error count.  If all bits in this regisert are set, the
 * error counter has saturated.
 */
union cvmx_gserx_phyx_lane0_rx_lbert_err {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane0_rx_lbert_err_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t ov14                         : 1;  /**< If this bit is set, and COUNT[15] is also set, signals a overflow of counter. */
	uint64_t count                        : 15; /**< Current error count if OV14 field is active, then multiply count
                                                         by 128 to get the actual count. */
#else
	uint64_t count                        : 15;
	uint64_t ov14                         : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_phyx_lane0_rx_lbert_err_s cn70xx;
	struct cvmx_gserx_phyx_lane0_rx_lbert_err_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane0_rx_lbert_err cvmx_gserx_phyx_lane0_rx_lbert_err_t;

/**
 * cvmx_gser#_phy#_lane0_rx_ovrd_in_lo
 *
 * PHY LANE0 TX Override Input Low
 *
 */
union cvmx_gserx_phyx_lane0_rx_ovrd_in_lo {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane0_rx_ovrd_in_lo_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_14_63               : 50;
	uint64_t rx_los_en_ovrd               : 1;  /**< Override enable for rx_los_en. */
	uint64_t rx_los_en                    : 1;  /**< Override value for rx_los_en. */
	uint64_t rx_term_en_ovrd              : 1;  /**< Override enable for rx_term_en. */
	uint64_t rx_term_en                   : 1;  /**< Override value for rx_term_en. */
	uint64_t rx_bit_shift_ovrd            : 1;  /**< Override enable for rx_bit_shift. */
	uint64_t rx_bit_shift_en              : 1;  /**< Override value for rx_bit_shift. */
	uint64_t rx_align_en_ovrd             : 1;  /**< Override enable for rx_align_en. */
	uint64_t rx_align_en                  : 1;  /**< Override value for rx_align_en. */
	uint64_t rx_data_en_ovrd              : 1;  /**< Override enable for rx_data_en. */
	uint64_t rx_data_en                   : 1;  /**< Override value for rx_data_en. */
	uint64_t rx_pll_en_ovrd               : 1;  /**< Override enable for rx_pll_en. */
	uint64_t rx_pll_en                    : 1;  /**< Override value for rx_pll_en. */
	uint64_t rx_invert_ovrd               : 1;  /**< Override enable for rx_invert. */
	uint64_t rx_invert                    : 1;  /**< Override value for rx_invert. */
#else
	uint64_t rx_invert                    : 1;
	uint64_t rx_invert_ovrd               : 1;
	uint64_t rx_pll_en                    : 1;
	uint64_t rx_pll_en_ovrd               : 1;
	uint64_t rx_data_en                   : 1;
	uint64_t rx_data_en_ovrd              : 1;
	uint64_t rx_align_en                  : 1;
	uint64_t rx_align_en_ovrd             : 1;
	uint64_t rx_bit_shift_en              : 1;
	uint64_t rx_bit_shift_ovrd            : 1;
	uint64_t rx_term_en                   : 1;
	uint64_t rx_term_en_ovrd              : 1;
	uint64_t rx_los_en                    : 1;
	uint64_t rx_los_en_ovrd               : 1;
	uint64_t reserved_14_63               : 50;
#endif
	} s;
	struct cvmx_gserx_phyx_lane0_rx_ovrd_in_lo_s cn70xx;
	struct cvmx_gserx_phyx_lane0_rx_ovrd_in_lo_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane0_rx_ovrd_in_lo cvmx_gserx_phyx_lane0_rx_ovrd_in_lo_t;

/**
 * cvmx_gser#_phy#_lane0_tx_lbert_ctl
 *
 * PHY LANE0 TX LBERT Control.
 *
 */
union cvmx_gserx_phyx_lane0_tx_lbert_ctl {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane0_tx_lbert_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t pat0                         : 10; /**< 10-bit pattern for modes that use this field.  Ignored for
                                                         other modes. */
	uint64_t trig_err                     : 1;  /**< Single shot inversion of the LSB of the current symbol.
                                                         Any write of 1 to this bit will insert an error. */
	uint64_t mode                         : 4;  /**< Pattern to generate.  When changing modes, the field must be set to zero
                                                          first.
                                                         - 0: disabled
                                                         - 1: lfsr31     X^31 + X^28 + 1
                                                         - 2: lfsr23     X^23 + X^18 + 1
                                                         - 3: lfsr15     X^15 + X^14 + 1
                                                         - 4: lfsr7      X^7 + X^6 + 1
                                                         - 5: Fixed word (PAT0)
                                                         - 6: DC-balanced word (PAT0, ~PAT0)
                                                         - 7: Word pattern (20-bit)
                                                          - 15-8: Reserved. */
#else
	uint64_t mode                         : 4;
	uint64_t trig_err                     : 1;
	uint64_t pat0                         : 10;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_gserx_phyx_lane0_tx_lbert_ctl_s cn70xx;
	struct cvmx_gserx_phyx_lane0_tx_lbert_ctl_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane0_tx_lbert_ctl cvmx_gserx_phyx_lane0_tx_lbert_ctl_t;

/**
 * cvmx_gser#_phy#_lane0_tx_ovrd_in_hi
 *
 * PHY LANE0 TX Override Input High
 *
 */
union cvmx_gserx_phyx_lane0_tx_ovrd_in_hi {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane0_tx_ovrd_in_hi_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_10_63               : 54;
	uint64_t tx_vboost_en_ovrd            : 1;  /**< Override enable for tx_vboost_en. */
	uint64_t tx_vboost_en                 : 1;  /**< Override value for tx_vboost_en. */
	uint64_t tx_reset_ovrd                : 1;  /**< Override enable for tx_reset. */
	uint64_t tx_reset                     : 1;  /**< Override value for tx_reset. */
	uint64_t tx_nyquist_data              : 1;  /**< Overrides incoming data to nyquist. */
	uint64_t tx_clk_out_en_ovrd           : 1;  /**< Override enable for tx_clk_out_en. */
	uint64_t tx_clk_out_en                : 1;  /**< Override value for tx_clk_out_en. */
	uint64_t tx_rate_ovrd                 : 1;  /**< Override enable for tx lane rate. */
	uint64_t tx_rate                      : 2;  /**< Override value for tx_rate. */
#else
	uint64_t tx_rate                      : 2;
	uint64_t tx_rate_ovrd                 : 1;
	uint64_t tx_clk_out_en                : 1;
	uint64_t tx_clk_out_en_ovrd           : 1;
	uint64_t tx_nyquist_data              : 1;
	uint64_t tx_reset                     : 1;
	uint64_t tx_reset_ovrd                : 1;
	uint64_t tx_vboost_en                 : 1;
	uint64_t tx_vboost_en_ovrd            : 1;
	uint64_t reserved_10_63               : 54;
#endif
	} s;
	struct cvmx_gserx_phyx_lane0_tx_ovrd_in_hi_s cn70xx;
	struct cvmx_gserx_phyx_lane0_tx_ovrd_in_hi_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane0_tx_ovrd_in_hi cvmx_gserx_phyx_lane0_tx_ovrd_in_hi_t;

/**
 * cvmx_gser#_phy#_lane0_tx_ovrd_in_lo
 *
 * PHY LANE0 TX Override Input Low
 *
 */
union cvmx_gserx_phyx_lane0_tx_ovrd_in_lo {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane0_tx_ovrd_in_lo_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_12_63               : 52;
	uint64_t tx_beacon_en_ovrd            : 1;  /**< Override enable for tx_beacon_en. */
	uint64_t tx_beacon_en                 : 1;  /**< Override value for tx_beacon_en. */
	uint64_t tx_cm_en_ovrd                : 1;  /**< Override enable for tx_cm_en. */
	uint64_t tx_cm_en                     : 1;  /**< Override value for tx_cm_en. */
	uint64_t tx_en_ovrd                   : 1;  /**< Override enable for tx_en. */
	uint64_t tx_en                        : 1;  /**< Override value for tx_en. */
	uint64_t tx_data_en_ovrd              : 1;  /**< Override enable for tx_data_en. */
	uint64_t tx_data_en                   : 1;  /**< Override value for tx_data_en. */
	uint64_t tx_invert_ovrd               : 1;  /**< Override enable for tx_invert. */
	uint64_t tx_invert                    : 1;  /**< Override value for tx_invert. */
	uint64_t loopbk_en_ovrd               : 1;  /**< Override enable for loopbk_en. */
	uint64_t loopbk_en                    : 1;  /**< Override value for loopbk_en. */
#else
	uint64_t loopbk_en                    : 1;
	uint64_t loopbk_en_ovrd               : 1;
	uint64_t tx_invert                    : 1;
	uint64_t tx_invert_ovrd               : 1;
	uint64_t tx_data_en                   : 1;
	uint64_t tx_data_en_ovrd              : 1;
	uint64_t tx_en                        : 1;
	uint64_t tx_en_ovrd                   : 1;
	uint64_t tx_cm_en                     : 1;
	uint64_t tx_cm_en_ovrd                : 1;
	uint64_t tx_beacon_en                 : 1;
	uint64_t tx_beacon_en_ovrd            : 1;
	uint64_t reserved_12_63               : 52;
#endif
	} s;
	struct cvmx_gserx_phyx_lane0_tx_ovrd_in_lo_s cn70xx;
	struct cvmx_gserx_phyx_lane0_tx_ovrd_in_lo_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane0_tx_ovrd_in_lo cvmx_gserx_phyx_lane0_tx_ovrd_in_lo_t;

/**
 * cvmx_gser#_phy#_lane0_txdebug
 *
 * PHY LANE0 TX DEBUG.
 *
 */
union cvmx_gserx_phyx_lane0_txdebug {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane0_txdebug_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_12_63               : 52;
	uint64_t rxdet_meas_time              : 8;  /**< Time to wait for rxdet measurement. */
	uint64_t detrx_always                 : 1;  /**< Always signals 1 for rx_detect ignoring analog. */
	uint64_t dtb_sel                      : 3;  /**< Selects data to drive on the DTB. */
#else
	uint64_t dtb_sel                      : 3;
	uint64_t detrx_always                 : 1;
	uint64_t rxdet_meas_time              : 8;
	uint64_t reserved_12_63               : 52;
#endif
	} s;
	struct cvmx_gserx_phyx_lane0_txdebug_s cn70xx;
	struct cvmx_gserx_phyx_lane0_txdebug_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane0_txdebug cvmx_gserx_phyx_lane0_txdebug_t;

/**
 * cvmx_gser#_phy#_lane1_loopback
 *
 * PHY Lane 1 Loopback Control.
 *
 */
union cvmx_gserx_phyx_lane1_loopback {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane1_loopback_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_8_63                : 56;
	uint64_t ovrd_tx_lb                   : 1;  /**< Enables override of tx_lb_en pin. */
	uint64_t tx_lb_en_reg                 : 1;  /**< Value of tx_lb_en pin when OVRD_TX_LB is enabled. */
	uint64_t atb_vptx                     : 1;  /**< Places vptx0 on atb_s_p and gd on atb_s_m. */
	uint64_t atb_vreg_tx                  : 1;  /**< Places vreg_tx on atb_s_p and gd on atb_s_m. */
	uint64_t atb_vdccp                    : 1;  /**< Places vddc_m on atb_s_p. */
	uint64_t atb_vdccm                    : 1;  /**< Places vdcc_m on atb_s_m. */
	uint64_t reserved_1_1                 : 1;
	uint64_t sel_pmix_clk                 : 1;  /**< Selects pmix_clk for Tx clock for ATE test mode. */
#else
	uint64_t sel_pmix_clk                 : 1;
	uint64_t reserved_1_1                 : 1;
	uint64_t atb_vdccm                    : 1;
	uint64_t atb_vdccp                    : 1;
	uint64_t atb_vreg_tx                  : 1;
	uint64_t atb_vptx                     : 1;
	uint64_t tx_lb_en_reg                 : 1;
	uint64_t ovrd_tx_lb                   : 1;
	uint64_t reserved_8_63                : 56;
#endif
	} s;
	struct cvmx_gserx_phyx_lane1_loopback_s cn70xx;
	struct cvmx_gserx_phyx_lane1_loopback_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane1_loopback cvmx_gserx_phyx_lane1_loopback_t;

/**
 * cvmx_gser#_phy#_lane1_rx_lbert_ctl
 *
 * PHY LANE1 TX LBERT Control.
 *
 */
union cvmx_gserx_phyx_lane1_rx_lbert_ctl {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane1_rx_lbert_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_5_63                : 59;
	uint64_t sync                         : 1;  /**< Synchronizes pattern matcher with incoming data.  A write of a 1
                                                         to this bit resets the error counter and starts a synchronization of
                                                         the PM.  Once this bit is set, there is no need to write the field back
                                                         to a zero. */
	uint64_t mode                         : 4;  /**< Pattern to match.  When changing modes, the field must be set to zero
                                                          first.  This field should match what was configured for the TX LBERT
                                                          Control register.
                                                         - 0: disabled
                                                         - 1: lfsr31     X^31 + X^28 + 1
                                                         - 2: lfsr23     X^23 + X^18 + 1
                                                         - 3: lfsr15     X^15 + X^14 + 1
                                                         - 4: lfsr7      X^7 + X^6 + 1
                                                         - 5: d[n] = d[n-10]
                                                         - 6: d[n] = !d[n-10]
                                                         - 7: d[n] = !d[n-20]
                                                          - 15-8: Reserved. */
#else
	uint64_t mode                         : 4;
	uint64_t sync                         : 1;
	uint64_t reserved_5_63                : 59;
#endif
	} s;
	struct cvmx_gserx_phyx_lane1_rx_lbert_ctl_s cn70xx;
	struct cvmx_gserx_phyx_lane1_rx_lbert_ctl_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane1_rx_lbert_ctl cvmx_gserx_phyx_lane1_rx_lbert_ctl_t;

/**
 * cvmx_gser#_phy#_lane1_rx_lbert_err
 *
 * PHY LANE1 RX LBERT Error.
 * A read of this register, or a SYNC from the RX LBERT Control register
 * resets the error count.  If all bits in this regisert are set, the
 * error counter has saturated.
 */
union cvmx_gserx_phyx_lane1_rx_lbert_err {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane1_rx_lbert_err_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t ov14                         : 1;  /**< If this bit is set, and COUNT[15] is also set, signals a overflow of counter. */
	uint64_t count                        : 15; /**< Current error count if OV14 field is active, then multiply count
                                                         by 128 to get the actual count. */
#else
	uint64_t count                        : 15;
	uint64_t ov14                         : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_phyx_lane1_rx_lbert_err_s cn70xx;
	struct cvmx_gserx_phyx_lane1_rx_lbert_err_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane1_rx_lbert_err cvmx_gserx_phyx_lane1_rx_lbert_err_t;

/**
 * cvmx_gser#_phy#_lane1_rx_ovrd_in_lo
 *
 * PHY LANE1 TX Override Input Low
 *
 */
union cvmx_gserx_phyx_lane1_rx_ovrd_in_lo {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane1_rx_ovrd_in_lo_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_14_63               : 50;
	uint64_t rx_los_en_ovrd               : 1;  /**< Override enable for rx_los_en. */
	uint64_t rx_los_en                    : 1;  /**< Override value for rx_los_en. */
	uint64_t rx_term_en_ovrd              : 1;  /**< Override enable for rx_term_en. */
	uint64_t rx_term_en                   : 1;  /**< Override value for rx_term_en. */
	uint64_t rx_bit_shift_ovrd            : 1;  /**< Override enable for rx_bit_shift. */
	uint64_t rx_bit_shift_en              : 1;  /**< Override value for rx_bit_shift. */
	uint64_t rx_align_en_ovrd             : 1;  /**< Override enable for rx_align_en. */
	uint64_t rx_align_en                  : 1;  /**< Override value for rx_align_en. */
	uint64_t rx_data_en_ovrd              : 1;  /**< Override enable for rx_data_en. */
	uint64_t rx_data_en                   : 1;  /**< Override value for rx_data_en. */
	uint64_t rx_pll_en_ovrd               : 1;  /**< Override enable for rx_pll_en. */
	uint64_t rx_pll_en                    : 1;  /**< Override value for rx_pll_en. */
	uint64_t rx_invert_ovrd               : 1;  /**< Override enable for rx_invert. */
	uint64_t rx_invert                    : 1;  /**< Override value for rx_invert. */
#else
	uint64_t rx_invert                    : 1;
	uint64_t rx_invert_ovrd               : 1;
	uint64_t rx_pll_en                    : 1;
	uint64_t rx_pll_en_ovrd               : 1;
	uint64_t rx_data_en                   : 1;
	uint64_t rx_data_en_ovrd              : 1;
	uint64_t rx_align_en                  : 1;
	uint64_t rx_align_en_ovrd             : 1;
	uint64_t rx_bit_shift_en              : 1;
	uint64_t rx_bit_shift_ovrd            : 1;
	uint64_t rx_term_en                   : 1;
	uint64_t rx_term_en_ovrd              : 1;
	uint64_t rx_los_en                    : 1;
	uint64_t rx_los_en_ovrd               : 1;
	uint64_t reserved_14_63               : 50;
#endif
	} s;
	struct cvmx_gserx_phyx_lane1_rx_ovrd_in_lo_s cn70xx;
	struct cvmx_gserx_phyx_lane1_rx_ovrd_in_lo_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane1_rx_ovrd_in_lo cvmx_gserx_phyx_lane1_rx_ovrd_in_lo_t;

/**
 * cvmx_gser#_phy#_lane1_tx_lbert_ctl
 *
 * PHY LANE1 RX LBERT Control.
 *
 */
union cvmx_gserx_phyx_lane1_tx_lbert_ctl {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane1_tx_lbert_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t pat0                         : 10; /**< 10-bit pattern for modes that use this field.  Ignored for
                                                         other modes. */
	uint64_t trig_err                     : 1;  /**< Single shot inversion of the LSB of the current symbol.
                                                         Any write of 1 to this bit will insert an error. */
	uint64_t mode                         : 4;  /**< Pattern to generate.  When changing modes, the field must be set to zero
                                                          first.
                                                         - 0: disabled
                                                         - 1: lfsr31     X^31 + X^28 + 1
                                                         - 2: lfsr23     X^23 + X^18 + 1
                                                         - 3: lfsr15     X^15 + X^14 + 1
                                                         - 4: lfsr7      X^7 + X^6 + 1
                                                         - 5: Fixed word (PAT0)
                                                         - 6: DC-balanced word (PAT0, ~PAT0)
                                                         - 7: Word pattern (20-bit)
                                                          - 15-8: Reserved. */
#else
	uint64_t mode                         : 4;
	uint64_t trig_err                     : 1;
	uint64_t pat0                         : 10;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_gserx_phyx_lane1_tx_lbert_ctl_s cn70xx;
	struct cvmx_gserx_phyx_lane1_tx_lbert_ctl_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane1_tx_lbert_ctl cvmx_gserx_phyx_lane1_tx_lbert_ctl_t;

/**
 * cvmx_gser#_phy#_lane1_tx_ovrd_in_hi
 *
 * PHY LANE1 TX Override Input High
 *
 */
union cvmx_gserx_phyx_lane1_tx_ovrd_in_hi {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane1_tx_ovrd_in_hi_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_10_63               : 54;
	uint64_t tx_vboost_en_ovrd            : 1;  /**< Override enable for tx_vboost_en. */
	uint64_t tx_vboost_en                 : 1;  /**< Override value for tx_vboost_en. */
	uint64_t tx_reset_ovrd                : 1;  /**< Override enable for tx_reset. */
	uint64_t tx_reset                     : 1;  /**< Override value for tx_reset. */
	uint64_t tx_nyquist_data              : 1;  /**< Overrides incoming data to nyquist. */
	uint64_t tx_clk_out_en_ovrd           : 1;  /**< Override enable for tx_clk_out_en. */
	uint64_t tx_clk_out_en                : 1;  /**< Override value for tx_clk_out_en. */
	uint64_t tx_rate_ovrd                 : 1;  /**< Override enable for tx lane rate. */
	uint64_t tx_rate                      : 2;  /**< Override value for tx_rate. */
#else
	uint64_t tx_rate                      : 2;
	uint64_t tx_rate_ovrd                 : 1;
	uint64_t tx_clk_out_en                : 1;
	uint64_t tx_clk_out_en_ovrd           : 1;
	uint64_t tx_nyquist_data              : 1;
	uint64_t tx_reset                     : 1;
	uint64_t tx_reset_ovrd                : 1;
	uint64_t tx_vboost_en                 : 1;
	uint64_t tx_vboost_en_ovrd            : 1;
	uint64_t reserved_10_63               : 54;
#endif
	} s;
	struct cvmx_gserx_phyx_lane1_tx_ovrd_in_hi_s cn70xx;
	struct cvmx_gserx_phyx_lane1_tx_ovrd_in_hi_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane1_tx_ovrd_in_hi cvmx_gserx_phyx_lane1_tx_ovrd_in_hi_t;

/**
 * cvmx_gser#_phy#_lane1_tx_ovrd_in_lo
 *
 * PHY LANE1 TX Override Input Low
 *
 */
union cvmx_gserx_phyx_lane1_tx_ovrd_in_lo {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane1_tx_ovrd_in_lo_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_12_63               : 52;
	uint64_t tx_beacon_en_ovrd            : 1;  /**< Override enable for tx_beacon_en. */
	uint64_t tx_beacon_en                 : 1;  /**< Override value for tx_beacon_en. */
	uint64_t tx_cm_en_ovrd                : 1;  /**< Override enable for tx_cm_en. */
	uint64_t tx_cm_en                     : 1;  /**< Override value for tx_cm_en. */
	uint64_t tx_en_ovrd                   : 1;  /**< Override enable for tx_en. */
	uint64_t tx_en                        : 1;  /**< Override value for tx_en. */
	uint64_t tx_data_en_ovrd              : 1;  /**< Override enable for tx_data_en. */
	uint64_t tx_data_en                   : 1;  /**< Override value for tx_data_en. */
	uint64_t tx_invert_ovrd               : 1;  /**< Override enable for tx_invert. */
	uint64_t tx_invert                    : 1;  /**< Override value for tx_invert. */
	uint64_t loopbk_en_ovrd               : 1;  /**< Override enable for loopbk_en. */
	uint64_t loopbk_en                    : 1;  /**< Override value for loopbk_en. */
#else
	uint64_t loopbk_en                    : 1;
	uint64_t loopbk_en_ovrd               : 1;
	uint64_t tx_invert                    : 1;
	uint64_t tx_invert_ovrd               : 1;
	uint64_t tx_data_en                   : 1;
	uint64_t tx_data_en_ovrd              : 1;
	uint64_t tx_en                        : 1;
	uint64_t tx_en_ovrd                   : 1;
	uint64_t tx_cm_en                     : 1;
	uint64_t tx_cm_en_ovrd                : 1;
	uint64_t tx_beacon_en                 : 1;
	uint64_t tx_beacon_en_ovrd            : 1;
	uint64_t reserved_12_63               : 52;
#endif
	} s;
	struct cvmx_gserx_phyx_lane1_tx_ovrd_in_lo_s cn70xx;
	struct cvmx_gserx_phyx_lane1_tx_ovrd_in_lo_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane1_tx_ovrd_in_lo cvmx_gserx_phyx_lane1_tx_ovrd_in_lo_t;

/**
 * cvmx_gser#_phy#_lane1_txdebug
 *
 * PHY LANE1 TX DEBUG.
 *
 */
union cvmx_gserx_phyx_lane1_txdebug {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane1_txdebug_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_12_63               : 52;
	uint64_t rxdet_meas_time              : 8;  /**< Time to wait for rxdet measurement. */
	uint64_t detrx_always                 : 1;  /**< Always signals 1 for rx_detect ignoring analog. */
	uint64_t dtb_sel                      : 3;  /**< Selects data to drive on the DTB. */
#else
	uint64_t dtb_sel                      : 3;
	uint64_t detrx_always                 : 1;
	uint64_t rxdet_meas_time              : 8;
	uint64_t reserved_12_63               : 52;
#endif
	} s;
	struct cvmx_gserx_phyx_lane1_txdebug_s cn70xx;
	struct cvmx_gserx_phyx_lane1_txdebug_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane1_txdebug cvmx_gserx_phyx_lane1_txdebug_t;

/**
 * cvmx_gser#_phy#_ovrd_in_lo
 *
 * PHY Overide Input Low Register.
 *
 */
union cvmx_gserx_phyx_ovrd_in_lo {
	uint64_t u64;
	struct cvmx_gserx_phyx_ovrd_in_lo_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t res_ack_in_ovrd              : 1;  /**< Overide enable for RES_ACK_IN input.
                                                         It is not expected SW will need to set this bit. */
	uint64_t res_ack_in                   : 1;  /**< Overide value for RES_ACK_IN input.
                                                         It is not expected SW will need to set this bit. */
	uint64_t res_req_in_ovrd              : 1;  /**< Overide enable for RES_REW_IN input.
                                                         It is not expected SW will need to set this bit. */
	uint64_t res_req_in                   : 1;  /**< Overide value for RES_REQ_IN input.
                                                         It is not expected SW will need to set this bit. */
	uint64_t rtune_req_ovrd               : 1;  /**< Overide enable for RTUNE_REQ input.
                                                         It is not expected SW will need to set this bit. */
	uint64_t rtune_req                    : 1;  /**< Overide value for RTUNE_REQ input.
                                                         It is not expected SW will need to set this bit. */
	uint64_t mpll_multiplier_ovrd         : 1;  /**< Overide enable for MPLL_MULTIPLIER.
                                                         It is not expected SW will need to set this bit. */
	uint64_t mpll_multiplier              : 7;  /**< Overide value for MPLL_MULTIPLIER inputs.
                                                         It is not expected SW will need to set these bits. */
	uint64_t mpll_en_ovrd                 : 1;  /**< Overide enable for MPLL_EN input.
                                                         For EP Mode PEMs, SW should set this bit after reset. */
	uint64_t mpll_en                      : 1;  /**< Overide value for MPLL_EN input.
                                                         For EP Mode PEMs, SW should set this bit after reset. */
#else
	uint64_t mpll_en                      : 1;
	uint64_t mpll_en_ovrd                 : 1;
	uint64_t mpll_multiplier              : 7;
	uint64_t mpll_multiplier_ovrd         : 1;
	uint64_t rtune_req                    : 1;
	uint64_t rtune_req_ovrd               : 1;
	uint64_t res_req_in                   : 1;
	uint64_t res_req_in_ovrd              : 1;
	uint64_t res_ack_in                   : 1;
	uint64_t res_ack_in_ovrd              : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_phyx_ovrd_in_lo_s   cn70xx;
	struct cvmx_gserx_phyx_ovrd_in_lo_s   cn70xxp1;
};
typedef union cvmx_gserx_phyx_ovrd_in_lo cvmx_gserx_phyx_ovrd_in_lo_t;

/**
 * cvmx_gser#_phy_ctl
 *
 * This register contains general PHY/PLL control of the RAW PCS.
 * These registers are reset by hardware only during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_phy_ctl {
	uint64_t u64;
	struct cvmx_gserx_phy_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_2_63                : 62;
	uint64_t phy_reset                    : 1;  /**< When asserted, the PHY is held in reset. This bit is initialized as follows:
                                                         0 = (not reset) = Bootable PCIe, or CCPI when GSER(8..13)_SPD[SPD] comes up in a bootable
                                                         mode.
                                                         1 = (reset) =  Non-bootable PCIe, BGX/ILK, or CCPI when GSER(8..13)_SPD[SPD] comes up in
                                                         SW_MODE. */
	uint64_t phy_pd                       : 1;  /**< When asserted, the PHY is powered down. */
#else
	uint64_t phy_pd                       : 1;
	uint64_t phy_reset                    : 1;
	uint64_t reserved_2_63                : 62;
#endif
	} s;
	struct cvmx_gserx_phy_ctl_s           cn78xx;
};
typedef union cvmx_gserx_phy_ctl cvmx_gserx_phy_ctl_t;

/**
 * cvmx_gser#_pipe_lpbk
 */
union cvmx_gserx_pipe_lpbk {
	uint64_t u64;
	struct cvmx_gserx_pipe_lpbk_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t pcie_lpbk                    : 1;  /**< For links that are in PCIE mode, places the PHY in serial loopback mode, where the
                                                         QLMn_TXN/QLMn_TXP data are looped back to the QLMn_RXN/QLMn_RXP.
                                                         This register has no meaning for links that don't support PCIe i.e. GSER(5..13). */
#else
	uint64_t pcie_lpbk                    : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_pipe_lpbk_s         cn78xx;
};
typedef union cvmx_gserx_pipe_lpbk cvmx_gserx_pipe_lpbk_t;

/**
 * cvmx_gser#_pll_p#_mode_0
 *
 * These are the RAW PCS PLL global settings mode 0 registers. There is one register per GSER per
 * GSER_LMODE_E value (0..11). Only one entry is used at any given time in a given GSER - the one
 * selected by the corresponding GSER()_LANE_MODE[LMODE].
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during subsequent chip warm or
 * soft resets.
 */
union cvmx_gserx_pll_px_mode_0 {
	uint64_t u64;
	struct cvmx_gserx_pll_px_mode_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t pll_icp                      : 4;  /**< PLL charge pump enable.
                                                         Recommended settings, which are based on the reference clock speed:
                                                         <pre>
                                                                  100MHz 125MHz 156.25MHz
                                                         1.25G:    0x1    0x1    0x1
                                                         2.5G:     0x4    0x3    0x3
                                                         3.125G:   NS     0x1    0x1
                                                         5.0G:     0x4    0x3    0x3
                                                         6.25G:    NS     0x1    0x1
                                                         8.0G:     0x3    0x2    NS
                                                         10.3125G: NS     NS     0x1
                                                         </pre>
                                                         A 'NS' indicates that the rate is not supported at the specified reference clock. */
	uint64_t pll_rloop                    : 3;  /**< Loop resistor tuning.
                                                         Recommended settings:
                                                         _ 1.25G:    0x3
                                                         _ 2.5G:     0x3
                                                         _ 3.125G:   0x3
                                                         _ 5.0G:     0x3
                                                         _ 6.25G:    0x3
                                                         _ 8.0G:     0x5
                                                         _ 10.3125G: 0x5 */
	uint64_t pll_pcs_div                  : 9;  /**< The divider that generates PCS_MAC_TX_CLK. The frequency of the clock is (pll_frequency /
                                                         PLL_PCS_DIV).
                                                         Recommended settings:
                                                         _ 1.25G:    0x28
                                                         _ 2.5G:     0x5
                                                         _ 3.125G:   0x14
                                                         _ 5.0G:     0xA
                                                         _ 6.25G:    0xA
                                                         _ 8.0G:     0xA
                                                         _ 10.3125G: 0xA */
#else
	uint64_t pll_pcs_div                  : 9;
	uint64_t pll_rloop                    : 3;
	uint64_t pll_icp                      : 4;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_pll_px_mode_0_s     cn78xx;
};
typedef union cvmx_gserx_pll_px_mode_0 cvmx_gserx_pll_px_mode_0_t;

/**
 * cvmx_gser#_pll_p#_mode_1
 *
 * These are the RAW PCS PLL global settings mode 1 registers. There is one register per GSER per
 * GSER_LMODE_E value (0..11). Only one entry is used at any given time in a given GSER - the one
 * selected by the corresponding GSER()_LANE_MODE[LMODE].
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in this register do not change during subsequent chip warm or
 * soft resets.
 */
union cvmx_gserx_pll_px_mode_1 {
	uint64_t u64;
	struct cvmx_gserx_pll_px_mode_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_14_63               : 50;
	uint64_t pll_16p5en                   : 1;  /**< Enable for the DIV 16.5 divided down clock.
                                                         Recommended settings, based on the reference clock speed:
                                                         <pre>
                                                                  100MHz 125MHz 156.25MHz
                                                         1.25G:    0x1    0x1     0x1
                                                         2.5G:     0x0    0x0     0x0
                                                         3.125G:   NS     0x1     0x1
                                                         5.0G:     0x0    0x0     0x0
                                                         6.25G:    NS     0x0     0x0
                                                         8.0G:     0x0    0x0     NS
                                                         10.3125G: NS     NS      0x1
                                                         </pre>
                                                         A 'NS' indicates that the rate is not supported at the specified reference clock. */
	uint64_t pll_cpadj                    : 2;  /**< PLL charge adjust.
                                                         Recommended settings, based on the reference clock speed:
                                                         <pre>
                                                                   100MHz 125MHz 156.25MHz
                                                         1.25G:     0x2     0x2    0x3
                                                         2.5G:      0x2     0x1    0x2
                                                         3.125G:    NS      0x2    0x2
                                                         5.0G:      0x2     0x1    0x2
                                                         6.25G:     NS      0x2    0x2
                                                         8.0G:      0x2     0x1    NS
                                                         10.3125G:  NS      NS     0x2
                                                         </pre>
                                                         A 'NS' indicates that the rate is not supported at the specified reference clock. */
	uint64_t pll_pcie3en                  : 1;  /**< Enable PCIE3 mode. Recommended settings:
                                                         0 = Any rate other than 8 Gbaud.
                                                         1 = Rate is equal to 8 Gbaud. */
	uint64_t pll_opr                      : 1;  /**< PLL op range:
                                                         0 = Use Ring Oscillator VCO. Recommended for rates 6.25 Gbaud and lower.
                                                         1 = Use LC-tank VCO. Recommended for rates 8 Gbaud and higher. */
	uint64_t pll_div                      : 9;  /**< PLL divider in feedback path which sets the PLL frequency.
                                                         Recommended settings:
                                                         <pre>
                                                                  100MHz 125MHz 156.25MHz
                                                         1.25G:    0x19   0x14    0x10
                                                         2.5G:     0x19   0x14    0x10
                                                         3.125G:   NS     0x19    0x14
                                                         5.0G:     0x19   0x14    0x10
                                                         6.25G:    NS     0x19    0x14
                                                         8.0G:     0x28   0x20    NS
                                                         10.3125G: NS     NS      0x21
                                                         </pre>
                                                         A 'NS' indicates that the rate is not supported at the specified reference clock. */
#else
	uint64_t pll_div                      : 9;
	uint64_t pll_opr                      : 1;
	uint64_t pll_pcie3en                  : 1;
	uint64_t pll_cpadj                    : 2;
	uint64_t pll_16p5en                   : 1;
	uint64_t reserved_14_63               : 50;
#endif
	} s;
	struct cvmx_gserx_pll_px_mode_1_s     cn78xx;
};
typedef union cvmx_gserx_pll_px_mode_1 cvmx_gserx_pll_px_mode_1_t;

/**
 * cvmx_gser#_pll_stat
 */
union cvmx_gserx_pll_stat {
	uint64_t u64;
	struct cvmx_gserx_pll_stat_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t pll_lock                     : 1;  /**< When set, indicates that the PHY PLL is locked. */
#else
	uint64_t pll_lock                     : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_pll_stat_s          cn78xx;
};
typedef union cvmx_gserx_pll_stat cvmx_gserx_pll_stat_t;

/**
 * cvmx_gser#_qlm_stat
 */
union cvmx_gserx_qlm_stat {
	uint64_t u64;
	struct cvmx_gserx_qlm_stat_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_2_63                : 62;
	uint64_t rst_rdy                      : 1;  /**< When asserted, the QLM is configured and the PLLs are stable. The GSER
                                                         is ready to accept TX traffic from the MAC. */
	uint64_t dcok                         : 1;  /**< When asserted, there is a PLL reference clock indicating there is power to the QLM. */
#else
	uint64_t dcok                         : 1;
	uint64_t rst_rdy                      : 1;
	uint64_t reserved_2_63                : 62;
#endif
	} s;
	struct cvmx_gserx_qlm_stat_s          cn78xx;
};
typedef union cvmx_gserx_qlm_stat cvmx_gserx_qlm_stat_t;

/**
 * cvmx_gser#_rdet_time
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_rdet_time {
	uint64_t u64;
	struct cvmx_gserx_rdet_time_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t rdet_time_3                  : 4;  /**< Determines the time allocated for disabling the RX detect
                                                         circuit, and returning to common mode. */
	uint64_t rdet_time_2                  : 4;  /**< Determines the time allocated for the RX detect circuit to
                                                         detect a receiver. */
	uint64_t rdet_time_1                  : 8;  /**< Determines the time allocated for enabling the RX detect circuit. */
#else
	uint64_t rdet_time_1                  : 8;
	uint64_t rdet_time_2                  : 4;
	uint64_t rdet_time_3                  : 4;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_rdet_time_s         cn78xx;
};
typedef union cvmx_gserx_rdet_time cvmx_gserx_rdet_time_t;

/**
 * cvmx_gser#_refclk_sel
 *
 * This register selects the reference clock.
 * These registers are reset by hardware only during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_refclk_sel {
	uint64_t u64;
	struct cvmx_gserx_refclk_sel_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_3_63                : 61;
	uint64_t pcie_refclk125               : 1;  /**< For bootable PCIe links, this is loaded with
                                                         PCIE0/2_REFCLK_125 at cold reset and indicates a 125 MHz reference clock when set. For
                                                         non-bootable PCIe links, this bit is set to zero at cold reset and indicates a 100 MHz
                                                         reference clock. It is not used for non-PCIe links. */
	uint64_t com_clk_sel                  : 1;  /**< When set, the reference clock is sourced from the external clock mux. For bootable PCIe
                                                         links, this bit is loaded with the PCIEn_COM0_CLK_EN pin at cold reset. */
	uint64_t use_com1                     : 1;  /**< For non-CCPI links, this bit controls the external mux select. When set, QLMC_REF_CLK1_N/P
                                                         are selected as the reference clock. When clear, QLMC_REF_CLK0_N/P are selected as the
                                                         reference clock. */
#else
	uint64_t use_com1                     : 1;
	uint64_t com_clk_sel                  : 1;
	uint64_t pcie_refclk125               : 1;
	uint64_t reserved_3_63                : 61;
#endif
	} s;
	struct cvmx_gserx_refclk_sel_s        cn78xx;
};
typedef union cvmx_gserx_refclk_sel cvmx_gserx_refclk_sel_t;

/**
 * cvmx_gser#_rx_coast
 *
 * These registers are reset by hardware only during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_rx_coast {
	uint64_t u64;
	struct cvmx_gserx_rx_coast_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t coast                        : 4;  /**< For links that are not in PCIE mode (including all CCPI links), control signals to freeze
                                                         the frequency of the per lane CDR in the PHY. The COAST signals are only valid in P0
                                                         state, come up asserted and are deasserted in hardware after detecting the electrical idle
                                                         exit (GSER()_RX_EIE_DETSTS[EIESTS]). Once the COAST signal deasserts, the CDR is
                                                         allowed to lock. In BGX mode, the BGX MAC can also control the COAST inputs to the PHY to
                                                         allow Auto-Negotiation for backplane Ethernet. For diagnostic use only.
                                                         <3>: Lane 3.
                                                         <2>: Lane 2.
                                                         <1>: Lane 1.
                                                         <0>: Lane 0. */
#else
	uint64_t coast                        : 4;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_rx_coast_s          cn78xx;
};
typedef union cvmx_gserx_rx_coast cvmx_gserx_rx_coast_t;

/**
 * cvmx_gser#_rx_eie_deten
 *
 * These registers are reset by hardware only during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_rx_eie_deten {
	uint64_t u64;
	struct cvmx_gserx_rx_eie_deten_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t eiede                        : 4;  /**< For links that are not in PCIE mode (including all CCPI links), these bits enable per lane
                                                         electrical idle exit (EIE) detection. When EIE is detected,
                                                         GSER()_RX_EIE_DETSTS[EIELTCH] is asserted. EIEDE defaults to the enabled state. Once
                                                         EIE has been detected, EIEDE must be disabled, and then enabled again to perform another
                                                         EIE detection.
                                                         <3>: Lane 3.
                                                         <2>: Lane 2.
                                                         <1>: Lane 1.
                                                         <0>: Lane 0. */
#else
	uint64_t eiede                        : 4;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_rx_eie_deten_s      cn78xx;
};
typedef union cvmx_gserx_rx_eie_deten cvmx_gserx_rx_eie_deten_t;

/**
 * cvmx_gser#_rx_eie_detsts
 */
union cvmx_gserx_rx_eie_detsts {
	uint64_t u64;
	struct cvmx_gserx_rx_eie_detsts_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_12_63               : 52;
	uint64_t cdrlock                      : 4;  /**< After an electrical idle exit condition (EIE) has been detected, the CDR needs 10000 UI to
                                                         lock. During this time, there may be RX bit errors. These bits will set when the CDR is
                                                         guaranteed to be locked. Note that link training can't start until the lane CDRLOCK is
                                                         set. Software can use CDRLOCK to determine when to expect error free RX data.
                                                         <11>: Lane 3.
                                                         <10>: Lane 2.
                                                         <9>: Lane 1.
                                                         <8>: Lane 0. */
	uint64_t eiests                       : 4;  /**< When electrical idle exit detection is enabled (GSER()_RX_EIE_DETEN[EIEDE] is
                                                         asserted), indicates that an electrical idle exit condition (EIE) was detected. For higher
                                                         data rates, the received data needs to have sufficient low frequency content (for example,
                                                         idle symbols) for data transitions to be detected and for EIESTS to stay set accordingly.
                                                         Under most conditions, EIESTS
                                                         will stay asserted until GSER()_RX_EIE_DETEN[EIEDE] is deasserted.
                                                         <7>: Lane 3.
                                                         <6>: Lane 2.
                                                         <5>: Lane 1.
                                                         <4>: Lane 0. */
	uint64_t eieltch                      : 4;  /**< When electrical idle exit detection is enabled (GSER()_RX_EIE_DETEN[EIEDE] is
                                                         asserted), indicates that an electrical idle exit condition (EIE) was detected. Once an
                                                         EIE condition has been detected, the per-lane EIELTCH will stay set until
                                                         GSER()_RX_EIE_DETEN[EIEDE] is deasserted. Note that there may be RX bit errors until
                                                         CDRLOCK
                                                         is set.
                                                         <3>: Lane 3.
                                                         <2>: Lane 2.
                                                         <1>: Lane 1.
                                                         <0>: Lane 0. */
#else
	uint64_t eieltch                      : 4;
	uint64_t eiests                       : 4;
	uint64_t cdrlock                      : 4;
	uint64_t reserved_12_63               : 52;
#endif
	} s;
	struct cvmx_gserx_rx_eie_detsts_s     cn78xx;
};
typedef union cvmx_gserx_rx_eie_detsts cvmx_gserx_rx_eie_detsts_t;

/**
 * cvmx_gser#_rx_eie_filter
 */
union cvmx_gserx_rx_eie_filter {
	uint64_t u64;
	struct cvmx_gserx_rx_eie_filter_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t eii_filt                     : 16; /**< The GSER uses electrical idle inference to determine when a RX lane has reentered
                                                         electrical idle (EI). The PHY electrical idle exit detection supports a minimum pulse
                                                         width of 400ps, therefore configurations that run faster than 2.5G can indicate EI when
                                                         the serial lines are still driven. For rates faster than 2.5G, it takes 16K * 8 UI of
                                                         consecutive deasserted GSER()_RX_EIE_DETSTS[EIESTS] for the GSER to infer EI. In the
                                                         event of electrical idle inference, the following happens:
                                                         * GSER()_RX_EIE_DETSTS[CDRLOCK]<lane> is zeroed.
                                                         * GSER()_RX_EIE_DETSTS[EIELTCH]<lane> is zeroed.
                                                         * GSER()_RX_EIE_DETSTS[EIESTS]<lane> is zeroed.
                                                         * GSER()_RX_COAST[COAST]<lane> is asserted to prevent the CDR from trying to lock on
                                                         the incoming data stream.
                                                         * GSER()_RX_EIE_DETEN[EIEDE]<lane> deasserts for a short period of time, and then is
                                                         asserted to begin looking for the Electrical idle Exit condition.
                                                         Writing this register to a non-zero value causes the electrical idle inference to use the
                                                         EII_FILT count instead of the default settings. Each EII_FILT count represents 20 ns of
                                                         incremental EI inference time.
                                                         It is not expected that software will need to use the Electrical Idle Inference logic. */
#else
	uint64_t eii_filt                     : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_rx_eie_filter_s     cn78xx;
};
typedef union cvmx_gserx_rx_eie_filter cvmx_gserx_rx_eie_filter_t;

/**
 * cvmx_gser#_rx_polarity
 *
 * These registers are reset by hardware only during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_rx_polarity {
	uint64_t u64;
	struct cvmx_gserx_rx_polarity_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t rx_inv                       : 4;  /**< For links that are not in PCIE mode (including all CCPI links), control signal to invert
                                                         the polarity of received data. When asserted, the polarity of the received data is
                                                         inverted.
                                                         <3>: Lane 3.
                                                         <2>: Lane 2.
                                                         <1>: Lane 1.
                                                         <0>: Lane 0. */
#else
	uint64_t rx_inv                       : 4;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_rx_polarity_s       cn78xx;
};
typedef union cvmx_gserx_rx_polarity cvmx_gserx_rx_polarity_t;

/**
 * cvmx_gser#_rx_pwr_ctrl_p1
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_rx_pwr_ctrl_p1 {
	uint64_t u64;
	struct cvmx_gserx_rx_pwr_ctrl_p1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_14_63               : 50;
	uint64_t p1_rx_resetn                 : 1;  /**< Place the receiver in reset (active low). */
	uint64_t pq_rx_allow_pll_pd           : 1;  /**< When asserted, permit PLL powerdown (PLL is powered
                                                         down if all other factors permit). */
	uint64_t pq_rx_pcs_reset              : 1;  /**< When asserted, the RX power state machine puts the raw PCS RX logic
                                                         in reset state to save power. */
	uint64_t p1_rx_agc_en                 : 1;  /**< AGC enable. */
	uint64_t p1_rx_dfe_en                 : 1;  /**< DFE enable. */
	uint64_t p1_rx_cdr_en                 : 1;  /**< CDR enable. */
	uint64_t p1_rx_cdr_coast              : 1;  /**< CDR coast; freezes the frequency of the CDR. */
	uint64_t p1_rx_cdr_clr                : 1;  /**< CDR clear; clears the frequency of the CDR. */
	uint64_t p1_rx_subblk_pd              : 5;  /**< RX sub-block powerdown controls to RX:
                                                         <4> = CTLE.
                                                         <3> = Reserved.
                                                         <2> = Lane DLL.
                                                         <1> = DFE/samplers.
                                                         <0> = Termination. */
	uint64_t p1_rx_chpd                   : 1;  /**< RX lane powerdown. */
#else
	uint64_t p1_rx_chpd                   : 1;
	uint64_t p1_rx_subblk_pd              : 5;
	uint64_t p1_rx_cdr_clr                : 1;
	uint64_t p1_rx_cdr_coast              : 1;
	uint64_t p1_rx_cdr_en                 : 1;
	uint64_t p1_rx_dfe_en                 : 1;
	uint64_t p1_rx_agc_en                 : 1;
	uint64_t pq_rx_pcs_reset              : 1;
	uint64_t pq_rx_allow_pll_pd           : 1;
	uint64_t p1_rx_resetn                 : 1;
	uint64_t reserved_14_63               : 50;
#endif
	} s;
	struct cvmx_gserx_rx_pwr_ctrl_p1_s    cn78xx;
};
typedef union cvmx_gserx_rx_pwr_ctrl_p1 cvmx_gserx_rx_pwr_ctrl_p1_t;

/**
 * cvmx_gser#_sata_cfg
 *
 * SATA Config Enable.
 *
 */
union cvmx_gserx_sata_cfg {
	uint64_t u64;
	struct cvmx_gserx_sata_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t sata_en                      : 1;  /**< When set, DLM2 is configured for SATA (as opposed to PCIE). */
#else
	uint64_t sata_en                      : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_sata_cfg_s          cn70xx;
	struct cvmx_gserx_sata_cfg_s          cn70xxp1;
};
typedef union cvmx_gserx_sata_cfg cvmx_gserx_sata_cfg_t;

/**
 * cvmx_gser#_sata_lane_rst
 *
 * Lane Reset Control.
 *
 */
union cvmx_gserx_sata_lane_rst {
	uint64_t u64;
	struct cvmx_gserx_sata_lane_rst_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_2_63                : 62;
	uint64_t l1_rst                       : 1;  /**< Independent reset for Lane 1. */
	uint64_t l0_rst                       : 1;  /**< Independent reset for Lane 0. */
#else
	uint64_t l0_rst                       : 1;
	uint64_t l1_rst                       : 1;
	uint64_t reserved_2_63                : 62;
#endif
	} s;
	struct cvmx_gserx_sata_lane_rst_s     cn70xx;
	struct cvmx_gserx_sata_lane_rst_s     cn70xxp1;
};
typedef union cvmx_gserx_sata_lane_rst cvmx_gserx_sata_lane_rst_t;

/**
 * cvmx_gser#_sata_p0_tx_amp_gen#
 *
 * SATA Lane 0 Tx Launch Amplitude at Gen 1,2 and 3 Speeds.
 *
 */
union cvmx_gserx_sata_p0_tx_amp_genx {
	uint64_t u64;
	struct cvmx_gserx_sata_p0_tx_amp_genx_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_7_63                : 57;
	uint64_t tx_amp_gen                   : 7;  /**< This status value sets the Tx driver launch amplitude in the
                                                         case where the PHY is running at the Gen1, Gen2, and Gen3
                                                         rates. Used for tuning at the board level for Rx eye compliance. */
#else
	uint64_t tx_amp_gen                   : 7;
	uint64_t reserved_7_63                : 57;
#endif
	} s;
	struct cvmx_gserx_sata_p0_tx_amp_genx_s cn70xx;
	struct cvmx_gserx_sata_p0_tx_amp_genx_s cn70xxp1;
};
typedef union cvmx_gserx_sata_p0_tx_amp_genx cvmx_gserx_sata_p0_tx_amp_genx_t;

/**
 * cvmx_gser#_sata_p0_tx_preemph_gen#
 *
 * SATA Lane 0 Tx Pre-emphasis at Gen 1,2 and 3 Speeds.
 *
 */
union cvmx_gserx_sata_p0_tx_preemph_genx {
	uint64_t u64;
	struct cvmx_gserx_sata_p0_tx_preemph_genx_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_7_63                : 57;
	uint64_t tx_preemph                   : 7;  /**< This static value sets the Tx driver de-emphasis value in the
                                                         case where the PHY is running at the Gen1, Gen2, and Gen3
                                                         rates. Used for tuning at the board level for Rx eye compliance. */
#else
	uint64_t tx_preemph                   : 7;
	uint64_t reserved_7_63                : 57;
#endif
	} s;
	struct cvmx_gserx_sata_p0_tx_preemph_genx_s cn70xx;
	struct cvmx_gserx_sata_p0_tx_preemph_genx_s cn70xxp1;
};
typedef union cvmx_gserx_sata_p0_tx_preemph_genx cvmx_gserx_sata_p0_tx_preemph_genx_t;

/**
 * cvmx_gser#_sata_p1_tx_amp_gen#
 *
 * SATA Lane 1 Tx Launch Amplitude at Gen 1,2 and 3 Speeds.
 *
 */
union cvmx_gserx_sata_p1_tx_amp_genx {
	uint64_t u64;
	struct cvmx_gserx_sata_p1_tx_amp_genx_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_7_63                : 57;
	uint64_t tx_amp_gen                   : 7;  /**< This status value sets the Tx driver launch amplitude in the
                                                         case where the PHY is running at the Gen1, Gen2, and Gen3
                                                         rates. Used for tuning at the board level for Rx eye compliance. */
#else
	uint64_t tx_amp_gen                   : 7;
	uint64_t reserved_7_63                : 57;
#endif
	} s;
	struct cvmx_gserx_sata_p1_tx_amp_genx_s cn70xx;
	struct cvmx_gserx_sata_p1_tx_amp_genx_s cn70xxp1;
};
typedef union cvmx_gserx_sata_p1_tx_amp_genx cvmx_gserx_sata_p1_tx_amp_genx_t;

/**
 * cvmx_gser#_sata_p1_tx_preemph_gen#
 *
 * SATA Lane 0 Tx Pre-emphasis at Gen 1,2 and 3 Speeds.
 *
 */
union cvmx_gserx_sata_p1_tx_preemph_genx {
	uint64_t u64;
	struct cvmx_gserx_sata_p1_tx_preemph_genx_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_7_63                : 57;
	uint64_t tx_preemph                   : 7;  /**< This static value sets the Tx driver de-emphasis value in the
                                                         case where the PHY is running at the Gen1, Gen2, and Gen3
                                                         rates. Used for tuning at the board level for Rx eye compliance. */
#else
	uint64_t tx_preemph                   : 7;
	uint64_t reserved_7_63                : 57;
#endif
	} s;
	struct cvmx_gserx_sata_p1_tx_preemph_genx_s cn70xx;
	struct cvmx_gserx_sata_p1_tx_preemph_genx_s cn70xxp1;
};
typedef union cvmx_gserx_sata_p1_tx_preemph_genx cvmx_gserx_sata_p1_tx_preemph_genx_t;

/**
 * cvmx_gser#_sata_ref_ssp_en
 *
 * SATA Reference Clock Enable for the PHY.
 *
 */
union cvmx_gserx_sata_ref_ssp_en {
	uint64_t u64;
	struct cvmx_gserx_sata_ref_ssp_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t ref_ssp_en                   : 1;  /**< Reference Clock Enable for the PHY. */
#else
	uint64_t ref_ssp_en                   : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_sata_ref_ssp_en_s   cn70xx;
	struct cvmx_gserx_sata_ref_ssp_en_s   cn70xxp1;
};
typedef union cvmx_gserx_sata_ref_ssp_en cvmx_gserx_sata_ref_ssp_en_t;

/**
 * cvmx_gser#_sata_rx_invert
 *
 * SATA Receive Polarity Inversion.
 *
 */
union cvmx_gserx_sata_rx_invert {
	uint64_t u64;
	struct cvmx_gserx_sata_rx_invert_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_2_63                : 62;
	uint64_t rx1_invert                   : 1;  /**< Instructs the PHY to perform a polarity inversion on the Lane 1
                                                          received data.
                                                         - 0: PHY does not performs polarity inversion
                                                         - 1: PHY performs polarity inversion */
	uint64_t rx0_invert                   : 1;  /**< 0: PHY does not performs polarity inversion
                                                         - 1: PHY performs polarity inversion */
#else
	uint64_t rx0_invert                   : 1;
	uint64_t rx1_invert                   : 1;
	uint64_t reserved_2_63                : 62;
#endif
	} s;
	struct cvmx_gserx_sata_rx_invert_s    cn70xx;
	struct cvmx_gserx_sata_rx_invert_s    cn70xxp1;
};
typedef union cvmx_gserx_sata_rx_invert cvmx_gserx_sata_rx_invert_t;

/**
 * cvmx_gser#_sata_ssc_clk_sel
 *
 * SATA Spread Spectrum Reference Clock Shifting.
 *
 */
union cvmx_gserx_sata_ssc_clk_sel {
	uint64_t u64;
	struct cvmx_gserx_sata_ssc_clk_sel_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t ssc_clk_sel                  : 9;  /**< Enables non-standard oscillator frequencies to generate targeted
                                                         MPLL output rates.  Input corresponds to frequency-synthesis
                                                         coefficient.
                                                         [8:6]: modulous - 1
                                                         [5:0] = 2's compliment push amount. */
#else
	uint64_t ssc_clk_sel                  : 9;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_sata_ssc_clk_sel_s  cn70xx;
	struct cvmx_gserx_sata_ssc_clk_sel_s  cn70xxp1;
};
typedef union cvmx_gserx_sata_ssc_clk_sel cvmx_gserx_sata_ssc_clk_sel_t;

/**
 * cvmx_gser#_sata_ssc_en
 *
 * SATA Spread Spectrum Disable.
 *
 */
union cvmx_gserx_sata_ssc_en {
	uint64_t u64;
	struct cvmx_gserx_sata_ssc_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t ssc_en                       : 1;  /**< Enables spread spectrum clock production (0.5% down-spread
                                                         at ~31.5 KHz) in the SATA 6G PHY.  If the reference clock
                                                         already has spread spectrum applied, this bit must stay
                                                         deasserted. */
#else
	uint64_t ssc_en                       : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_sata_ssc_en_s       cn70xx;
	struct cvmx_gserx_sata_ssc_en_s       cn70xxp1;
};
typedef union cvmx_gserx_sata_ssc_en cvmx_gserx_sata_ssc_en_t;

/**
 * cvmx_gser#_sata_ssc_range
 *
 * SATA Spread Spectrum Range.
 *
 */
union cvmx_gserx_sata_ssc_range {
	uint64_t u64;
	struct cvmx_gserx_sata_ssc_range_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_3_63                : 61;
	uint64_t ssc_range                    : 3;  /**< Selects the range of spread spectrum modulation when SSC_EN is
                                                         asserted and the PHY is spreading the high-speed transmit clocks.
                                                         Applies a fixed offset to the accumulator.
                                                         - 000: -4.980 ppm
                                                         - 001: -4.492 ppm
                                                         - 010: -4.003 ppm
                                                         - 011: -2.000 ppm
                                                         - 100:  4.980 ppm
                                                         - 101:  4.492 ppm
                                                         - 110:  4.003 ppm
                                                         - 111:  2.000 ppm */
#else
	uint64_t ssc_range                    : 3;
	uint64_t reserved_3_63                : 61;
#endif
	} s;
	struct cvmx_gserx_sata_ssc_range_s    cn70xx;
	struct cvmx_gserx_sata_ssc_range_s    cn70xxp1;
};
typedef union cvmx_gserx_sata_ssc_range cvmx_gserx_sata_ssc_range_t;

/**
 * cvmx_gser#_sata_status
 *
 * SATA PHY Ready Status.
 *
 */
union cvmx_gserx_sata_status {
	uint64_t u64;
	struct cvmx_gserx_sata_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_2_63                : 62;
	uint64_t p1_rdy                       : 1;  /**< PHY Lane 1 is ready to send and receive data. */
	uint64_t p0_rdy                       : 1;  /**< PHY Lane 0 is ready to send and receive data. */
#else
	uint64_t p0_rdy                       : 1;
	uint64_t p1_rdy                       : 1;
	uint64_t reserved_2_63                : 62;
#endif
	} s;
	struct cvmx_gserx_sata_status_s       cn70xx;
	struct cvmx_gserx_sata_status_s       cn70xxp1;
};
typedef union cvmx_gserx_sata_status cvmx_gserx_sata_status_t;

/**
 * cvmx_gser#_sata_tx_invert
 *
 * SATA Transmit Polarity Inversion.
 *
 */
union cvmx_gserx_sata_tx_invert {
	uint64_t u64;
	struct cvmx_gserx_sata_tx_invert_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_2_63                : 62;
	uint64_t tx1_invert                   : 1;  /**< Instructs the PHY to perform a polarity inversion on the Lane 1
                                                          transmitted data.
                                                         - 0: PHY does not performs polarity inversion
                                                         - 1: PHY performs polarity inversion */
	uint64_t tx0_invert                   : 1;  /**< Instructs the PHY to perform a polarity inversion on the Lane 0
                                                          transmitted data.
                                                         - 0: PHY does not performs polarity inversion
                                                         - 1: PHY performs polarity inversion */
#else
	uint64_t tx0_invert                   : 1;
	uint64_t tx1_invert                   : 1;
	uint64_t reserved_2_63                : 62;
#endif
	} s;
	struct cvmx_gserx_sata_tx_invert_s    cn70xx;
	struct cvmx_gserx_sata_tx_invert_s    cn70xxp1;
};
typedef union cvmx_gserx_sata_tx_invert cvmx_gserx_sata_tx_invert_t;

/**
 * cvmx_gser#_scratch
 *
 * These registers are reset by hardware only during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_scratch {
	uint64_t u64;
	struct cvmx_gserx_scratch_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t scratch                      : 16; /**< General purpose scratch register. */
#else
	uint64_t scratch                      : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_scratch_s           cn78xx;
};
typedef union cvmx_gserx_scratch cvmx_gserx_scratch_t;

/**
 * cvmx_gser#_slice#_rx_sdll_ctrl
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_slicex_rx_sdll_ctrl {
	uint64_t u64;
	struct cvmx_gserx_slicex_rx_sdll_ctrl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t pcs_sds_oob_clk_ctrl         : 2;  /**< Not Supported. */
	uint64_t reserved_7_13                : 7;
	uint64_t pcs_sds_rx_sdll_tune         : 3;  /**< Tuning bits for the regulator and the loop filter. */
	uint64_t pcs_sds_rx_sdll_swsel        : 4;  /**< DMON control; selects which signal is passed to the output
                                                         of DMON.
                                                         0x1 = dllout[0] (first output clock phase, out of 8 phases,
                                                         of the Slice DLL).
                                                         0x2 = dllout[1] (second output clock phase, out of 8 phases,
                                                         of the Slice DLL).
                                                         0x4 = piclk (output clock of the PI)
                                                         0x8 = vdda_int.
                                                         All other values in this field are reserved. */
#else
	uint64_t pcs_sds_rx_sdll_swsel        : 4;
	uint64_t pcs_sds_rx_sdll_tune         : 3;
	uint64_t reserved_7_13                : 7;
	uint64_t pcs_sds_oob_clk_ctrl         : 2;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_slicex_rx_sdll_ctrl_s cn78xx;
};
typedef union cvmx_gserx_slicex_rx_sdll_ctrl cvmx_gserx_slicex_rx_sdll_ctrl_t;

/**
 * cvmx_gser#_slice_cfg
 *
 * These registers are for diagnostic use only.
 * These registers are reset by hardware only during chip cold reset.
 * The values of the CSR fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_slice_cfg {
	uint64_t u64;
	struct cvmx_gserx_slice_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_12_63               : 52;
	uint64_t tx_rx_detect_lvl_enc         : 4;  /**< Determines the RX Detect level, pcs_sds_tx_rx_detect_lvl[9:0],
                                                         (which is a 1-hot signal), where the level is equal to to
                                                         2^TX_RX_DETECT_LVL_ENC. */
	uint64_t reserved_6_7                 : 2;
	uint64_t pcs_sds_rx_pcie_pterm        : 2;  /**< Reserved. */
	uint64_t pcs_sds_rx_pcie_nterm        : 2;  /**< Reserved. */
	uint64_t pcs_sds_tx_stress_eye        : 2;  /**< Controls TX stress eye. */
#else
	uint64_t pcs_sds_tx_stress_eye        : 2;
	uint64_t pcs_sds_rx_pcie_nterm        : 2;
	uint64_t pcs_sds_rx_pcie_pterm        : 2;
	uint64_t reserved_6_7                 : 2;
	uint64_t tx_rx_detect_lvl_enc         : 4;
	uint64_t reserved_12_63               : 52;
#endif
	} s;
	struct cvmx_gserx_slice_cfg_s         cn78xx;
};
typedef union cvmx_gserx_slice_cfg cvmx_gserx_slice_cfg_t;

/**
 * cvmx_gser#_spd
 *
 * These registers are reset by hardware only during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_spd {
	uint64_t u64;
	struct cvmx_gserx_spd_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t spd                          : 4;  /**< For CCPI links (i.e. GSER8..13), the hardware loads this CSR field from the OCI_SPD<3:0>
                                                         pins during chip cold reset. For non-CCPI links, this field is not used.
                                                         For SPD settings that configure a non-default reference clock, hardware updates the PLL
                                                         settings of the specific lane mode (LMODE) table entry to derive the correct link rate.
                                                         <pre>
                                                         SPD   REFCLK      Link rate   LMODE
                                                         0x0:  100 MHz     1.25 Gb     R_125G_REFCLK15625_KX
                                                         0x1:  100 MHz     2.5 Gb      R_25G_REFCLK100
                                                         0x2:  100 MHz     5 Gb        R_5G_REFCLK100
                                                         0x3:  100 MHz     8 Gb        R_8G_REFCLK100
                                                         0x4:  125 MHz     1.25 Gb     R_125G_REFCLK15625_KX
                                                         0x5:  125 MHz     2.5 Gb      R_25G_REFCLK125
                                                         0x6:  125 MHz     3.125 Gb    R_3125G_REFCLK15625_XAUI
                                                         0x7:  125 MHz     5 Gb        R_5G_REFCLK125
                                                         0x8:  125 MHz     6.25 Gb     R_625G_REFCLK15625_RXAUI
                                                         0x9:  125 MHz     8 Gb        R_8G_REFCLK125
                                                         0xA:  156.25 MHz  2.5 Gb      R_25G_REFCLK100
                                                         0xB:  156.25 MHz  3.125 Gb    R_3125G_REFCLK15625_XAUI
                                                         0xC:  156.25 MHz  5 Gb        R_5G_REFCLK125
                                                         0xD:  156.25 MHz  6.25 Gb     R_625G_REFCLK15625_RXAUI
                                                         0xE:  156.25 MHz  10.3125 Gb  R_103125G_REFCLK15625_KR
                                                         0xF:                          SW_MODE
                                                         </pre>
                                                         Note that a value of 0xF is called SW_MODE. The CCPI link does not come up configured in
                                                         SW_MODE.
                                                         (Software must do all the CCPI GSER configuration to use CCPI in the case of SW_MODE.)
                                                         When SPD!=SW_MODE after a chip cold reset, the hardware has initialized the following
                                                         registers (based on the OCI_SPD selection):
                                                          * GSER()_LANE_MODE[LMODE]=Z.
                                                          * GSER()_PLL_P()_MODE_0.
                                                          * GSER()_PLL_P()_MODE_1.
                                                          * GSER()_LANE_P()_MODE_0.
                                                          * GSER()_LANE_P()_MODE_1.
                                                          * GSER()_LANE()_RX_VALBBD_CTRL_0.
                                                          * GSER()_LANE()_RX_VALBBD_CTRL_1.
                                                          * GSER()_LANE()_RX_VALBBD_CTRL_2.
                                                          where in "GSER(x)", x is 8..13, and in "P(z)", z equals LMODE. */
#else
	uint64_t spd                          : 4;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_spd_s               cn78xx;
};
typedef union cvmx_gserx_spd cvmx_gserx_spd_t;

/**
 * cvmx_gser#_srst
 *
 * These registers are reset by hardware only during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_srst {
	uint64_t u64;
	struct cvmx_gserx_srst_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t srst                         : 1;  /**< When asserted, resets all per-lane state in the GSER with the exception of the PHY and the
                                                         GSER()_CFG. For diagnostic use only. */
#else
	uint64_t srst                         : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_srst_s              cn78xx;
};
typedef union cvmx_gserx_srst cvmx_gserx_srst_t;

/**
 * cvmx_gser#_tx_vboost
 *
 * These registers are reset by hardware only during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cvmx_gserx_tx_vboost {
	uint64_t u64;
	struct cvmx_gserx_tx_vboost_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t vboost                       : 4;  /**< For links that are not in PCIE mode (including all CCPI links), boosts the TX Vswing from
                                                         VDD to 1.0 VPPD.
                                                         <3>: Lane 3.
                                                         <2>: Lane 2.
                                                         <1>: Lane 1.
                                                         <0>: Lane 0. */
#else
	uint64_t vboost                       : 4;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_tx_vboost_s         cn78xx;
};
typedef union cvmx_gserx_tx_vboost cvmx_gserx_tx_vboost_t;

#endif
