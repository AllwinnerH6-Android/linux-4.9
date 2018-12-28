/*
 * combo rx module
 *
 * Copyright (c) 2017 by Allwinnertech Co., Ltd.  http://www.allwinnertech.com
 *
 * Authors:  Zhao Wei <zhaowei@allwinnertech.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __COMBO_RX_REG_I_H__
#define __COMBO_RX_REG_I_H__

#define CSIC_COMBO0				0x0660C000
#define CSIC_COMBO1				0x0660E000

/*
 * Detail information of registers----MIPI
 */
#define CMB_MODE_SEL_REG_OFF			0x000
#define CMB_MODULE_EN				0
#define CMB_MODULE_EN_MASK			(0x1 << CMB_MODULE_EN)

#define CMB_MODE_SEL				4
#define CMB_MODE_SEL_MASK			(0x7 << CMB_MODE_SEL)

#define CMB_WDR_MODE_SEL			8
#define CMB_WDR_MODE_SEL_MASK			(0x3 << CMB_WDR_MODE_SEL)

#define CMB_FID_MODE_SEL			11
#define CMB_FID_MODE_SEL_MASK			(0x3 << CMB_FID_MODE_SEL)

#define CMB_WDR_FIDMAP_SEL_EN			12
#define CMB_WDR_FIDMAP_SEL_EN_MASK		(0xF << CMB_WDR_FIDMAP_SEL_EN)

#define CMB_WDR_FIDMAP_SEL_0			16
#define CMB_WDR_FIDMAP_SEL_0_MASK		(0xF << CMB_WDR_FIDMAP_SEL_0)

#define CMB_WDR_FIDMAP_SEL_1			20
#define CMB_WDR_FIDMAP_SEL_1_MASK		(0xF << CMB_WDR_FIDMAP_SEL_1)

#define CMB_WDR_FIDMAP_SEL_2			24
#define CMB_WDR_FIDMAP_SEL_2_MASK		(0xF << CMB_WDR_FIDMAP_SEL_2)

#define CMB_WDR_FIDMAP_SEL_3			28
#define CMB_WDR_FIDMAP_SEL_3_MASK		(0xF << CMB_WDR_FIDMAP_SEL_3)

#define CMB_APP_PIXEL_OUT_REG_OFF		0x004
#define CMB_APP_PIXEL_OUT_SEL			0
#define CMB_APP_PIXEL_OUT_SEL_MASK		(0x3 << CMB_APP_PIXEL_OUT_SEL)

#define CMB_EMBD_DAT_OUT_EN			4
#define CMB_EMBD_DAT_OUT_EN_MASK		(0x1 << CMB_EMBD_DAT_OUT_EN)

#define CMB_MIPI_DPHY_CTR_REG_OFF		0x008
#define CMB_DPHY_CLK_SEL			0
#define CMB_DPHY_CLK_SEL_MASK			(0x3 << CMB_DPHY_CLK_SEL)

#define CMB_DPHY_LANE_NUM			4
#define CMB_DPHY_LANE_NUM_MASK			(0x3 << CMB_DPHY_LANE_NUM)

#define CMB_DPHY_MSB_FIRST_SEL			8
#define CMB_DPHY_MSB_FIRST_SEL_MASK		(0x1 << CMB_DPHY_MSB_FIRST_SEL)

#define CMB_DPHY_LP_MODE_CTR			9
#define CMB_DPHY_LP_MODE_CTR_MASK		(0x1 << CMB_DPHY_LP_MODE_CTR)

#define CMB_MIPI_DPHY_LANE_MAPPING_REG_OFF	0x00C
#define CMB_DPHY_INTERNAL_LANE0			0
#define CMB_DPHY_INTERNAL_LANE0_MASK		(0x3 << CMB_DPHY_INTERNAL_LANE0)

#define CMB_DPHY_INTERNAL_LANE1			4
#define CMB_DPHY_INTERNAL_LANE1_MASK		(0x3 << CMB_DPHY_INTERNAL_LANE1)

