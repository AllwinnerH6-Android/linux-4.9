/**
 * Copyright (C) 2015-2017 Allwinner Technology Limited. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * Author: Albert Yu <yuxyun@allwinnertech.com>
 */

#ifndef _MALI_SUN8I_W17P1_H_
#define _MALI_SUN8I_W17P1_H_

#define GPU_POWER_GATING_REG 0x07010254

aw_private_data aw_private = {
#ifdef CONFIG_MALI_DT
	.np_gpu        = NULL,
#endif /* CONFIG_MALI_DT */
	.tempctrl      = {
		.temp_ctrl_status = 1,
	},
	.pm            = {
		.regulator      = NULL,
		.regulator_id   = "vdd-gpu",
		.clk[0]         = {
			.clk_name       = "pll",
		#ifndef CONFIG_MALI_DT
			.clk_id         = PLL_GPU_CLK,
		#endif
			.clk_handle     = NULL,
		},
		.clk[1]         = {
			.clk_name       = "mali",
		#ifndef CONFIG_MALI_DT
			.clk_id         = GPU_CLK,
		#endif
			.clk_handle     = NULL,
		},
		.vf_table[0]   = {
			.vol  = 0,
			.freq = 144,
		},
		.vf_table[1]   = {
			.vol  = 1100,
			.freq = 240,
		},
		.vf_table[2]   = {
			.vol  = 1100,
			.freq = 312,
		},
		.vf_table[3]   = {
			.vol  = 1100,
			.freq = 360,
		},
		.dvfs_status       = 0,
		.begin_level       = 3,
		.max_level         = 3,
		.scene_ctrl_cmd    = 0,
		.scene_ctrl_status = 1,
		.independent_pow   = 1,
		.dvm               = 0,
	},
	.debug           = {
		.enable      = 0,
		.frequency   = 0,
		.voltage     = 0,
		.tempctrl    = 0,
		.dvfs        = 0,
		.level       = 0,
	}
};

#endif /* _MALI_SUN8I_W17P1_H_ */
