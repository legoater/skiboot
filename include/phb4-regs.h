// SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later
/* Copyright 2013-2019 IBM Corp. */

#ifndef __PHB4_REGS_H
#define __PHB4_REGS_H

/*
 * PHB registers
 */

/* PHB Fundamental register set A */
/* phb4_spec_036.pdf, page 80, "5.4.1 ETU/RSB HV Register Address Map" */
/* FIXME: check these (phb3 currently below) */
#define PHB_LSI_SOURCE_ID		0x100
#define   PHB_LSI_SRC_ID		PPC_BITMASK(4,12)
#define PHB_DMA_CHAN_STATUS		0x110
#define   PHB_DMA_CHAN_ANY_ERR		PPC_BIT(27)
#define   PHB_DMA_CHAN_ANY_ERR1		PPC_BIT(28)
#define   PHB_DMA_CHAN_ANY_FREEZE	PPC_BIT(29)
#define PHB_CPU_LOADSTORE_STATUS	0x120
#define   PHB_CPU_LS_ANY_ERR		PPC_BIT(27)
#define   PHB_CPU_LS_ANY_ERR1		PPC_BIT(28)
#define   PHB_CPU_LS_ANY_FREEZE		PPC_BIT(29)
#define PHB_CONFIG_DATA			0x130
#define PHB_LOCK0			0x138
#define PHB_CONFIG_ADDRESS		0x140
#define   PHB_CA_ENABLE			PPC_BIT(0)
#define	  PHB_CA_STATUS			PPC_BITMASK(1,3)
#define	  PHB_CA_BUS			PPC_BITMASK(4,11)
#define   PHB_CA_DEV			PPC_BITMASK(12,16)
#define   PHB_CA_FUNC			PPC_BITMASK(17,19)
#define   PHB_CA_BDFN			PPC_BITMASK(4,19) /* bus,dev,func */
#define   PHB_CA_REG			PPC_BITMASK(20,31)
#define   PHB_CA_PE			PPC_BITMASK(39,47)
#define PHB_LOCK1			0x148
#define PHB_PHB4_CONFIG			0x160
#define   PHB_PHB4C_32BIT_MSI_EN	PPC_BIT(8)
#define   PHB_PHB4C_64BIT_MSI_EN	PPC_BIT(14)
#define PHB_RTT_BAR			0x168
#define   PHB_RTT_BAR_ENABLE		PPC_BIT(0)
#define   PHB_RTT_BASE_ADDRESS		PPC_BITMASK(8,46)
#define PHB_PELTV_BAR			0x188
#define   PHB_PELTV_BAR_ENABLE		PPC_BIT(0)
#define   PHB_PELTV_BASE_ADDRESS	PPC_BITMASK(8,50)
#define PHB_M32_START_ADDR		0x1a0
#define PHB_PEST_BAR			0x1a8
#define   PHB_PEST_BAR_ENABLE		PPC_BIT(0)
#define   PHB_PEST_BASE_ADDRESS		PPC_BITMASK(8,51)
#define PHB_ASN_CMPM			0x1c0
#define   PHB_ASN_CMPM_ENABLE		PPC_BIT(63)
#define PHB_CAPI_CMPM			0x1c8
#define   PHB_CAPI_CMPM_ENABLE		PPC_BIT(63)
#define PHB_M64_AOMASK			0x1d0
#define PHB_M64_UPPER_BITS		0x1f0
#define PHB_NXLATE_PREFIX		0x1f8
#define PHB_DMARD_SYNC			0x200
#define   PHB_DMARD_SYNC_START		PPC_BIT(0)
#define   PHB_DMARD_SYNC_COMPLETE	PPC_BIT(1)
#define PHB_RTC_INVALIDATE		0x208
#define   PHB_RTC_INVALIDATE_ALL	PPC_BIT(0)
#define   PHB_RTC_INVALIDATE_RID	PPC_BITMASK(16,31)
#define PHB_TCE_KILL			0x210
#define   PHB_TCE_KILL_ALL		PPC_BIT(0)
#define   PHB_TCE_KILL_PE		PPC_BIT(1)
#define   PHB_TCE_KILL_ONE		PPC_BIT(2)
#define	  PHB_TCE_KILL_PSEL		PPC_BIT(3)
#define	  PHB_TCE_KILL_64K		0x1000 /* Address override */
#define	  PHB_TCE_KILL_2M		0x2000 /* Address override */
#define	  PHB_TCE_KILL_1G		0x3000 /* Address override */
#define	  PHB_TCE_KILL_PENUM		PPC_BITMASK(55,63)
#define PHB_TCE_SPEC_CTL		0x218
#define PHB_IODA_ADDR			0x220
#define   PHB_IODA_AD_AUTOINC		PPC_BIT(0)
#define	  PHB_IODA_AD_TSEL		PPC_BITMASK(11,15)
#define	  PHB_IODA_AD_MIST_PWV		PPC_BITMASK(28,31)
#define	  PHB_IODA_AD_TADR		PPC_BITMASK(54,63)
#define PHB_IODA_DATA0			0x228
#define PHB_PHB4_GEN_CAP		0x250
#define PHB_PHB4_TCE_CAP		0x258
#define PHB_PHB4_IRQ_CAP		0x260
#define PHB_PHB4_EEH_CAP		0x268
#define PHB_PAPR_ERR_INJ_CTL		0x2b0
#define   PHB_PAPR_ERR_INJ_CTL_INB	PPC_BIT(0)
#define   PHB_PAPR_ERR_INJ_CTL_OUTB	PPC_BIT(1)
#define   PHB_PAPR_ERR_INJ_CTL_STICKY	PPC_BIT(2)
#define   PHB_PAPR_ERR_INJ_CTL_CFG	PPC_BIT(3)
#define   PHB_PAPR_ERR_INJ_CTL_RD	PPC_BIT(4)
#define   PHB_PAPR_ERR_INJ_CTL_WR	PPC_BIT(5)
#define   PHB_PAPR_ERR_INJ_CTL_FREEZE	PPC_BIT(6)
#define PHB_PAPR_ERR_INJ_ADDR		0x2b8
#define   PHB_PAPR_ERR_INJ_ADDR_MMIO		PPC_BITMASK(16,63)
#define PHB_PAPR_ERR_INJ_MASK		0x2c0
#define   PHB_PAPR_ERR_INJ_MASK_CFG		PPC_BITMASK(4,11)
#define   PHB_PAPR_ERR_INJ_MASK_CFG_ALL		PPC_BITMASK(4,19)
#define   PHB_PAPR_ERR_INJ_MASK_MMIO		PPC_BITMASK(16,63)
#define PHB_ETU_ERR_SUMMARY		0x2c8
#define PHB_INT_NOTIFY_ADDR		0x300
#define PHB_INT_NOTIFY_INDEX		0x308

