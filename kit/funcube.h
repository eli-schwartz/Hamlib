/*
 *  Hamlib KIT backend - FUNcube Dongle USB tuner description
 *  Copyright (c) 2009-2010 by Stephane Fillod
 *
 *  Derived from usbsoftrock-0.5:
 *  Copyright (C) 2009 Andrew Nilsson (andrew.nilsson@gmail.com)
 *
 *  Author: Stefano Speretta, Innovative Solutions In Space BV
 *
 *   This library is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as
 *   published by the Free Software Foundation; either version 2 of
 *   the License, or (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public
 *   License along with this library; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef _FUNCUBE_H
#define _FUNCUBE_H 1

#define VID									0x04D8
#define PID									0xFB56
#define VENDOR_NAME							"Hanlincrest Ltd.         "
#define PRODUCT_NAME						"FunCube Dongle V0.0  "

#define FUNCUBE_INTERFACE					0x02
#define FUNCUBE_CONFIGURATION				0x00
#define FUNCUBE_ALTERNATIVE_SETTING			0x00

#define INPUT_ENDPOINT						0x82
#define OUTPUT_ENDPOINT						0x02

// Commands
#define REQUEST_SET_FREQ					0x64

#endif	/* _FUNCUBE_H */