#define CMB_DPHY_INTERNAL_LANE2			8
#define CMB_DPHY_INTERNAL_LANE2_MASK		(0x3 << CMB_DPHY_INTERNAL_LANE2)

#define CMB_DPHY_INTERNAL_LANE3			12
#define CMB_DPHY_INTERNAL_LANE3_MASK		(0x3 << CMB_DPHY_INTERNAL_LANE3)

#define CMB_MIPI_VMODE_REG_OFF			0x010
#define CMB_MIPI_VMODE				0
#define CMB_MIPI_VMODE_MASK			(0x1 << CMB_MIPI_VMODE)

#define CMB_MIPI_VC0_HEIGH_REG_OFF		0x014
#define CMB_MIPI_VC0_HIGHT			0
#define CMB_MIPI_VC0_HIGHT_MASK			(0x3FFF << CMB_MIPI_VC0_HIGHT)

#define CMB_MIPI_VC1_HEIGH_REG_OFF		0x018
#define CMB_MIPI_VC1_HIGHT			0
#define CMB_MIPI_VC1_HIGHT_MASK			(0x3FFF << CMB_MIPI_VC1_HIGHT)

#define CMB_MIPI_VC2_HEIGH_REG_OFF		0x01C
#define CMB_MIPI_VC2_HIGHT			0
#define CMB_MIPI_VC2_HIGHT_MASK			(0x3FFF << CMB_MIPI_VC2_HIGHT)

#define CMB_MIPI_VC3_HEIGH_REG_OFF		0x020
#define CMB_MIPI_VC3_HIGHT			0
#define CMB_MIPI_VC3_HIGHT_MASK			(0x3FFF << CMB_MIPI_VC3_HIGHT)

#define CMB_MIP_CSI2_STATUS_REG_OFF		0x100	/*Only read*/
#define CMB_MIPI_CSI2_PAYLOAD_STATUS		0
#define CMB_MIPI_CSI2_PAYLOAD_STATUS_MASK	(0x7 << CMB_MIPI_CSI2_PAYLOAD_STATUS)

#define CMB_MIP_CSI2_DATA_ID_REG_OFF		0x104	/*Only read*/
#define CMB_MIPI_CSI2_DATA_ID			0
#define CMB_MIPI_CSI2_DATA_ID_MASK		(0xFF << CMB_MIPI_CSI2_DATA_ID)

#define CMB_MIP_CSI2_WORD_CNT_REG_OFF		0x108	/*Only read*/
#define CMB_MIPI_CSI2_WORD_CNT			0
#define CMB_MIPI_CSI2_WORD_CNT_MASK		(0xFFFF << CMB_MIPI_CSI2_WORD_CNT)

#define CMB_MIP_CSI2_ECC_VAL_REG_OFF		0x10C	/*Only read*/
#define CMB_MIPI_CSI2_ECC_VAL			0
#define CMB_MIPI_CSI2_ECC_VAL_MASK		(0xFF << CMB_MIPI_CSI2_ECC_VAL)

#define CMB_MIP_CSI2_LINE_LENTGH_REG_OFF	0x110	/*Only read*/
#define CMB_MIPI_CSI2_LINE_LENTGH		0
#define CMB_MIPI_CSI2_LINE_LENTGH_MASK		(0xFFFF << CMB_MIPI_CSI2_LINE_LENTGH)

#define CMB_MIP_CSI2_RCV_CNT_REG_OFF		0x114	/*Only read*/
#define CMB_MIPI_CSI2_RCV_CNT			0
#define CMB_MIPI_CSI2_RCV_CNT_MASK		(0xFFFF << CMB_MIPI_CSI2_RCV_CNT)

#define CMB_MIP_CSI2_ECC_ERR_CNT_REG_OFF	0x118	/*Only read*/
#define CMB_MIPI_CSI2_ECC_ERR_CNT		0
#define CMB_MIPI_CSI2_ECC_ERR_CNT_MASK		(0xFFFF << CMB_MIPI_CSI2_ECC_ERR_CNT)