#define PHB_VERSION			0x800
#define PHB_CTRLR			0x810
#define   PHB_CTRLR_IRQ_PGSZ_64K	PPC_BIT(11)
#define   PHB_CTRLR_IRQ_STORE_EOI	PPC_BIT(12)
#define   PHB_CTRLR_MMIO_RD_STRICT	PPC_BIT(13)
#define   PHB_CTRLR_MMIO_EEH_DISABLE	PPC_BIT(14)
#define   PHB_CTRLR_CFG_EEH_BLOCK	PPC_BIT(15)
#define   PHB_CTRLR_FENCE_LNKILL_DIS	PPC_BIT(16)
#define   PHB_CTRLR_TVT_ADDR_SEL	PPC_BITMASK(17,19)
#define     TVT_2_PER_PE		0
#define     TVT_4_PER_PE		1
#define     TVT_8_PER_PE		2
#define     TVT_16_PER_PE		3
#define   PHB_CTRLR_DMA_RD_SPACING	PPC_BITMASK(28,31)
#define PHB_AIB_FENCE_CTRL		0x860
#define PHB_TCE_TAG_ENABLE		0x868
#define PHB_TCE_WATERMARK		0x870
#define PHB_TIMEOUT_CTRL1		0x878
#define PHB_TIMEOUT_CTRL2		0x880
#define PHB_Q_DMA_R			0x888
#define   PHB_Q_DMA_R_QUIESCE_DMA	PPC_BIT(0)
#define   PHB_Q_DMA_R_AUTORESET		PPC_BIT(1)
#define   PHB_Q_DMA_R_DMA_RESP_STATUS	PPC_BIT(4)
#define   PHB_Q_DMA_R_MMIO_RESP_STATUS	PPC_BIT(5)
#define   PHB_Q_DMA_R_TCE_RESP_STATUS	PPC_BIT(6)
#define   PHB_Q_DMA_R_TCE_KILL_STATUS	PPC_BIT(7)
#define PHB_TCE_TAG_STATUS		0x908

