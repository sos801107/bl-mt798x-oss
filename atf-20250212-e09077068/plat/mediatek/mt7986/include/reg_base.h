/*
 * COPY from mt7622
 */

#define TOPRGU_BASE   (0x10212000)
#define TOPCKGEN_BASE (0x1001B000)
#define CORTEXA7MP_BASE (0x10220000)
#define GDMA_BASE (0x10217C00)

/*
 *  Not inside DE memory map
 */
#define GIC_BASE			0x0C000000
#define INTER_SRAM			0x00100000

/*
 * Base on memory_map_to_reg_base_H.py
 */

/* SRAMROM */
#define ROM_BASE			0x00000000
/* SRAMROM */
#define RAM_BASE			0x00100000
/* L2C */
#define L2C_BASE			0x00200000
/* HW_VER CID */
#define HW_VER_CID_BASE			0x08000000
/* DEBUGSYS */
#define DEBUGSYS_BASE			0x0D000000
/* INFRA_CFG_AO */
#define INFRACFG_AO_BASE		0x10001000
/* INFRA_CFG_AO_MEM */
#define INFRACFG_AO_MEM_BASE		0x10002000
/* PERICFG_AO */
#define PERICFG_AO_BASE			0x10003000
/* APXGPT */
#define APXGPT_BASE			0x10008000
/* Reserved */
#define RESERVED_BASE			0x10009000
/* AP_CIRQ_ENIT_APB */
#define AP_CIRQ_ENIT_APB_BASE		0x1000B000
/* SYS_TIMER */
#define SYS_TIMER_BASE			0x10017000
#define CKSYS_CKCTRL_BASE		0x1001B000
#define CKSYS_TOPRGU_BASE		0x1001C000
#define CKSYS_DRM_BASE			0x1001D000
#define APMIXEDSYS_BASE			0x1001E000
/* GPIO */
#define GPIO_BASE			0x1001F000
/* Pinmux0 */
#define PINMUX0_BASE			0x10021000
/* Pinmux1 */
#define PINMUX1_BASE			0x10022000
/* PWM */
#define PWM_BASE			0x10048000
/* SGMII_SBUS0 */
#define SGMII_SBUS0_BASE		0x10060000
/* SGMII_SBUS1 */
#define SGMII_SBUS1_BASE		0x10070000
/* SYS_CIRQ */
#define SYS_CIRQ_BASE			0x10204000
/* INFRACFG_PDN */
#define INFRACFG_PDN_BASE		0x1020E000
/* CQ_DMA */
#define CQ_DMA_BASE			0x10212000
/* SRAMROM_APB */
#define SRAMROM_APB_BASE		0x10214000
/* AP_DMA */
#define AP_DMA_BASE			0x10217000
/* EMI_APB */
#define EMI_APB_BASE			0x10219000
/* INFRACFG_MEM_APB */
#define INFRACFG_MEM_APB_BASE		0x1021C000
/* EMI_FAKE_ENGINE0 */
#define EMI_FAKE_ENGINE0_BASE		0x10225000
/* EMI_MPU_APB */
#define EMI_MPU_APB_BASE		0x10226000
/* EMI_FAKE_ENGINE1 */
#define EMI_FAKE_ENGINE1_BASE		0x10227000
/* DRAMC_CH0 */
#define DRAMC_CH0_BASE			0x10230000
/* DRAMC_CH1 */
#define DRAMC_CH1_BASE			0x10240000
/* TRNG */
#define TRNG_BASE			0x1020f000
/* EIP97 */
#define EIP97_BASE			0x10320000
/* MCUSYS_CFGREG_APB */
#define MCUSYS_CFGREG_APB_BASE		0x10390000
/* MCUSYS_CFGREG_APB-1 */
#define MCUSYS_CFGREG_APB_1_BASE	0x10400000
#define MCUCFG_BASE			MCUSYS_CFGREG_APB_1_BASE
/* UART0 */
#define UART0_BASE			0x11002000
/* UART1 */
#define UART1_BASE			0x11003000
/* UART2 */
#define UART2_BASE			0x11004000
/* NFI */
#define NFI_BASE			0x11005000
/* NFI_ECC */
#define NFI_ECC_BASE			0x11006000
/* I2C */
#define I2C_BASE			0x11008000
/* SPI0 */
#define SPI0_BASE			0x1100A000
/* SPI1 */
#define SPI1_BASE			0x1100B000
/* PTP_THERM_CTRL */
#define PTP_THERM_CTRL_BASE		0x1100C000
/* AUXADC */
#define AUXADC_BASE			0x1100D000
/* AUDIO_S */
#define AUDIO_S_BASE			0x11210000
/* AUDIO_S-1 */
#define AUDIO_S_1_BASE			0x11219000
/* MDSC0 */
#define MSDC0_BASE			0x11230000
/* EAST0 */
#define PCIE_PHYD_L0_BASE		0x11C00000
/* EAST1 */
#define PCIE_PHYD_L1_BASE		0x11C10000
/* MDSC0 TOP */
#define MSDC0_TOP_BASE			0x11C20000
/* IOCFG */
#define IOCFG_RT_BASE			0x11C30000
#define IOCFG_RB_BASE			0x11C40000
/* WEST0 */
#define EFUSE_CONTROLLER_BASE		0x11E00000
/* WEST1 */
#define USB_PHYD_BASE			0x11E10000
/* TOP Misc */
#define TOP_MISC_BASE			0x11D10000
/* NETSYS1 */
#define NETSYS1_BASE			0x15000000
/* NETSYS2 */
#define NETSYS2_BASE			0x15180000
/* NETSYS3 */
#define NETSYS3_BASE			0x1518C000
/* NETSYS4 */
#define NETSYS4_BASE			0x151C0000
/* CONNSYS */
#define CONNSYS_BASE			0x18000000
/* DEVAPC_FMEM_AO */
#define DEVAPC_FMEM_AO_BASE		0x1A0F0000
/* DEVAPC_INFRA_AO */
#define DEVAPC_INFRA_AO_BASE		0x1A100000
/* DEVAPC_INFRA_PDN */
#define DEVAPC_INFRA_PDN_BASE		0x1A110000
/* IOCFG */
#define IOCFG_LT_BASE			0x11E20000
#define IOCFG_LB_BASE			0x11E30000
#define IOCFG_TR_BASE			0x11F00000
#define IOCFG_TL_BASE			0x11F10000