#define CMB_MIP_CSI2_CHECK_SUM_ERR_CNT_REG_OFF	0x11C	/*Only read*/
#define CMB_MIPI_CSI2_CHECK_SUM_ERR_CNT		0
#define CMB_MIPI_CSI2_CHECK_SUM_ERR_CNT_MASK	(0xFFFF << CMB_MIPI_CSI2_CHECK_SUM_ERR_CNT)


/*
 * Detail information of registers----LVDS
 */

#define CMB_LVDS_CTR_REG_OFF			0x200
#define CMB_LVDS_CLK_SEL			0
#define CMB_LVDS_CLK_SEL_MASK			(0xF << CMB_LVDS_CLK_SEL)

#define CMB_LVDS_REC_DIRECT			4
#define CMB_LVDS_REC_DIRECT_MASK		(0x1 << CMB_LVDS_REC_DIRECT)

#define CMB_LVDS_MSB_FIRST_SEL			5
#define CMB_LVDS_MSB_FIRST_SEL_MASK		(0x1 << CMB_LVDS_MSB_FIRST_SEL)

#define CMB_LVDS_LANE_NUM			8
#define CMB_LVDS_LANE_NUM_MASK			(0xF << CMB_LVDS_LANE_NUM)

#define CMB_LVDS_MODE_SEL			12
#define CMB_LVDS_MODE_SEL_MASK			(0x1 << CMB_LVDS_MODE_SEL)

#define CMB_LVDS_BIT_WIDTH_SEL			16
#define CMB_LVDS_BIT_WIDTH_SEL_MASK		(0x7 << CMB_LVDS_BIT_WIDTH_SEL)

#define CMB_LVDS_SYNC_LINE_CODE_MODE_SEL	20
#define CMB_LVDS_SYNC_LINE_CODE_MODE_SEL_MASK	(0x1 << CMB_LVDS_SYNC_LINE_CODE_MODE_SEL)

#define CMB_LVDS_PIX_LSB			21
#define CMB_LVDS_PIX_LSB_MASK			(0x1 << CMB_LVDS_PIX_LSB)

#define CMB_LVDS_SYNC_CODE_LINE_CNT		24
#define CMB_LVDS_SYNC_CODE_LINE_CNT_MASK	(0x7 << CMB_LVDS_SYNC_CODE_LINE_CNT)

#define CMB_LVDS_SYNC_CODE_WD4_SEL		28
#define CMB_LVDS_SYNC_CODE_WD4_SEL_MASK		(0xF << CMB_LVDS_SYNC_CODE_WD4_SEL)

#define CMB_LVDS_LANE_MAPPING0_REG_OFF		0x204
#define CMB_LVDS_LANE0_MAPPING			0
#define CMB_LVDS_LANE0_MAPPING_MASK		(0xF << CMB_LVDS_LANE0_MAPPING)

#define CMB_LVDS_LANE1_MAPPING			8
#define CMB_LVDS_LANE1_MAPPING_MASK		(0xF << CMB_LVDS_LANE1_MAPPING)

#define CMB_LVDS_LANE2_MAPPING			16
#define CMB_LVDS_LANE2_MAPPING_MASK		(0xF << CMB_LVDS_LANE2_MAPPING)

#define CMB_LVDS_LANE3_MAPPING			24
#define CMB_LVDS_LANE3_MAPPING_MASK		(0xF << CMB_LVDS_LANE3_MAPPING)

#define CMB_LVDS_LANE_MAPPING1_REG_OFF		0x208
#define CMB_LVDS_LANE4_MAPPING			0
#define CMB_LVDS_LANE4_MAPPING_MASK		(0xF << CMB_LVDS_LANE4_MAPPING)

#define CMB_LVDS_LANE5_MAPPING			8
#define CMB_LVDS_LANE5_MAPPING_MASK		(0xF << CMB_LVDS_LANE5_MAPPING)

#define CMB_LVDS_LANE6_MAPPING			16
#define CMB_LVDS_LANE6_MAPPING_MASK		(0xF << CMB_LVDS_LANE6_MAPPING)