/* FIR & Error registers */
#define PHB_LEM_FIR_ACCUM		0xc00
#define PHB_LEM_FIR_AND_MASK		0xc08
#define PHB_LEM_FIR_OR_MASK		0xc10
#define PHB_LEM_ERROR_MASK		0xc18
#define PHB_LEM_ERROR_AND_MASK		0xc20
#define PHB_LEM_ERROR_OR_MASK		0xc28
#define PHB_LEM_ACTION0			0xc30
#define PHB_LEM_ACTION1			0xc38
#define PHB_LEM_WOF			0xc40
#define PHB_ERR_STATUS			0xc80
#define PHB_ERR1_STATUS			0xc88
#define PHB_ERR_INJECT			0xc90
#define PHB_ERR_LEM_ENABLE		0xc98
#define PHB_ERR_IRQ_ENABLE		0xca0
#define PHB_ERR_FREEZE_ENABLE		0xca8
#define PHB_ERR_AIB_FENCE_ENABLE	0xcb0
#define PHB_ERR_LOG_0			0xcc0
#define PHB_ERR_LOG_1			0xcc8
#define PHB_ERR_STATUS_MASK		0xcd0
#define PHB_ERR1_STATUS_MASK		0xcd8

/*
 * Instead of MMIO outbound, inboundA and inboundB in PHB3,
 * PHB4 has TXE (outbound), RXE_ARB, RXE_MRG and RXE_TCE.
 */

#define PHB_TXE_ERR_STATUS			0xd00
#define PHB_TXE_ERR1_STATUS			0xd08
#define PHB_TXE_ERR_INJECT			0xd10
#define PHB_TXE_ERR_LEM_ENABLE			0xd18
#define PHB_TXE_ERR_IRQ_ENABLE			0xd20
#define PHB_TXE_ERR_FREEZE_ENABLE		0xd28
#define PHB_TXE_ERR_AIB_FENCE_ENABLE		0xd30
#define PHB_TXE_ERR_LOG_0			0xd40
#define PHB_TXE_ERR_LOG_1			0xd48
#define PHB_TXE_ERR_STATUS_MASK			0xd50
#define PHB_TXE_ERR1_STATUS_MASK		0xd58

#define PHB_RXE_ARB_ERR_STATUS			0xd80
#define PHB_RXE_ARB_ERR1_STATUS			0xd88
#define PHB_RXE_ARB_ERR_INJECT			0xd90
#define PHB_RXE_ARB_ERR_LEM_ENABLE      	0xd98
#define PHB_RXE_ARB_ERR_IRQ_ENABLE		0xda0
#define PHB_RXE_ARB_ERR_FREEZE_ENABLE		0xda8
#define PHB_RXE_ARB_ERR_AIB_FENCE_ENABLE	0xdb0
#define PHB_RXE_ARB_ERR_LOG_0			0xdc0
#define PHB_RXE_ARB_ERR_LOG_1			0xdc8
#define PHB_RXE_ARB_ERR_STATUS_MASK		0xdd0
#define PHB_RXE_ARB_ERR1_STATUS_MASK		0xdd8

