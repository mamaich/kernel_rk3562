/* SPDX-License-Identifier: GPL-2.0-only */
#ifndef __SOC_ROCKCHIP_RK3566T_H
#define __SOC_ROCKCHIP_RK3566T_H

#include <linux/device.h>

#if IS_ENABLED(CONFIG_ROCKCHIP_RK3566T)
bool rockchip_soc_is_rk3566t(void);
void rockchip_rk3566t_detect_from_cpuinfo(struct device *dev);
void rockchip_rk3566t_adjust_cpu_opps(struct device *cpu_dev);
void rockchip_rk3566t_adjust_gpu_opps(struct device *gpu_dev);
#else
static inline bool rockchip_soc_is_rk3566t(void)
{
	return false;
}

static inline void rockchip_rk3566t_detect_from_cpuinfo(struct device *dev)
{
}

static inline void rockchip_rk3566t_adjust_cpu_opps(struct device *cpu_dev)
{
}

static inline void rockchip_rk3566t_adjust_gpu_opps(struct device *gpu_dev)
{
}
#endif

#endif