#define CMB_LVDS_LANE7_MAPPING			24
#define CMB_LVDS_LANE7_MAPPING_MASK		(0xF << CMB_LVDS_LANE7_MAPPING)

#define CMB_LVDS_LANE_MAPPING2_REG_OFF		0x20C
#define CMB_LVDS_LANE8_MAPPING			0
#define CMB_LVDS_LANE8_MAPPING_MASK		(0xF << CMB_LVDS_LANE8_MAPPING)

#define CMB_LVDS_LANE9_MAPPING			8
#define CMB_LVDS_LANE9_MAPPING_MASK		(0xF << CMB_LVDS_LANE9_MAPPING)

#define CMB_LVDS_LANE10_MAPPING			16
#define CMB_LVDS_LANE10_MAPPING_MASK		(0xF << CMB_LVDS_LANE10_MAPPING)

#define CMB_LVDS_LANE11_MAPPING			24
#define CMB_LVDS_LANE11_MAPPING_MASK		(0xF << CMB_LVDS_LANE11_MAPPING)


/*
 * Detail information of registers----LVDS-SOF EOF SOL EOL
 */

/*LVDS LANE0*/
#define CMB_LVDS_LANE0_SOF_SET0_REG_OFF		0x210
#define CMB_LVDS_LANE0_SOF_SET1_REG_OFF		0x214
#define CMB_LVDS_LANE0_SOL_SET0_REG_OFF		0x218
#define CMB_LVDS_LANE0_SOL_SET1_REG_OFF		0x21C
#define CMB_LVDS_LANE0_EOL_SET0_REG_OFF		0x220
#define CMB_LVDS_LANE0_EOL_SET1_REG_OFF		0x224
#define CMB_LVDS_LANE0_EOF_SET0_REG_OFF		0x228
#define CMB_LVDS_LANE0_EOF_SET1_REG_OFF		0x22C

/*LVDS LANE1*/
#define CMB_LVDS_LANE1_SOF_SET0_REG_OFF		0x230
#define CMB_LVDS_LANE1_SOF_SET1_REG_OFF		0x234
#define CMB_LVDS_LANE1_SOL_SET0_REG_OFF		0x238
#define CMB_LVDS_LANE1_SOL_SET1_REG_OFF		0x23C
#define CMB_LVDS_LANE1_EOL_SET0_REG_OFF		0x240
#define CMB_LVDS_LANE1_EOL_SET1_REG_OFF		0x244
#define CMB_LVDS_LANE1_EOF_SET0_REG_OFF		0x248
#define CMB_LVDS_LANE1_EOF_SET1_REG_OFF		0x24C

/*LVDS LANE2*/
#define CMB_LVDS_LANE2_SOF_SET0_REG_OFF		0x250
#define CMB_LVDS_LANE2_SOF_SET1_REG_OFF		0x254
#define CMB_LVDS_LANE2_SOL_SET0_REG_OFF		0x258
#define CMB_LVDS_LANE2_SOL_SET1_REG_OFF		0x25C
#define CMB_LVDS_LANE2_EOL_SET0_REG_OFF		0x260
#define CMB_LVDS_LANE2_EOL_SET1_REG_OFF		0x264
#define CMB_LVDS_LANE2_EOF_SET0_REG_OFF		0x268
#define CMB_LVDS_LANE2_EOF_SET1_REG_OFF		0x26C

/*LVDS LANE3*/
#define CMB_LVDS_LANE3_SOF_SET0_REG_OFF		0x270
#define CMB_LVDS_LANE3_SOF_SET1_REG_OFF		0x274
#define CMB_LVDS_LANE3_SOL_SET0_REG_OFF		0x278
#define CMB_LVDS_LANE3_SOL_SET1_REG_OFF		0x27C
#define CMB_LVDS_LANE3_EOL_SET0_REG_OFF		0x280
#define CMB_LVDS_LANE3_EOL_SET1_REG_OFF		0x284
#define CMB_LVDS_LANE3_EOF_SET0_REG_OFF		0x288
#define CMB_LVDS_LANE3_EOF_SET1_REG_OFF		0x28C