#define PHB_RXE_MRG_ERR_STATUS			0xe00
#define PHB_RXE_MRG_ERR1_STATUS			0xe08
#define PHB_RXE_MRG_ERR_INJECT			0xe10
#define PHB_RXE_MRG_ERR_LEM_ENABLE		0xe18
#define PHB_RXE_MRG_ERR_IRQ_ENABLE		0xe20
#define PHB_RXE_MRG_ERR_FREEZE_ENABLE		0xe28
#define PHB_RXE_MRG_ERR_AIB_FENCE_ENABLE	0xe30
#define PHB_RXE_MRG_ERR_LOG_0			0xe40
#define PHB_RXE_MRG_ERR_LOG_1			0xe48
#define PHB_RXE_MRG_ERR_STATUS_MASK		0xe50
#define PHB_RXE_MRG_ERR1_STATUS_MASK		0xe58

#define PHB_RXE_TCE_ERR_STATUS			0xe80
#define PHB_RXE_TCE_ERR1_STATUS			0xe88
#define PHB_RXE_TCE_ERR_INJECT			0xe90
#define PHB_RXE_TCE_ERR_LEM_ENABLE		0xe98
#define PHB_RXE_TCE_ERR_IRQ_ENABLE		0xea0
#define PHB_RXE_TCE_ERR_FREEZE_ENABLE		0xea8
#define PHB_RXE_TCE_ERR_AIB_FENCE_ENABLE	0xeb0
#define PHB_RXE_TCE_ERR_LOG_0			0xec0
#define PHB_RXE_TCE_ERR_LOG_1			0xec8
#define PHB_RXE_TCE_ERR_STATUS_MASK		0xed0
#define PHB_RXE_TCE_ERR1_STATUS_MASK		0xed8

/* Performance monitor & Debug registers */
#define PHB_TRACE_CONTROL			0xf80
#define PHB_PERFMON_CONFIG			0xf88
#define PHB_PERFMON_CTR0			0xf90
#define PHB_PERFMON_CTR1			0xf98
#define PHB_PERFMON_CTR2			0xfa0
#define PHB_PERFMON_CTR3			0xfa8

/* Root complex config space memory mapped */
#define PHB_RC_CONFIG_BASE			0x1000
#define   PHB_RC_CONFIG_SIZE			0x800

/* PHB4 REGB registers */

/* PBL core */
#define PHB_PBL_CONTROL				0x1800
#define PHB_PBL_TIMEOUT_CTRL			0x1810
#define PHB_PBL_NPTAG_ENABLE			0x1820
#define PHB_PBL_NBW_CMP_MASK			0x1830
#define   PHB_PBL_NBW_MASK_ENABLE		PPC_BIT(63)
#define PHB_PBL_SYS_LINK_INIT			0x1838
#define PHB_PBL_BUF_STATUS			0x1840
#define PHB_PBL_ERR_STATUS			0x1900
#define PHB_PBL_ERR1_STATUS			0x1908
#define PHB_PBL_ERR_INJECT			0x1910
#define PHB_PBL_ERR_INF_ENABLE			0x1920
#define PHB_PBL_ERR_ERC_ENABLE			0x1928
#define PHB_PBL_ERR_FAT_ENABLE			0x1930
#define PHB_PBL_ERR_LOG_0			0x1940
#define PHB_PBL_ERR_LOG_1			0x1948
#define PHB_PBL_ERR_STATUS_MASK			0x1950
#define PHB_PBL_ERR1_STATUS_MASK		0x1958

/* PCI-E stack */
#define PHB_PCIE_SCR			0x1A00
#define   PHB_PCIE_SCR_SLOT_CAP		PPC_BIT(15)
#define	  PHB_PCIE_SCR_MAXLINKSPEED	PPC_BITMASK(32,35)


