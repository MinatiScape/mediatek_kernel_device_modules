/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2021 MediaTek Inc.
 */

#ifndef __MTK_MMINFRA_DEBUG_H
#define __MTK_MMINFRA_DEBUG_H

#if IS_ENABLED(CONFIG_MTK_MMINFRA)

int mtk_mminfra_dbg_hang_detect(const char *user);

void mtk_mminfra_off_gipc(void);

#else

static inline int mtk_mminfra_dbg_hang_detect(const char *user)
{
	return 0;
}

static inline void mtk_mminfra_off_gipc(void) { }

#endif /* CONFIG_MTK_MMINFRA */

#endif /* __MTK_MMINFRA_DEBUG_H */
