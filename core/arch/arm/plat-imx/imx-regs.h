/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (C) 2015 Freescale Semiconductor, Inc.
 * Copyright (c) 2016, Wind River Systems.
 * All rights reserved.
 * Copyright 2019 NXP
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef PLAT_IMX_IMX_REGS_H
#define PLAT_IMX_IMX_REGS_H

#ifdef CFG_MX6
#include <registers/imx6.h>
#elif defined(CFG_MX7)
#include <registers/imx7.h>
#elif defined(CFG_MX7ULP)
#include <registers/imx7ulp.h>
#elif defined(CFG_MX8MQ) || defined(CFG_MX8MM) || defined(CFG_MX8MN) || \
	defined(CFG_MX8MP)
#include <registers/imx8m.h>
#elif defined(CFG_MX8QX) || defined(CFG_MX8QM) || defined(CFG_MX8DXL)
#include <registers/imx8q.h>
#elif defined(CFG_MX8ULP)
#include <registers/imx8ulp.h>
#elif defined(CFG_MX93)
#include <registers/imx93.h>
#else
#error "CFG_MX* not defined"
#endif

/* SNVS */
#define SNVS_HPLR			0x00000000
#define SNVS_HPCOMR			0x00000004
#define SNVS_HPCR			0x00000008
#define SNVS_HPSICR			0x0000000C
#define SNVS_HPSVCR			0x00000010
#define SNVS_HPSR			0x00000014
#define SNVS_HPSVSR			0x00000018
#define SNVS_HPHACIVR			0x0000001C
#define SNVS_HPHACR			0x00000020
#define SNVS_HPRTCMR			0x00000024
#define SNVS_HPRTCLR			0x00000028
#define SNVS_HPTAMR			0x0000002C
#define SNVS_HPTALR			0x00000030
#define SNVS_LPLR			0x00000034
#define SNVS_LPCR			0x00000038
#define SNVS_LPMKCR			0x0000003C
#define SNVS_LPSVCR			0x00000040
#define SNVS_LPTGFCR			0x00000044
#define SNVS_LPTDCR			0x00000048
#define SNVS_LPSR			0x0000004C
#define SNVS_LPSRTCMR			0x00000050
#define SNVS_LPSRTCLR			0x00000054
#define SNVS_LPTAR			0x00000058
#define SNVS_LPSMCMR			0x0000005C
#define SNVS_LPSMCLR			0x00000060
#define SNVS_LPPGDR			0x00000064
#define SNVS_LPGPR			0x00000068
#define SNVS_LPZMK			0x0000006C
#define SNVS_HPVIDR1			0x00000BF8
#define SNVS_HPVIDR2			0x00000BFC

#define SNVS_LPPGDR_INIT		0x41736166

#define SNVS_LPCR_DP_EN			(1u << 5)
#define SNVS_LPCR_TOP			(1u << 6)

#define SNVS_LPMKCR_MK_OTP	0x00
#define SNVS_LPLR_MKEYSEL_LCK	(1u << 9)
#define SNVS_HPLR_MKEYSEL_LCK	(1u << 9)

#define SNVS_LPSR_PGD			(1u << 3)

#define IOMUXC_GPR1_OFFSET	0x04
#define IOMUXC_GPR4_OFFSET	0x10
#define IOMUXC_GPR5_OFFSET	0x14

#define IOMUXC_GPR1_IRQ		BIT(12)
#define GPR_IRQ			32

#define ARM_WFI_STAT_MASK(n)	BIT(n)

#define ARM_WFI_STAT_MASK_7D(n)	BIT(25 + ((n) & 1))

#define SRC_SCR				0x000
#define SRC_GPR1			0x020
#define SRC_GPR2			0x024
#define SRC_SCR_CORE1_RST_OFFSET	14
#define SRC_SCR_CORE1_ENABLE_OFFSET	22
#define SRC_SCR_CPU_ENABLE_ALL		SHIFT_U32(0x7, 22)

#define SRC_GPR1_MX7			0x074
#define SRC_GPR2_MX7			0x078
#define SRC_A7RCR0			0x004
#define SRC_A7RCR1			0x008
#define SRC_A7RCR0_A7_CORE_RESET0_OFFSET	0
#define SRC_A7RCR1_A7_CORE1_ENABLE_OFFSET	1

#define SNVS_LPCR_OFF			0x38
#define SNVS_LPCR_TOP_MASK		BIT(6)
#define SNVS_LPCR_DP_EN_MASK		BIT(5)
#define SNVS_LPCR_SRTC_ENV_MASK		1

#define WCR_OFF				0

/* GPC V2 */
#define GPC_PGC_C0			0x800
#define GPC_PGC_C0_PUPSCR		0x804
#define GPC_PGC_C1			0x840
#define GPC_PGC_C1_PUPSCR		0x844
#define GPC_PGC_SCU			0x880

#define GPC_PGC_PCG_MASK		BIT(0)
#define GPC_PGC_CORE_PUPSCR		0x7fff80

#define GPC_CPU_PGC_SW_PUP_REQ		0xf0
#define GPC_PU_PGC_SW_PUP_REQ		0xf8
#define GPC_CPU_PGC_SW_PDN_REQ		0xfc
#define GPC_PU_PGC_SW_PDN_REQ		0x104
#define GPC_PGC_SW_PDN_PUP_REQ_CORE1_MASK BIT(1)