#define PHB_PCIE_CRESET			0x1A10
#define	  PHB_PCIE_CRESET_CFG_CORE	PPC_BIT(0)
#define	  PHB_PCIE_CRESET_TLDLP		PPC_BIT(1)
#define	  PHB_PCIE_CRESET_PBL		PPC_BIT(2)
#define	  PHB_PCIE_CRESET_PERST_N	PPC_BIT(3)
#define	  PHB_PCIE_CRESET_PIPE_N	PPC_BIT(4)


#define PHB_PCIE_HOTPLUG_STATUS		0x1A20
#define	  PHB_PCIE_HPSTAT_PRESENCE	PPC_BIT(10)

#define PHB_PCIE_DLP_TRAIN_CTL		0x1A40
#define	  PHB_PCIE_DLP_LINK_WIDTH	PPC_BITMASK(30,35)
#define	  PHB_PCIE_DLP_LINK_SPEED	PPC_BITMASK(36,39)
#define	  PHB_PCIE_DLP_LTSSM_TRC	PPC_BITMASK(24,27)
#define	    PHB_PCIE_DLP_LTSSM_RESET	0
#define	    PHB_PCIE_DLP_LTSSM_DETECT	1
#define	    PHB_PCIE_DLP_LTSSM_POLLING	2
#define	    PHB_PCIE_DLP_LTSSM_CONFIG	3
#define	    PHB_PCIE_DLP_LTSSM_L0      	4
#define	    PHB_PCIE_DLP_LTSSM_REC     	5
#define	    PHB_PCIE_DLP_LTSSM_L1      	6
#define	    PHB_PCIE_DLP_LTSSM_L2      	7
#define	    PHB_PCIE_DLP_LTSSM_HOTRESET	8
#define	    PHB_PCIE_DLP_LTSSM_DISABLED	9
#define	    PHB_PCIE_DLP_LTSSM_LOOPBACK	10
#define	  PHB_PCIE_DLP_TL_LINKACT	PPC_BIT(23)
#define   PHB_PCIE_DLP_DL_PGRESET	PPC_BIT(22)
#define   PHB_PCIE_DLP_TRAINING		PPC_BIT(20)
#define   PHB_PCIE_DLP_INBAND_PRESENCE  PPC_BIT(19)

#define PHB_PCIE_DLP_CTL		0x1A78
#define   PHB_PCIE_DLP_CTL_BYPASS_PH2	PPC_BIT(4)
#define   PHB_PCIE_DLP_CTL_BYPASS_PH3	PPC_BIT(5)

#define PHB_PCIE_DLP_TRWCTL		0x1A80
#define   PHB_PCIE_DLP_TRWCTL_EN	PPC_BIT(0)

#define PHB_PCIE_DLP_ERRLOG1		0x1AA0
#define PHB_PCIE_DLP_ERRLOG2		0x1AA8
#define PHB_PCIE_DLP_ERR_STATUS		0x1AB0
#define  PHB_PCIE_DLP_LANE_ERR	 	PPC_BITMASK(0,15)
#define PHB_PCIE_DLP_ERR_COUNTERS	0x1AB8
#define  PHB_PCIE_DLP_RX_ERR_CNT 	PPC_BITMASK(16,23)

#define PHB_PCIE_LANE_EQ_CNTL0		0x1AD0
#define PHB_PCIE_LANE_EQ_CNTL1		0x1AD8
#define PHB_PCIE_LANE_EQ_CNTL2		0x1AE0
#define PHB_PCIE_LANE_EQ_CNTL3		0x1AE8
#define PHB_PCIE_LANE_EQ_CNTL20		0x1AF0
#define PHB_PCIE_LANE_EQ_CNTL21		0x1AF8
#define PHB_PCIE_TRACE_CTRL		0x1B20
#define PHB_PCIE_MISC_STRAP		0x1B30

