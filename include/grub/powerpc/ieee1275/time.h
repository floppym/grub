/*
 *  GRUB  --  GRand Unified Bootloader
 *  Copyright (C) 2003 Marco Gerards <metgerards@student.han.nl>
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
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef KERNEL_TIME_HEADER
#define KERNEL_TIME_HEADER	1

#ifdef GRUB_UTIL
# include <time.h>
# define GRUB_TICKS_PER_SECOND	CLOCKS_PER_SEC
#else
# define GRUB_TICKS_PER_SECOND	18
#endif

/* Return the real time in ticks.  */
grub_uint32_t grub_get_rtc (void);

#endif /* ! KERNEL_TIME_HEADER */