/*LVDS LANE4*/
#define CMB_LVDS_LANE4_SOF_SET0_REG_OFF		0x290
#define CMB_LVDS_LANE4_SOF_SET1_REG_OFF		0x294
#define CMB_LVDS_LANE4_SOL_SET0_REG_OFF		0x298
#define CMB_LVDS_LANE4_SOL_SET1_REG_OFF		0x29C
#define CMB_LVDS_LANE4_EOL_SET0_REG_OFF		0x2A0
#define CMB_LVDS_LANE4_EOL_SET1_REG_OFF		0x2A4
#define CMB_LVDS_LANE4_EOF_SET0_REG_OFF		0x2A8
#define CMB_LVDS_LANE4_EOF_SET1_REG_OFF		0x2AC

/*LVDS LANE5*/
#define CMB_LVDS_LANE5_SOF_SET0_REG_OFF		0x2B0
#define CMB_LVDS_LANE5_SOF_SET1_REG_OFF		0x2B4
#define CMB_LVDS_LANE5_SOL_SET0_REG_OFF		0x2B8
#define CMB_LVDS_LANE5_SOL_SET1_REG_OFF		0x2BC
#define CMB_LVDS_LANE5_EOL_SET0_REG_OFF		0x2C0
#define CMB_LVDS_LANE5_EOL_SET1_REG_OFF		0x2C4
#define CMB_LVDS_LANE5_EOF_SET0_REG_OFF		0x2C8
#define CMB_LVDS_LANE5_EOF_SET1_REG_OFF		0x2CC

/*LVDS LANE6*/
#define CMB_LVDS_LANE6_SOF_SET0_REG_OFF		0x2D0
#define CMB_LVDS_LANE6_SOF_SET1_REG_OFF		0x2D4
#define CMB_LVDS_LANE6_SOL_SET0_REG_OFF		0x2D8
#define CMB_LVDS_LANE6_SOL_SET1_REG_OFF		0x2DC
#define CMB_LVDS_LANE6_EOL_SET0_REG_OFF		0x2E0
#define CMB_LVDS_LANE6_EOL_SET1_REG_OFF		0x2E4
#define CMB_LVDS_LANE6_EOF_SET0_REG_OFF		0x2E8
#define CMB_LVDS_LANE6_EOF_SET1_REG_OFF		0x2EC

/*LVDS LANE7*/
#define CMB_LVDS_LANE7_SOF_SET0_REG_OFF		0x2F0
#define CMB_LVDS_LANE7_SOF_SET1_REG_OFF		0x2F4
#define CMB_LVDS_LANE7_SOL_SET0_REG_OFF		0x2F8
#define CMB_LVDS_LANE7_SOL_SET1_REG_OFF		0x2FC
#define CMB_LVDS_LANE7_EOL_SET0_REG_OFF		0x300
#define CMB_LVDS_LANE7_EOL_SET1_REG_OFF		0x304
#define CMB_LVDS_LANE7_EOF_SET0_REG_OFF		0x308
#define CMB_LVDS_LANE7_EOF_SET1_REG_OFF		0x30C

/*LVDS LANE8*/
#define CMB_LVDS_LANE8_SOF_SET0_REG_OFF		0x310
#define CMB_LVDS_LANE8_SOF_SET1_REG_OFF		0x314
#define CMB_LVDS_LANE8_SOL_SET0_REG_OFF		0x318
#define CMB_LVDS_LANE8_SOL_SET1_REG_OFF		0x31C
#define CMB_LVDS_LANE8_EOL_SET0_REG_OFF		0x320
#define CMB_LVDS_LANE8_EOL_SET1_REG_OFF		0x324
#define CMB_LVDS_LANE8_EOF_SET0_REG_OFF		0x328
#define CMB_LVDS_LANE8_EOF_SET1_REG_OFF		0x32C