/* Error */
#define PHB_REGB_ERR_STATUS		0x1C00
#define PHB_REGB_ERR1_STATUS		0x1C08
#define PHB_REGB_ERR_INJECT		0x1C10
#define PHB_REGB_ERR_INF_ENABLE		0x1C20
#define PHB_REGB_ERR_ERC_ENABLE		0x1C28
#define PHB_REGB_ERR_FAT_ENABLE		0x1C30
#define PHB_REGB_ERR_LOG_0		0x1C40
#define PHB_REGB_ERR_LOG_1		0x1C48
#define PHB_REGB_ERR_STATUS_MASK	0x1C50
#define PHB_REGB_ERR1_STATUS_MASK	0x1C58

/*
 * PHB4 xscom address defines
 */

/* Nest base registers */
#define XPEC_NEST_PBCQ_HW_CONFIG		0x0
#define   XPEC_NEST_PBCQ_HW_CONFIG_PBINIT	PPC_BIT(12)
#define   XPEC_NEST_PBCQ_HW_CONFIG_CH_STR	PPC_BIT(33)
#define   XPEC_NEST_PBCQ_HW_CONFIG_DIS_NODAL	PPC_BIT(50)
#define   XPEC_NEST_PBCQ_HW_CONFIG_DIS_RNNN	PPC_BIT(52)
#define XPEC_NEST_CAPP_CNTL			0x7
#define XPEC_NEST_READ_STACK_OVERRIDE		0x8

/* Nest base per-stack registers */
#define XPEC_NEST_STK_PCI_NFIR			0x0
#define   XPEC_NEST_STK_PCI_NFIR_CXA_PE_CAPP	PPC_BIT(24)
#define XPEC_NEST_STK_PCI_NFIR_CLR		0x1
#define XPEC_NEST_STK_PCI_NFIR_SET		0x2
#define XPEC_NEST_STK_PCI_NFIR_MSK		0x3
#define XPEC_NEST_STK_PCI_NFIR_MSK_CLR		0x4
#define XPEC_NEST_STK_PCI_NFIR_MSK_SET		0x5
#define XPEC_NEST_STK_PCI_NFIR_ACTION0		0x6
#define XPEC_NEST_STK_PCI_NFIR_ACTION1		0x7
#define XPEC_NEST_STK_PCI_NFIR_WOF		0x8
#define XPEC_NEST_STK_ERR_RPT0			0xa
#define XPEC_NEST_STK_ERR_RPT1			0xb
#define XPEC_NEST_STK_PBCQ_STAT			0xc
#define XPEC_NEST_STK_PBCQ_MODE			0xd
#define   XPEC_NEST_STK_PBCQ_MODE_P2P		PPC_BIT(0)
#define XPEC_NEST_STK_MMIO_BAR0			0xe
#define XPEC_NEST_STK_MMIO_BAR0_MASK		0xf
#define XPEC_NEST_STK_MMIO_BAR1			0x10
#define XPEC_NEST_STK_MMIO_BAR1_MASK		0x11
#define XPEC_NEST_STK_PHB_REG_BAR		0x12
#define XPEC_NEST_STK_IRQ_BAR			0x13
#define XPEC_NEST_STK_BAR_EN			0x14
#define   XPEC_NEST_STK_BAR_EN_MMIO0		PPC_BIT(0)
#define   XPEC_NEST_STK_BAR_EN_MMIO1		PPC_BIT(1)
#define   XPEC_NEST_STK_BAR_EN_PHB		PPC_BIT(2)
#define   XPEC_NEST_STK_BAR_EN_INT		PPC_BIT(3)
#define XPEC_NEST_STK_DATA_FREZ_TYPE		0x15
#define XPEC_NEST_STK_TUNNEL_BAR		0x16

/* PCI base registers */
#define XPEC_PCI_PBAIB_HW_CONFIG		0x0
#define XPEC_PCI_CAPP_SEC_BAR			0x1
#define XPEC_PCI_PRDSTKOVR			0x2

