/*
 *  Hamlib Skanti backend - main header
 *  Copyright (c) 2004 by Stephane Fillod
 *
 *	$Id: skanti.h,v 1.1 2004-08-18 18:51:24 fillods Exp $
 *
 *   This library is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU Library General Public License as
 *   published by the Free Software Foundation; either version 2 of
 *   the License, or (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU Library General Public License for more details.
 *
 *   You should have received a copy of the GNU Library General Public
 *   License along with this library; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#ifndef _SKANTI_H
#define _SKANTI_H 1

#include <hamlib/rig.h>

int skanti_reset(RIG *rig, reset_t reset);
int skanti_set_freq(RIG *rig, vfo_t vfo, freq_t freq);
int skanti_set_mode(RIG *rig, vfo_t vfo, rmode_t mode, pbwidth_t width);
int skanti_set_split_freq(RIG *rig, vfo_t vfo, freq_t tx_freq);
int skanti_set_level(RIG *rig, vfo_t vfo, setting_t level, value_t val);
int skanti_set_ptt(RIG *rig, vfo_t vfo, ptt_t ptt);
int skanti_vfo_op(RIG *rig, vfo_t vfo, vfo_op_t op);

extern const struct rig_caps trp8000_caps;

#endif /* _SKANTI_H */