/*LVDS LANE9*/
#define CMB_LVDS_LANE9_SOF_SET0_REG_OFF		0x330
#define CMB_LVDS_LANE9_SOF_SET1_REG_OFF		0x334
#define CMB_LVDS_LANE9_SOL_SET0_REG_OFF		0x338
#define CMB_LVDS_LANE9_SOL_SET1_REG_OFF		0x33C
#define CMB_LVDS_LANE9_EOL_SET0_REG_OFF		0x340
#define CMB_LVDS_LANE9_EOL_SET1_REG_OFF		0x344
#define CMB_LVDS_LANE9_EOF_SET0_REG_OFF		0x348
#define CMB_LVDS_LANE9_EOF_SET1_REG_OFF		0x34C

/*LVDS LANE10*/
#define CMB_LVDS_LANE10_SOF_SET0_REG_OFF	0x350
#define CMB_LVDS_LANE10_SOF_SET1_REG_OFF	0x354
#define CMB_LVDS_LANE10_SOL_SET0_REG_OFF	0x358
#define CMB_LVDS_LANE10_SOL_SET1_REG_OFF	0x35C
#define CMB_LVDS_LANE10_EOL_SET0_REG_OFF	0x360
#define CMB_LVDS_LANE10_EOL_SET1_REG_OFF	0x364
#define CMB_LVDS_LANE10_EOF_SET0_REG_OFF	0x368
#define CMB_LVDS_LANE10_EOF_SET1_REG_OFF	0x36C

/*LVDS LANE11*/
#define CMB_LVDS_LANE11_SOF_SET0_REG_OFF	0x370
#define CMB_LVDS_LANE11_SOF_SET1_REG_OFF	0x374
#define CMB_LVDS_LANE11_SOL_SET0_REG_OFF	0x378
#define CMB_LVDS_LANE11_SOL_SET1_REG_OFF	0x37C
#define CMB_LVDS_LANE11_EOL_SET0_REG_OFF	0x380
#define CMB_LVDS_LANE11_EOL_SET1_REG_OFF	0x384
#define CMB_LVDS_LANE11_EOF_SET0_REG_OFF	0x388
#define CMB_LVDS_LANE11_EOF_SET1_REG_OFF	0x38C

/*
 * Detail information of registers----HISPI
 */

#define CMB_HISPI_CTR_REG_OFF			0x390
#define CMB_HISPI_HDR_EN			0
#define CMB_HISPI_HDR_EN_MASK			(0x1 << CMB_HISPI_HDR_EN)

#define CMB_HISPI_NORMAL_EN			4
#define CMB_HISPI_NORMAL_EN_MASK		(0x1 << CMB_HISPI_NORMAL_EN)

#define CMB_HISPI_MODE_SEL			8
#define CMB_HISPI_MODE_SEL_MASK			(0x3 << CMB_HISPI_MODE_SEL)

#define CMB_HISPI_SYNC_CODE_REG_OFF		0x394
#define CMB_HISPI_HDR_SOF_FILD			0
#define CMB_HISPI_HDR_SOF_FILD_MASK		(0xFFFF << CMB_HISPI_HDR_SOF_FILD)

#define CMB_HISPI_HDR_EOF_FILD			16
#define CMB_HISPI_HDR_EOF_FILD_MASK		(0xFFFF << CMB_HISPI_HDR_EOF_FILD)

#define CMB_HISPI_CODE_MASK_REG_OFF		0x398
#define CMB_HISPI_CODE_MASK			0
#define CMB_HISPI_CODE_MASK_MASK		(0xFFFF << CMB_HISPI_CODE_MASK)


/*
 * Detail information of registers----PHYA
 */

#define CMB_PHYA_LANE_EN_REG_OFF		0xE00
#define CMB_PHYA_A_D0_EN			0
#define CMB_PHYA_A_D0_EN_MASK			(0x1 << CMB_PHYA_A_D0_EN)
#define CMB_PHYA_B_D0_EN			1
#define CMB_PHYA_B_D0_EN_MASK			(0x1 << CMB_PHYA_B_D0_EN)
#define CMB_PHYA_C_D0_EN			2
#define CMB_PHYA_C_D0_EN_MASK			(0x1 << CMB_PHYA_C_D0_EN)

