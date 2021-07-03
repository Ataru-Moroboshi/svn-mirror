/*
 * render1x2.h - Implementation of framebuffer to physical screen copy
 *
 * Written by
 *  John Selck <graham@cruise.de>
 *  Andreas Boose <viceteam@t-online.de>
 *
 * This file is part of VICE, the Versatile Commodore Emulator.
 * See README for copyright notice.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307  USA.
 *
 */

#ifndef VICE_RENDER_COMMON_H
#define VICE_RENDER_COMMON_H

#include "types.h"
#include "video.h"

void render_source_line(uint32_t *tmptrg, const uint8_t *tmpsrc, const uint32_t *colortab,
                        unsigned int wstart, unsigned int wfast, unsigned int wend);

void render_source_line_2x(uint32_t *tmptrg, const uint8_t *tmpsrc, const uint32_t *colortab,
                           unsigned int wstart, unsigned int wfast, unsigned int wend,
                           unsigned int wfirst, unsigned int wlast);

void render_solid_line(uint32_t *tmptrg, const uint8_t *tmpsrc, const uint32_t color,
                       unsigned int wstart, unsigned int wfast, unsigned int wend);

void render_solid_line_2x(uint32_t *tmptrg, const uint8_t *tmpsrc, const uint32_t color,
                          unsigned int wstart, unsigned int wfast, unsigned int wend,
                          unsigned int wfirst, unsigned int wlast);
                       
#endif
