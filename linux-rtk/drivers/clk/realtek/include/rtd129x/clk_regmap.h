#ifndef __CLK_REALTEK_REGMAP_RTD129X_H
#define __CLK_REALTEK_REGMAP_RTD129X_H

#define CLOCK_ENABLE1                   (0x00C)
#define CLOCK_ENABLE2                   (0x010)
#define GROUP1_CK_SEL                   (0x018)
#define PLL_DIV                         (0x030)
#define VE_CKSEL                        (0x04C)
#define PLL_VE1_1                       (0x114)
#define PLL_VE1_2                       (0x118)
#define PLL_DDSA1                       (0x120)
#define PLL_DDSA2                       (0x128)
#define PLL_DDSB1                       (0x174)
#define PLL_DDSB2                       (0x178)
#define PLL_GPU1                        (0x1C0)
#define PLL_GPU2                        (0x1C4)
#define PLL_VE2_1                       (0x1D0)
#define PLL_VE2_2                       (0x1D4)
#define PLL_SSC_DIG_SCPU0               (0x500)
#define PLL_SSC_DIG_SCPU1               (0x504)
#define PLL_SSC_DIG_SCPU2               (0x508)
#define PLL_SSC_DIG_SCPU3               (0x50C)
#define PLL_SSC_DIG_SCPU4               (0x510)
#define PLL_SSC_DIG_SCPU5               (0x514)
#define PLL_SSC_DIG_SCPU_DBG1           (0x518)
#define PLL_SSC_DIG_SCPU_DBG2           (0x51C)
#define PLL_SSC_DIG_BUS0                (0x520)
#define PLL_SSC_DIG_BUS1                (0x524)
#define PLL_SSC_DIG_BUS2                (0x528)
#define PLL_SSC_DIG_BUS3                (0x52C)
#define PLL_SSC_DIG_BUS4                (0x530)
#define PLL_SSC_DIG_BUS5                (0x534)
#define PLL_SSC_DIG_BUS_DBG1            (0x538)
#define PLL_SSC_DIG_BUS_DBG2            (0x53C)
#define PLL_SSC_DIG_BUSH0               (0x540)
#define PLL_SSC_DIG_BUSH1               (0x544)
#define PLL_SSC_DIG_BUSH2               (0x548)
#define PLL_SSC_DIG_BUSH3               (0x54C)
#define PLL_SSC_DIG_BUSH4               (0x550)
#define PLL_SSC_DIG_BUSH5               (0x554)
#define PLL_SSC_DIG_BUSH_DBG1           (0x558)
#define PLL_SSC_DIG_BUSH_DBG2           (0x55C)
#define PLL_SSC_DIG_DDSA0               (0x560)
#define PLL_SSC_DIG_DDSA1               (0x564)
#define PLL_SSC_DIG_DDSA2               (0x568)
#define PLL_SSC_DIG_DDSA3               (0x56C)
#define PLL_SSC_DIG_DDSA4               (0x570)
#define PLL_SSC_DIG_DDSA5               (0x574)
#define PLL_SSC_DIG_DDSA_DBG1           (0x578)
#define PLL_SSC_DIG_DDSA_DBG2           (0x57C)
#define PLL_SSC_DIG_DDSB0               (0x580)
#define PLL_SSC_DIG_DDSB1               (0x584)
#define PLL_SSC_DIG_DDSB2               (0x588)
#define PLL_SSC_DIG_DDSB3               (0x58C)
#define PLL_SSC_DIG_DDSB4               (0x590)
#define PLL_SSC_DIG_DDSB5               (0x594)
#define PLL_SSC_DIG_DDSB_DBG1           (0x598)
#define PLL_SSC_DIG_DDSB_DBG2           (0x59C)
#define PLL_SSC_DIG_GPU0                (0x5A0)
#define PLL_SSC_DIG_GPU1                (0x5A4)
#define PLL_SSC_DIG_GPU2                (0x5A8)
#define PLL_SSC_DIG_GPU3                (0x5AC)
#define PLL_SSC_DIG_GPU4                (0x5B0)
#define PLL_SSC_DIG_GPU5                (0x5B4)
#define PLL_SSC_DIG_GPU_DBG1            (0x5B8)
#define PLL_SSC_DIG_GPU_DBG2            (0x5BC)

/* PLL_DIV */
#define SCPU_FREQ_SEL_SHIFT             (7)
#define SCPU_FREQ_SEL_WIDTH             (2)
#define SCPU_FREQ_DIV1                  (0)
#define SCPU_FREQ_DIV2                  (2)
#define SCPU_FREQ_DIV4                  (3)

#define BUS_FREQ_SEL_SHIFT              (0)
#define BUS_FREQ_SEL_WIDTH              (1)
#define BUS_FREQ_DIV1                   (0)
#define BUS_FREQ_DIV2                   (1)

/* VE_CKSEL */
#define CLK_VE2_BPU_SEL_SHIFT           (8)
#define CLK_VE2_BPU_SEL_WIDTH           (2)
#define CLK_VE3_SEL_SHIFT               (4)
#define CLK_VE3_SEL_WIDTH               (2)
#define CLK_VE2_SEL_SHIFT               (2)
#define CLK_VE2_SEL_WIDTH               (2)
#define CLK_VE1_SEL_SHIFT               (0)
#define CLK_VE1_SEL_WIDTH               (2)

#endif