#define CMB_PHYA_A_D1_EN			4
#define CMB_PHYA_A_D1_EN_MASK			(0x1 << CMB_PHYA_A_D1_EN)
#define CMB_PHYA_B_D1_EN			5
#define CMB_PHYA_B_D1_EN_MASK			(0x1 << CMB_PHYA_B_D1_EN)
#define CMB_PHYA_C_D1_EN			6
#define CMB_PHYA_C_D1_EN_MASK			(0x1 << CMB_PHYA_C_D1_EN)

#define CMB_PHYA_A_D2_EN			8
#define CMB_PHYA_A_D2_EN_MASK			(0x1 << CMB_PHYA_A_D2_EN)
#define CMB_PHYA_B_D2_EN			9
#define CMB_PHYA_B_D2_EN_MASK			(0x1 << CMB_PHYA_B_D2_EN)
#define CMB_PHYA_C_D2_EN			10
#define CMB_PHYA_C_D2_EN_MASK			(0x1 << CMB_PHYA_C_D2_EN)

#define CMB_PHYA_A_D3_EN			12
#define CMB_PHYA_A_D3_EN_MASK			(0x1 << CMB_PHYA_A_D3_EN)
#define CMB_PHYA_B_D3_EN			13
#define CMB_PHYA_B_D3_EN_MASK			(0x1 << CMB_PHYA_B_D3_EN)
#define CMB_PHYA_C_D3_EN			14
#define CMB_PHYA_C_D3_EN_MASK			(0x1 << CMB_PHYA_C_D3_EN)

#define CMB_PHYA_A_CK_EN			16
#define CMB_PHYA_A_CK_EN_MASK			(0x1 << CMB_PHYA_A_CK_EN)
#define CMB_PHYA_B_CK_EN			17
#define CMB_PHYA_B_CK_EN_MASK			(0x1 << CMB_PHYA_B_CK_EN)
#define CMB_PHYA_C_CK_EN			18
#define CMB_PHYA_C_CK_EN_MASK			(0x1 << CMB_PHYA_C_CK_EN)

#define CMB_TE_AUTO_DISABLE			31
#define CMB_TE_AUTO_DISABLE_MASK		(0x1 << CMB_TE_AUTO_DISABLE)

#define CMB_PHYA_CTR_REG_OFF			0xE04
#define CMB_PHYA_PWDN				0
#define CMB_PHYA_PWDN_MASK			(0x1 << CMB_PHYA_PWDN)

#define CMB_PHYA_CKIN_MODE_SEL			1
#define CMB_PHYA_CKIN_MODE_SEL_MASK		(0x1 << CMB_PHYA_CKIN_MODE_SEL)

#define CMB_PHYA_BIT_SEL			2
#define CMB_PHYA_BIT_SEL_MASK			(0x3 << CMB_PHYA_BIT_SEL)

#define CMB_PHYA_OUT_CLK_POL			4
#define CMB_PHYA_OUT_CLK_POL_MASK		(0x1 << CMB_PHYA_OUT_CLK_POL)

#define CMB_PHYA_IN_CLK_POL			5
#define CMB_PHYA_IN_CLK_POL_MASK		(0x1 << CMB_PHYA_IN_CLK_POL)

#define CMB_PHYA_IRM				6
#define CMB_PHYA_IRM_MASK			(0x1 << CMB_PHYA_IRM)

#define CMB_PHYA_VRM				7
#define CMB_PHYA_VRM_MASK			(0x1 << CMB_PHYA_VRM)

#define CMB_PHYA_LP_VOL_HL			8
#define CMB_PHYA_LP_VOL_HL_MASK			(0x3 << CMB_PHYA_LP_VOL_HL)

#define CMB_PHYA_LP_VOL_LH			12
#define CMB_PHYA_LP_VOL_LH_MASK			(0x3 << CMB_PHYA_LP_VOL_LH)