#define GPC_LPCR_A7_BSC			0
#define GPC_LPCR_A7_AD			0x4
#define GPC_LPCR_M4			0x8
#define GPC_SLPCR			0x14
#define GPC_MLPCR			0x20
#define GPC_PGC_ACK_SEL_A7		0x24
#define GPC_PGC_ACK_SEL_M4		0x28
#define GPC_MISC			0x2C
#define GPC_IMR1_CORE0_A7		0x30
#define GPC_IMR2_CORE0_A7		0x34
#define GPC_IMR3_CORE0_A7		0x38
#define GPC_IMR4_CORE0_A7		0x3C
#define GPC_IMR1_CORE1_A7		0x40
#define GPC_IMR2_CORE1_A7		0x44
#define GPC_IMR3_CORE1_A7		0x48
#define GPC_IMR4_CORE1_A7		0x4C
#define GPC_ISR1_A7			0x70
#define GPC_ISR2_A7			0x74
#define GPC_ISR3_A7			0x78
#define GPC_ISR4_A7			0x7C
#define GPC_SLT0_CFG			0xB0
#define GPC_SLT1_CFG			0xB4
#define GPC_SLT2_CFG			0xB8
#define GPC_SLT3_CFG			0xBC
#define GPC_SLT4_CFG			0xC0
#define GPC_SLT5_CFG			0xC4
#define GPC_SLT6_CFG			0xC8
#define GPC_SLT7_CFG			0xCC
#define GPC_SLT8_CFG			0xD0
#define GPC_SLT9_CFG			0xD4
#define GPC_PGC_CPU_MAPPING		0xEC
#define GPC_PGC_SCU_AUXSW		0x890

#define GPC_LPCR_A7_BSC_LPM0		SHIFT_U32(0x3, 0)
#define GPC_LPCR_A7_BSC_LPM1		SHIFT_U32(0x3, 2)
#define GPC_LPCR_A7_BSC_CPU_CLK_ON_LPM	BIT(14)
#define GPC_LPCR_A7_BSC_MASK_CORE0_WFI	BIT(16)
#define GPC_LPCR_A7_BSC_MASK_CORE1_WFI	BIT(17)
#define GPC_LPCR_A7_BSC_MASK_L2CC_WFI	BIT(26)
#define GPC_LPCR_A7_BSC_IRQ_SRC_C0	BIT(28)
#define GPC_LPCR_A7_BSC_IRQ_SRC_C1	BIT(29)
#define GPC_LPCR_A7_BSC_IRQ_SRC_A7_WUP	BIT(30)
#define GPC_LPCR_A7_BSC_MASK_DSM_TRIGGER BIT(31)

#define GPC_LPCR_A7_AD_L2_PGE			0x10000
#define GPC_LPCR_A7_AD_EN_C1_PUP		0x800
#define GPC_LPCR_A7_AD_EN_C1_IRQ_PUP		0x400
#define GPC_LPCR_A7_AD_EN_C0_PUP		0x200
#define GPC_LPCR_A7_AD_EN_C0_IRQ_PUP		0x100
#define GPC_LPCR_A7_AD_EN_PLAT_PDN		0x10
#define GPC_LPCR_A7_AD_EN_C1_PDN		0x8
#define GPC_LPCR_A7_AD_EN_C1_WFI_PDN		0x4
#define GPC_LPCR_A7_AD_EN_C0_PDN		0x2
#define GPC_LPCR_A7_AD_EN_C0_WFI_PDN		0x1

#define GPC_LPCR_M4_MASK_DSM_TRIGGER		BIT(31)

#define GPC_SLPCR_EN_DSM			BIT(31)
#define GPC_SLPCR_RBC_EN			BIT(30)
#define GPC_SLPCR_EN_A7_FASTWUP_WAIT_MODE	BIT(16)
#define GPC_SLPCR_SBYOS				BIT(1)
#define GPC_SLPCR_BYPASS_PMIC_READY		BIT(0)

#define GPC_MLPCR_MEMLP_CTL_DIS			BIT(0)

#define GPC_PGC_ACK_SEL_A7_DUMMY_PUP_ACK	0x80000000
#define GPC_PGC_ACK_SEL_A7_DUMMY_PDN_ACK	0x00008000
#define GPC_PGC_ACK_SEL_A7_PLAT_PGC_PUP_ACK	BIT(18)
#define GPC_PGC_ACK_SEL_A7_PLAT_PGC_PDN_ACK	BIT(2)
#define GPC_PGC_ACK_SEL_A7_C0_PGC_PUP_ACK	BIT(16)
#define GPC_PGC_ACK_SEL_A7_C0_PGC_PDN_ACK	BIT(0)

#define CORE0_A7_PDN_SLOT_CONTROL		BIT(0)
#define CORE0_A7_PUP_SLOT_CONTROL		BIT(1)
#define CORE1_A7_PDN_SLOT_CONTROL		BIT(2)
#define CORE1_A7_PUP_SLOT_CONTROL		BIT(3)
#define SCU_PDN_SLOT_CONTROL			BIT(4)
#define SCU_PUP_SLOT_CONTROL			BIT(5)
#define FASTMEGA_PDN_SLOT_CONTROL		BIT(6)
#define FASTMEGA_PUP_SLOT_CONTROL		BIT(7)

#endif