/* PCI base per-stack registers */
#define XPEC_PCI_STK_PCI_FIR			0x0
#define XPEC_PCI_STK_PCI_FIR_CLR		0x1
#define XPEC_PCI_STK_PCI_FIR_SET		0x2
#define XPEC_PCI_STK_PCI_FIR_MSK		0x3
#define XPEC_PCI_STK_PCI_FIR_MSK_CLR		0x4
#define XPEC_PCI_STK_PCI_FIR_MSK_SET		0x5
#define XPEC_PCI_STK_PCI_FIR_ACTION0		0x6
#define XPEC_PCI_STK_PCI_FIR_ACTION1		0x7
#define XPEC_PCI_STK_PCI_FIR_WOF		0x8
#define XPEC_PCI_STK_ETU_RESET			0xa
#define XPEC_PCI_STK_PBAIB_ERR_REPORT		0xb

/* ETU XSCOM registers */
#define XETU_HV_IND_ADDRESS			0x0
#define   XETU_HV_IND_ADDR_VALID		PPC_BIT(0)
#define   XETU_HV_IND_ADDR_4B			PPC_BIT(1)
#define   XETU_HV_IND_ADDR_AUTOINC		PPC_BIT(2)
#define XETU_HV_IND_DATA			0x1


/* PCI Chiplet Config Register */
#define XPEC_PCI2_CPLT_CONF1			0x000000000F000009ULL
#define XPEC_PCI2_IOVALID_MASK			PPC_BITMASK(4, 6)
#define XPEC_PCI2_IOVALID_X16			PPC_BIT(4)

/*
 * IODA3 on-chip tables
 */

#define IODA3_TBL_LIST		1
#define IODA3_TBL_MIST		2
#define IODA3_TBL_RCAM		5
#define IODA3_TBL_MRT		6
#define IODA3_TBL_PESTA		7
#define IODA3_TBL_PESTB		8
#define IODA3_TBL_TVT		9
#define IODA3_TBL_TCAM		10
#define IODA3_TBL_TDR		11
#define IODA3_TBL_MBT		16
#define IODA3_TBL_MDT		17
#define IODA3_TBL_PEEV		20

/* LIST */
#define IODA3_LIST_P			PPC_BIT(6)
#define IODA3_LIST_Q			PPC_BIT(7)
#define IODA3_LIST_STATE		PPC_BIT(14)

/* MIST */
#define IODA3_MIST_P3			PPC_BIT(48 + 0)
#define IODA3_MIST_Q3			PPC_BIT(48 + 1)
#define IODA3_MIST_PE3			PPC_BITMASK(48 + 4, 48 + 15)

/* TVT */
#define IODA3_TVT_TABLE_ADDR		PPC_BITMASK(0,47)
#define IODA3_TVT_NUM_LEVELS		PPC_BITMASK(48,50)
#define   IODA3_TVE_1_LEVEL	0
#define   IODA3_TVE_2_LEVELS	1
#define   IODA3_TVE_3_LEVELS	2
#define   IODA3_TVE_4_LEVELS	3
#define   IODA3_TVE_5_LEVELS	4
#define IODA3_TVT_TCE_TABLE_SIZE	PPC_BITMASK(51,55)
#define IODA3_TVT_NON_TRANSLATE_50	PPC_BIT(56)
#define IODA3_TVT_IO_PSIZE		PPC_BITMASK(59,63)

/* PESTA */
#define IODA3_PESTA_MMIO_FROZEN		PPC_BIT(0)
#define IODA3_PESTA_TRANS_TYPE		PPC_BITMASK(5,7)
#define  IODA3_PESTA_TRANS_TYPE_MMIOLOAD 0x4
#define IODA3_PESTA_CA_CMPLT_TMT	PPC_BIT(8)
#define IODA3_PESTA_UR		       	PPC_BIT(9)

/* PESTB */
#define IODA3_PESTB_DMA_STOPPED		PPC_BIT(0)

/* MDT */
/* FIXME: check this field with Eric and add a B, C and D */
#define IODA3_MDT_PE_A			PPC_BITMASK(0,15)
#define IODA3_MDT_PE_B			PPC_BITMASK(16,31)
#define IODA3_MDT_PE_C			PPC_BITMASK(32,47)
#define IODA3_MDT_PE_D			PPC_BITMASK(48,63)