#define CMB_PHYA_OFFSET_SEL			16
#define CMB_PHYA_OFFSET_SEL_MASK		(0x3 << CMB_PHYA_OFFSET_SEL)

#define CMB_PHYA_RESET_SEL			20
#define CMB_PHYA_RESET_SEL_MASK			(0x1 << CMB_PHYA_RESET_SEL)

#define CMB_PHYA_SB_SEL				21
#define CMB_PHYA_SB_SEL_MASK			(0x1 << CMB_PHYA_SB_SEL)

#define CMB_PHYA_DLY_CTR0_REG_OFF		0xE08
#define CMB_PHYA_DLY_EN				0
#define CMB_PHYA_DLY_EN_MASK			(0x1 << CMB_PHYA_DLY_EN)

#define CMB_PHYA_A_CLK_DLY_SET			8
#define CMB_PHYA_A_CLK_DLY_SET_MASK		(0x7 << CMB_PHYA_A_CLK_DLY_SET)

#define CMB_PHYA_B_CLK_DLY_SET			12
#define CMB_PHYA_B_CLK_DLY_SET_MASK		(0x7 << CMB_PHYA_B_CLK_DLY_SET)

#define CMB_PHYA_C_CLK_DLY_SET			16
#define CMB_PHYA_C_CLK_DLY_SET_MASK		(0x7 << CMB_PHYA_C_CLK_DLY_SET)

#define CMB_PHYA_A_D0_DLY_SET			20
#define CMB_PHYA_A_D0_DLY_SET_MASK		(0x7 << CMB_PHYA_A_D0_DLY_SET)

#define CMB_PHYA_B_D0_DLY_SET			24
#define CMB_PHYA_B_D0_DLY_SET_MASK		(0x7 << CMB_PHYA_B_D0_DLY_SET)

#define CMB_PHYA_C_D0_DLY_SET			28
#define CMB_PHYA_C_D0_DLY_SET_MASK		(0x7 << CMB_PHYA_C_D0_DLY_SET)

#define CMB_PHYA_DLY_CTR1_REG_OFF		0xE0C
#define CMB_PHYA_A_D1_DLY_SET			0
#define CMB_PHYA_A_D1_DLY_SET_MASK		(0x7 << CMB_PHYA_A_D1_DLY_SET)

#define CMB_PHYA_B_D1_DLY_SET			4
#define CMB_PHYA_B_D1_DLY_SET_MASK		(0x7 << CMB_PHYA_B_D1_DLY_SET)

#define CMB_PHYA_C_D1_DLY_SET			8
#define CMB_PHYA_C_D1_DLY_SET_MASK		(0x7 << CMB_PHYA_C_D1_DLY_SET)

#define CMB_PHYA_A_D2_DLY_SET			12
#define CMB_PHYA_A_D2_DLY_SET_MASK		(0x7 << CMB_PHYA_A_D2_DLY_SET)

#define CMB_PHYA_B_D2_DLY_SET			16
#define CMB_PHYA_B_D2_DLY_SET_MASK		(0x7 << CMB_PHYA_B_D2_DLY_SET)

#define CMB_PHYA_C_D2_DLY_SET			20
#define CMB_PHYA_C_D2_DLY_SET_MASK		(0x7 << CMB_PHYA_C_D2_DLY_SET)

#define CMB_PHYA_DLY_CTR2_REG_OFF		0xE10
#define CMB_PHYA_A_D3_DLY_SET			0
#define CMB_PHYA_A_D3_DLY_SET_MASK		(0x7 << CMB_PHYA_A_D3_DLY_SET)

#define CMB_PHYA_B_D3_DLY_SET			4
#define CMB_PHYA_B_D3_DLY_SET_MASK		(0x7 << CMB_PHYA_B_D3_DLY_SET)

#define CMB_PHYA_C_D3_DLY_SET			8
#define CMB_PHYA_C_D3_DLY_SET_MASK		(0x7 << CMB_PHYA_C_D3_DLY_SET)

#endif
