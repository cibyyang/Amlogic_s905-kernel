/*
 * drivers/amlogic/media/vout/hdmitx/hdmi_tx_20/hw/common.h
 *
 * Copyright (C) 2017 Amlogic, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 */

#ifndef __HDMITX_HW_COMMON_H__
#define __HDMITX_HW_COMMON_H__

#include <linux/amlogic/media/vout/hdmi_tx/hdmi_tx_ddc.h>
#include <linux/amlogic/media/vout/hdmi_tx/hdmi_common.h>
#include "mach_reg.h"
#include "hdmi_tx_reg.h"
/*
 * HDMITX HPD HW related operations
 */
enum hpd_op {
	HPD_INIT_DISABLE_PULLUP,
	HPD_INIT_SET_FILTER,
	HPD_IS_HPD_MUXED,
	HPD_MUX_HPD,
	HPD_UNMUX_HPD,
	HPD_READ_HPD_GPIO,
};

int hdmitx_hpd_hw_op_gxbb(enum hpd_op cmd);
int read_hpd_gpio_gxbb(void);
int hdmitx_ddc_hw_op_gxbb(enum ddc_op cmd);

int hdmitx_hpd_hw_op_gxtvbb(enum hpd_op cmd);
int read_hpd_gpio_gxtvbb(void);
int hdmitx_ddc_hw_op_gxtvbb(enum ddc_op cmd);

int hdmitx_hpd_hw_op_gxl(enum hpd_op cmd);
int read_hpd_gpio_gxl(void);
int hdmitx_ddc_hw_op_gxl(enum ddc_op cmd);
void set_gxl_hpll_clk_out(unsigned int frac_rate, unsigned int clk);
void set_hpll_sspll_gxl(enum hdmi_vic vic);
void set_hpll_od1_gxl(unsigned int div);
void set_hpll_od2_gxl(unsigned int div);
void set_hpll_od3_gxl(unsigned int div);

#endif