/* MBT */
#define IODA3_MBT0_ENABLE		PPC_BIT(0)
#define IODA3_MBT0_TYPE			PPC_BIT(1)
#define   IODA3_MBT0_TYPE_M32		IODA3_MBT0_TYPE
#define   IODA3_MBT0_TYPE_M64		0
#define IODA3_MBT0_MODE			PPC_BITMASK(2,3)
#define	  IODA3_MBT0_MODE_PE_SEG	0
#define	  IODA3_MBT0_MODE_MDT		1
#define	  IODA3_MBT0_MODE_SINGLE_PE	2
#define IODA3_MBT0_SEG_DIV		PPC_BITMASK(4,5)
#define   IODA3_MBT0_SEG_DIV_MAX	0
#define   IODA3_MBT0_SEG_DIV_128	1
#define   IODA3_MBT0_SEG_DIV_64		2
#define   IODA3_MBT0_SEG_DIV_8		3
#define IODA3_MBT0_MDT_COLUMN		PPC_BITMASK(4,5)
#define IODA3_MBT0_BASE_ADDR		PPC_BITMASK(8,51)

#define IODA3_MBT1_ENABLE		PPC_BIT(0)
#define IODA3_MBT1_MASK			PPC_BITMASK(8,51)
#define IODA3_MBT1_SEG_BASE		PPC_BITMASK(55,63)
#define IODA3_MBT1_SINGLE_PE_NUM	PPC_BITMASK(55,63)

/*
 * IODA2 in-memory tables
 */

/* PEST
 *
 * 2x8 bytes entries, PEST0 and PEST1
 */

#define IODA3_PEST0_MMIO_CAUSE		PPC_BIT(2)
#define IODA3_PEST0_CFG_READ		PPC_BIT(3)
#define IODA3_PEST0_CFG_WRITE		PPC_BIT(4)
#define IODA3_PEST0_TTYPE		PPC_BITMASK(5,7)
#define   PEST_TTYPE_DMA_WRITE		0
#define   PEST_TTYPE_MSI		1
#define   PEST_TTYPE_DMA_READ		2
#define   PEST_TTYPE_DMA_READ_RESP	3
#define   PEST_TTYPE_MMIO_LOAD		4
#define   PEST_TTYPE_MMIO_STORE		5
#define   PEST_TTYPE_OTHER		7
#define IODA3_PEST0_CA_RETURN		PPC_BIT(8)
#define IODA3_PEST0_UR_RETURN		PPC_BIT(9)
#define IODA3_PEST0_PCIE_NONFATAL	PPC_BIT(10)
#define IODA3_PEST0_PCIE_FATAL		PPC_BIT(11)
#define IODA3_PEST0_PARITY_UE		PPC_BIT(13)
#define IODA3_PEST0_PCIE_CORRECTABLE	PPC_BIT(14)
#define IODA3_PEST0_PCIE_INTERRUPT	PPC_BIT(15)
#define IODA3_PEST0_MMIO_XLATE		PPC_BIT(16)
#define IODA3_PEST0_IODA3_ERROR		PPC_BIT(16) /* Same bit as MMIO xlate */
#define IODA3_PEST0_TCE_PAGE_FAULT	PPC_BIT(18)
#define IODA3_PEST0_TCE_ACCESS_FAULT	PPC_BIT(19)
#define IODA3_PEST0_DMA_RESP_TIMEOUT	PPC_BIT(20)
#define IODA3_PEST0_AIB_SIZE_INVALID	PPC_BIT(21)
#define IODA3_PEST0_LEM_BIT		PPC_BITMASK(26,31)
#define IODA3_PEST0_RID			PPC_BITMASK(32,47)
#define IODA3_PEST0_MSI_DATA		PPC_BITMASK(48,63)

#define IODA3_PEST1_FAIL_ADDR		PPC_BITMASK(3,63)


#endif /* __PHB4_REGS_H */
