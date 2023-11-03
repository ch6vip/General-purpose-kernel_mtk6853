/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef _MTK_DATA_HW_ROUNDEDPATTERN_H_
#define _MTK_DATA_HW_ROUNDEDPATTERN_H_

#define ROUND_CORNER_H_TOP 168
#define ROUND_CORNER_H_BOT 163

static unsigned char top_rc_pattern[] = {
0x73, 0x0, 0x42, 0x1, 0xc5, 0x3, 0x38, 0x4, 0x42, 0x0, 0xfa, 0xf7, 0xf5, 0xf2, 0xed, 0xeb, 0xe6, 0xde, 0xd9, 0xd1, 0xc7, 0xc2, 0xb8, 0xb3, 0xab, 0xa6, 0x9e, 0x96, 0x91, 0x8c, 0x85, 0x82, 0x7d, 0x75, 0x70, 0x66, 0x61, 0x5c, 0x57, 0x52, 0x4d, 0x4e, 0x49, 0x41, 0x3c, 0x35, 0x30, 0x2d, 0x2c, 0x27, 0x22, 0x1a, 0x17, 0x12, 0xf, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xf, 0x12, 0x17, 0x1a, 0x22, 0x27, 0x2c, 0x2d, 0x30, 0x35, 0x3c, 0x41, 0x49, 0x4e, 0x4d, 0x52, 0x57, 0x5c, 0x61, 0x66, 0x70, 0x75, 0x7d, 0x82, 0x85, 0x8c, 0x91, 0x96, 0x9e, 0xa6, 0xab, 0xb3, 0xb8, 0xc2, 0xc7, 0xd1, 0xd9, 0xde, 0xe6, 0xeb, 0xed, 0xf2, 0xf5, 0xf7, 0xfa, 
0x60, 0x0, 0x37, 0x1, 0xd8, 0x3, 0x38, 0x4, 0x37, 0x0, 0xf7, 0xf2, 0xf0, 0xeb, 0xe6, 0xde, 0xd9, 0xd4, 0xcc, 0xc7, 0xc2, 0xba, 0xb3, 0xab, 0x9e, 0x96, 0x8c, 0x82, 0x7d, 0x75, 0x70, 0x66, 0x61, 0x5c, 0x57, 0x55, 0x50, 0x4e, 0x49, 0x3f, 0x3a, 0x35, 0x30, 0x2d, 0x2c, 0x27, 0x22, 0x17, 0x14, 0x12, 0xf, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xf, 0x12, 0x14, 0x17, 0x22, 0x27, 0x2c, 0x2d, 0x30, 0x35, 0x3a, 0x3f, 0x49, 0x4e, 0x50, 0x55, 0x57, 0x5c, 0x61, 0x66, 0x70, 0x75, 0x7d, 0x82, 0x8c, 0x96, 0x9e, 0xab, 0xb3, 0xba, 0xc2, 0xc7, 0xcc, 0xd4, 0xd9, 0xde, 0xe6, 0xeb, 0xf0, 0xf2, 0xf7, 
0x56, 0x0, 0x1c, 0x1, 0xe2, 0x3, 0x38, 0x4, 0x1c, 0x0, 0xf0, 0xe6, 0xd9, 0xd4, 0xcc, 0xc2, 0xb3, 0xad, 0xa0, 0x94, 0x88, 0x82, 0x75, 0x68, 0x5b, 0x54, 0x4c, 0x3d, 0x35, 0x2e, 0x26, 0x1f, 0x1c, 0x17, 0x12, 0xd, 0xa, 0x5, 0x5, 0xa, 0xd, 0x12, 0x17, 0x1c, 0x1f, 0x26, 0x2e, 0x35, 0x3d, 0x4c, 0x54, 0x5b, 0x68, 0x75, 0x82, 0x88, 0x94, 0xa0, 0xad, 0xb3, 0xc2, 0xcc, 0xd4, 0xd9, 0xe6, 0xf0, 
0x50, 0x0, 0x17, 0x1, 0xe8, 0x3, 0x38, 0x4, 0x17, 0x0, 0xd6, 0xc2, 0xb3, 0xa3, 0x99, 0x8c, 0x85, 0x75, 0x66, 0x59, 0x4d, 0x4a, 0x3d, 0x36, 0x30, 0x26, 0x1c, 0xa, 0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0xa, 0x1c, 0x26, 0x30, 0x36, 0x3d, 0x4a, 0x4d, 0x59, 0x66, 0x75, 0x85, 0x8c, 0x99, 0xa3, 0xb3, 0xc2, 0xd6, 
0x4b, 0x0, 0xf, 0x1, 0xed, 0x3, 0x38, 0x4, 0xf, 0x0, 0xd6, 0xc2, 0xa6, 0x91, 0x80, 0x73, 0x66, 0x59, 0x42, 0x33, 0x2b, 0x21, 0x1a, 0x12, 0x8, 0x8, 0x12, 0x1a, 0x21, 0x2b, 0x33, 0x42, 0x59, 0x66, 0x73, 0x80, 0x91, 0xa6, 0xc2, 0xd6, 
0x47, 0x0, 0xc, 0x1, 0xf1, 0x3, 0x38, 0x4, 0xc, 0x0, 0xd6, 0xba, 0x9c, 0x8a, 0x75, 0x59, 0x40, 0x2e, 0x21, 0x1a, 0x12, 0x3, 0x3, 0x12, 0x1a, 0x21, 0x2e, 0x40, 0x59, 0x75, 0x8a, 0x9c, 0xba, 0xd6, 
0x43, 0x0, 0x9, 0x1, 0xf5, 0x3, 0x38, 0x4, 0x9, 0x0, 0xf0, 0xd6, 0xc2, 0x8c, 0x63, 0x40, 0x2b, 0x1a, 0x8, 0x8, 0x1a, 0x2b, 0x40, 0x63, 0x8c, 0xc2, 0xd6, 0xf0, 
0x40, 0x0, 0x8, 0x1, 0xf8, 0x3, 0x38, 0x4, 0x8, 0x0, 0xe6, 0xc2, 0xa6, 0x80, 0x57, 0x38, 0x1f, 0xd, 0xd, 0x1f, 0x38, 0x57, 0x80, 0xa6, 0xc2, 0xe6, 
0x3e, 0x0, 0x6, 0x1, 0xfa, 0x3, 0x38, 0x4, 0x6, 0x0, 0xcc, 0x9e, 0x73, 0x42, 0x26, 0xd, 0xd, 0x26, 0x42, 0x73, 0x9e, 0xcc, 
0x3b, 0x0, 0x6, 0x1, 0xfd, 0x3, 0x38, 0x4, 0x6, 0x0, 0xdb, 0xad, 0x73, 0x2b, 0x12, 0x3, 0x3, 0x12, 0x2b, 0x73, 0xad, 0xdb, 
0x39, 0x0, 0x4, 0x1, 0xff, 0x3, 0x38, 0x4, 0x4, 0x0, 0xb3, 0x6e, 0x2b, 0x5, 0x5, 0x2b, 0x6e, 0xb3, 
0x37, 0x0, 0x3, 0x1, 0x1, 0x4, 0x38, 0x4, 0x3, 0x0, 0xb8, 0x54, 0xd, 0xd, 0x54, 0xb8, 
0x35, 0x0, 0x3, 0x1, 0x3, 0x4, 0x38, 0x4, 0x3, 0x0, 0xa6, 0x33, 0xd, 0xd, 0x33, 0xa6, 
0x33, 0x0, 0x3, 0x1, 0x5, 0x4, 0x38, 0x4, 0x3, 0x0, 0xa6, 0x26, 0x3, 0x3, 0x26, 0xa6, 
0x31, 0x0, 0x2, 0x1, 0x7, 0x4, 0x38, 0x4, 0x2, 0x0, 0xab, 0x33, 0x33, 0xab, 
0x2f, 0x0, 0x2, 0x1, 0x9, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x52, 0x52, 0xd9, 
0x2d, 0x0, 0x3, 0x1, 0xb, 0x4, 0x38, 0x4, 0x3, 0x0, 0xe0, 0x6b, 0x1a, 0x1a, 0x6b, 0xe0, 
0x2c, 0x0, 0x2, 0x1, 0xc, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa6, 0x33, 0x33, 0xa6, 
0x2a, 0x0, 0x3, 0x1, 0xe, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd9, 0x4d, 0xa, 0xa, 0x4d, 0xd9, 
0x28, 0x0, 0x3, 0x1, 0x10, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf2, 0x80, 0x21, 0x21, 0x80, 0xf2, 
0x27, 0x0, 0x2, 0x1, 0x11, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x40, 0x40, 0xd9, 
0x26, 0x0, 0x2, 0x1, 0x12, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb3, 0x1f, 0x1f, 0xb3, 
0x25, 0x0, 0x2, 0x1, 0x13, 0x4, 0x38, 0x4, 0x2, 0x0, 0x73, 0x14, 0x14, 0x73, 
0x24, 0x0, 0x2, 0x1, 0x14, 0x4, 0x38, 0x4, 0x2, 0x0, 0x66, 0x8, 0x8, 0x66, 
0x23, 0x0, 0x1, 0x1, 0x15, 0x4, 0x38, 0x4, 0x1, 0x0, 0x59, 0x59, 
0x22, 0x0, 0x1, 0x1, 0x16, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40, 
0x21, 0x0, 0x1, 0x1, 0x17, 0x4, 0x38, 0x4, 0x1, 0x0, 0x38, 0x38, 
0x20, 0x0, 0x1, 0x1, 0x18, 0x4, 0x38, 0x4, 0x1, 0x0, 0x33, 0x33, 
0x1f, 0x0, 0x1, 0x1, 0x19, 0x4, 0x38, 0x4, 0x1, 0x0, 0x30, 0x30, 
0x1e, 0x0, 0x1, 0x1, 0x1a, 0x4, 0x38, 0x4, 0x1, 0x0, 0x38, 0x38, 
0x1d, 0x0, 0x1, 0x1, 0x1b, 0x4, 0x38, 0x4, 0x1, 0x0, 0x2e, 0x2e, 
0x1c, 0x0, 0x1, 0x1, 0x1c, 0x4, 0x38, 0x4, 0x1, 0x0, 0x30, 0x30, 
0x1b, 0x0, 0x1, 0x1, 0x1d, 0x4, 0x38, 0x4, 0x1, 0x0, 0x33, 0x33, 
0x1a, 0x0, 0x1, 0x1, 0x1e, 0x4, 0x38, 0x4, 0x1, 0x0, 0x38, 0x38, 
0x19, 0x0, 0x1, 0x1, 0x1f, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40, 
0x18, 0x0, 0x1, 0x1, 0x20, 0x4, 0x38, 0x4, 0x1, 0x0, 0x59, 0x59, 
0x17, 0x0, 0x1, 0x2, 0x62, 0x0, 0x65, 0x0, 0x7, 0x7, 0x21, 0x4, 0x38, 0x4, 0x1, 0x0, 0x66, 0x5, 0x3b, 0x6b, 0x96, 0xba, 0xd9, 0xed, 0xed, 0xd9, 0xba, 0x96, 0x6b, 0x3b, 0x5, 0x66, 
0x16, 0x0, 0x2, 0x2, 0x5c, 0x0, 0x6b, 0x0, 0x4, 0x4, 0x22, 0x4, 0x38, 0x4, 0x2, 0x0, 0x73, 0x8, 0x12, 0x69, 0xad, 0xf2, 0xf2, 0xad, 0x69, 0x12, 0x8, 0x73, 
0x15, 0x0, 0x2, 0x2, 0x58, 0x0, 0x6f, 0x0, 0x2, 0x2, 0x23, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb3, 0x14, 0x45, 0xb0, 0xb0, 0x45, 0x14, 0xb3, 
0x14, 0x0, 0x2, 0x2, 0x56, 0x0, 0x71, 0x0, 0x2, 0x2, 0x24, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x1f, 0x54, 0xc9, 0xc9, 0x54, 0x1f, 0xd9, 
0x13, 0x0, 0x2, 0x2, 0x54, 0x0, 0x73, 0x0, 0x2, 0x2, 0x25, 0x4, 0x38, 0x4, 0x2, 0x0, 0xf2, 0x40, 0x33, 0xc7, 0xc7, 0x33, 0x40, 0xf2, 
0x13, 0x0, 0x1, 0x2, 0x52, 0x0, 0x75, 0x0, 0x2, 0x2, 0x25, 0x4, 0x38, 0x4, 0x1, 0x0, 0x80, 0xd, 0x80, 0x80, 0xd, 0x80, 
0x12, 0x0, 0x2, 0x2, 0x51, 0x0, 0x76, 0x0, 0x2, 0x2, 0x26, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x21, 0x2b, 0xc9, 0xc9, 0x2b, 0x21, 0xd9, 
0x12, 0x0, 0x1, 0x2, 0x50, 0x0, 0x77, 0x0, 0x2, 0x2, 0x26, 0x4, 0x38, 0x4, 0x1, 0x0, 0x4d, 0x47, 0xf2, 0xf2, 0x47, 0x4d, 
0x11, 0x0, 0x2, 0x2, 0x4e, 0x0, 0x79, 0x0, 0x1, 0x1, 0x27, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa6, 0xa, 0x63, 0x63, 0xa, 0xa6, 
0x10, 0x0, 0x2, 0x2, 0x4d, 0x0, 0x7a, 0x0, 0x1, 0x1, 0x28, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe0, 0x33, 0x78, 0x78, 0x33, 0xe0, 
0x10, 0x0, 0x1, 0x2, 0x4c, 0x0, 0x7b, 0x0, 0x1, 0x1, 0x28, 0x4, 0x38, 0x4, 0x1, 0x0, 0x6b, 0x5c, 0x5c, 0x6b, 
0xf, 0x0, 0x2, 0x2, 0x4b, 0x0, 0x7c, 0x0, 0x1, 0x1, 0x29, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x1a, 0x4d, 0x4d, 0x1a, 0xd9, 
0xf, 0x0, 0x1, 0x2, 0x4b, 0x0, 0x7c, 0x0, 0x2, 0x2, 0x29, 0x4, 0x38, 0x4, 0x1, 0x0, 0x52, 0x26, 0xf2, 0xf2, 0x26, 0x52, 
0xe, 0x0, 0x1, 0x2, 0x4a, 0x0, 0x7d, 0x0, 0x2, 0x2, 0x2a, 0x4, 0x38, 0x4, 0x1, 0x0, 0xab, 0x8, 0xd9, 0xd9, 0x8, 0xab, 
0xe, 0x0, 0x1, 0x2, 0x49, 0x0, 0x7e, 0x0, 0x1, 0x1, 0x2a, 0x4, 0x38, 0x4, 0x1, 0x0, 0x33, 0x8c, 0x8c, 0x33, 
0xd, 0x0, 0x1, 0x2, 0x48, 0x0, 0x7f, 0x0, 0x1, 0x1, 0x2b, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa6, 0x33, 0x33, 0xa6, 
0xd, 0x0, 0x1, 0x2, 0x48, 0x0, 0x7f, 0x0, 0x1, 0x1, 0x2b, 0x4, 0x38, 0x4, 0x1, 0x0, 0x26, 0xc7, 0xc7, 0x26, 
0xc, 0x0, 0x2, 0x2, 0x47, 0x0, 0x80, 0x0, 0x1, 0x1, 0x2c, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa6, 0x3, 0x4f, 0x4f, 0x3, 0xa6, 
0xc, 0x0, 0x1, 0x2, 0x47, 0x0, 0x80, 0x0, 0x1, 0x1, 0x2c, 0x4, 0x38, 0x4, 0x1, 0x0, 0x33, 0xc9, 0xc9, 0x33, 
0xb, 0x0, 0x2, 0x2, 0x46, 0x0, 0x81, 0x0, 0x1, 0x1, 0x2d, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb8, 0xd, 0x47, 0x47, 0xd, 0xb8, 
0xb, 0x0, 0x1, 0x2, 0x46, 0x0, 0x81, 0x0, 0x1, 0x1, 0x2d, 0x4, 0x38, 0x4, 0x1, 0x0, 0x54, 0xab, 0xab, 0x54, 
0xa, 0x0, 0x2, 0x2, 0x46, 0x0, 0x81, 0x0, 0x2, 0x2, 0x2e, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb3, 0xd, 0x14, 0xfa, 0xfa, 0x14, 0xd, 0xb3, 
0xa, 0x0, 0x1, 0x2, 0x45, 0x0, 0x82, 0x0, 0x1, 0x1, 0x2e, 0x4, 0x38, 0x4, 0x1, 0x0, 0x6e, 0x69, 0x69, 0x6e, 
0x9, 0x0, 0x2, 0x2, 0x45, 0x0, 0x82, 0x0, 0x1, 0x1, 0x2f, 0x4, 0x38, 0x4, 0x2, 0x0, 0xdb, 0x2b, 0xbd, 0xbd, 0x2b, 0xdb, 
0x9, 0x0, 0x2, 0x2, 0x45, 0x0, 0x82, 0x0, 0x2, 0x2, 0x2f, 0x4, 0x38, 0x4, 0x2, 0x0, 0xad, 0x5, 0xa, 0xf7, 0xf7, 0xa, 0x5, 0xad, 
0x9, 0x0, 0x1, 0x2, 0x44, 0x0, 0x83, 0x0, 0x1, 0x1, 0x2f, 0x4, 0x38, 0x4, 0x1, 0x0, 0x73, 0x3b, 0x3b, 0x73, 
0x8, 0x0, 0x2, 0x2, 0x44, 0x0, 0x83, 0x0, 0x1, 0x1, 0x30, 0x4, 0x38, 0x4, 0x2, 0x0, 0xcc, 0x2b, 0x69, 0x69, 0x2b, 0xcc, 
0x8, 0x0, 0x2, 0x2, 0x44, 0x0, 0x83, 0x0, 0x1, 0x1, 0x30, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9e, 0x12, 0x94, 0x94, 0x12, 0x9e, 
0x7, 0x0, 0x3, 0x2, 0x44, 0x0, 0x83, 0x0, 0x1, 0x1, 0x31, 0x4, 0x38, 0x4, 0x3, 0x0, 0xe6, 0x73, 0x3, 0xb8, 0xb8, 0x3, 0x73, 0xe6, 
0x7, 0x0, 0x2, 0x2, 0x44, 0x0, 0x83, 0x0, 0x1, 0x1, 0x31, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc2, 0x42, 0xdb, 0xdb, 0x42, 0xc2, 
0x7, 0x0, 0x2, 0x2, 0x44, 0x0, 0x83, 0x0, 0x1, 0x1, 0x31, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa6, 0x26, 0xed, 0xed, 0x26, 0xa6, 
0x6, 0x0, 0x3, 0x2, 0x44, 0x0, 0x83, 0x0, 0x1, 0x1, 0x32, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf0, 0x80, 0xd, 0xf2, 0xf2, 0xd, 0x80, 0xf0, 
0x6, 0x0, 0x2, 0x2, 0x43, 0x0, 0x84, 0x0, 0x0, 0x0, 0x32, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd6, 0x57, 0x57, 0xd6, 
0x6, 0x0, 0x2, 0x2, 0x43, 0x0, 0x84, 0x0, 0x0, 0x0, 0x32, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc2, 0x38, 0x38, 0xc2, 
0x6, 0x0, 0x2, 0x2, 0x44, 0x0, 0x83, 0x0, 0x1, 0x1, 0x32, 0x4, 0x38, 0x4, 0x2, 0x0, 0x8c, 0x1f, 0xed, 0xed, 0x1f, 0x8c, 
0x5, 0x0, 0x3, 0x2, 0x44, 0x0, 0x83, 0x0, 0x1, 0x1, 0x33, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd6, 0x63, 0xd, 0xdb, 0xdb, 0xd, 0x63, 0xd6, 
0x5, 0x0, 0x2, 0x2, 0x44, 0x0, 0x83, 0x0, 0x1, 0x1, 0x33, 0x4, 0x38, 0x4, 0x2, 0x0, 0xba, 0x40, 0xb8, 0xb8, 0x40, 0xba, 
0x5, 0x0, 0x2, 0x2, 0x44, 0x0, 0x83, 0x0, 0x1, 0x1, 0x33, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9c, 0x2b, 0x94, 0x94, 0x2b, 0x9c, 
0x5, 0x0, 0x2, 0x2, 0x44, 0x0, 0x83, 0x0, 0x1, 0x1, 0x33, 0x4, 0x38, 0x4, 0x2, 0x0, 0x8a, 0x1a, 0x69, 0x69, 0x1a, 0x8a, 
0x4, 0x0, 0x3, 0x2, 0x44, 0x0, 0x83, 0x0, 0x1, 0x1, 0x34, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd6, 0x75, 0x8, 0x3b, 0x3b, 0x8, 0x75, 0xd6, 
0x4, 0x0, 0x2, 0x2, 0x45, 0x0, 0x82, 0x0, 0x2, 0x2, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc2, 0x59, 0xa, 0xf7, 0xf7, 0xa, 0x59, 0xc2, 
0x4, 0x0, 0x2, 0x2, 0x45, 0x0, 0x82, 0x0, 0x1, 0x1, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa6, 0x40, 0xbd, 0xbd, 0x40, 0xa6, 
0x4, 0x0, 0x2, 0x2, 0x45, 0x0, 0x82, 0x0, 0x1, 0x1, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0x91, 0x2e, 0x69, 0x69, 0x2e, 0x91, 
0x4, 0x0, 0x2, 0x2, 0x46, 0x0, 0x81, 0x0, 0x2, 0x2, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0x80, 0x21, 0x14, 0xfa, 0xfa, 0x14, 0x21, 0x80, 
0x3, 0x0, 0x3, 0x2, 0x46, 0x0, 0x81, 0x0, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd6, 0x73, 0x1a, 0xab, 0xab, 0x1a, 0x73, 0xd6, 
0x3, 0x0, 0x3, 0x2, 0x46, 0x0, 0x81, 0x0, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x3, 0x0, 0xc2, 0x66, 0x12, 0x47, 0x47, 0x12, 0x66, 0xc2, 
0x3, 0x0, 0x3, 0x2, 0x47, 0x0, 0x80, 0x0, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x3, 0x0, 0xb3, 0x59, 0x3, 0xc9, 0xc9, 0x3, 0x59, 0xb3, 
0x3, 0x0, 0x2, 0x2, 0x47, 0x0, 0x80, 0x0, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa3, 0x42, 0x4f, 0x4f, 0x42, 0xa3, 
0x3, 0x0, 0x2, 0x2, 0x48, 0x0, 0x7f, 0x0, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0x99, 0x33, 0xc7, 0xc7, 0x33, 0x99, 
0x3, 0x0, 0x2, 0x2, 0x48, 0x0, 0x7f, 0x0, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0x8c, 0x2b, 0x33, 0x33, 0x2b, 0x8c, 
0x2, 0x0, 0x3, 0x2, 0x49, 0x0, 0x7e, 0x0, 0x1, 0x1, 0x36, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf0, 0x85, 0x21, 0x8c, 0x8c, 0x21, 0x85, 0xf0, 
0x2, 0x0, 0x3, 0x2, 0x4a, 0x0, 0x7d, 0x0, 0x2, 0x2, 0x36, 0x4, 0x38, 0x4, 0x3, 0x0, 0xe6, 0x75, 0x1a, 0x8, 0xd9, 0xd9, 0x8, 0x1a, 0x75, 0xe6, 
0x2, 0x0, 0x3, 0x2, 0x4b, 0x0, 0x7c, 0x0, 0x2, 0x2, 0x36, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd9, 0x66, 0x12, 0x26, 0xf2, 0xf2, 0x26, 0x12, 0x66, 0xd9, 
0x2, 0x0, 0x3, 0x2, 0x4b, 0x0, 0x7c, 0x0, 0x1, 0x1, 0x36, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd4, 0x59, 0x8, 0x4d, 0x4d, 0x8, 0x59, 0xd4, 
0x2, 0x0, 0x2, 0x2, 0x4c, 0x0, 0x7b, 0x0, 0x1, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xcc, 0x4d, 0x5c, 0x5c, 0x4d, 0xcc, 
0x2, 0x0, 0x2, 0x2, 0x4d, 0x0, 0x7a, 0x0, 0x1, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc2, 0x4a, 0x78, 0x78, 0x4a, 0xc2, 
0x2, 0x0, 0x2, 0x2, 0x4e, 0x0, 0x79, 0x0, 0x1, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb3, 0x3d, 0x63, 0x63, 0x3d, 0xb3, 
0x2, 0x0, 0x2, 0x2, 0x50, 0x0, 0x77, 0x0, 0x2, 0x2, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xad, 0x36, 0x47, 0xf2, 0xf2, 0x47, 0x36, 0xad, 
0x2, 0x0, 0x2, 0x2, 0x51, 0x0, 0x76, 0x0, 0x2, 0x2, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa0, 0x30, 0x2b, 0xc9, 0xc9, 0x2b, 0x30, 0xa0, 
0x2, 0x0, 0x2, 0x2, 0x52, 0x0, 0x75, 0x0, 0x2, 0x2, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0x94, 0x26, 0xd, 0x80, 0x80, 0xd, 0x26, 0x94, 
0x2, 0x0, 0x2, 0x2, 0x54, 0x0, 0x73, 0x0, 0x2, 0x2, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0x88, 0x1c, 0x33, 0xc7, 0xc7, 0x33, 0x1c, 0x88, 
0x2, 0x0, 0x2, 0x2, 0x56, 0x0, 0x71, 0x0, 0x2, 0x2, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0x82, 0xa, 0x54, 0xc9, 0xc9, 0x54, 0xa, 0x82, 
0x1, 0x0, 0x3, 0x2, 0x58, 0x0, 0x6f, 0x0, 0x2, 0x2, 0x37, 0x4, 0x38, 0x4, 0x3, 0x0, 0xe6, 0x75, 0x5, 0x45, 0xb0, 0xb0, 0x45, 0x5, 0x75, 0xe6, 
0x1, 0x0, 0x3, 0x2, 0x5c, 0x0, 0x6b, 0x0, 0x4, 0x4, 0x37, 0x4, 0x38, 0x4, 0x3, 0x0, 0xde, 0x68, 0x5, 0x12, 0x69, 0xad, 0xf2, 0xf2, 0xad, 0x69, 0x12, 0x5, 0x68, 0xde, 
0x1, 0x0, 0x3, 0x2, 0x62, 0x0, 0x65, 0x0, 0x7, 0x7, 0x37, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd9, 0x5b, 0x5, 0x5, 0x3b, 0x6b, 0x96, 0xba, 0xd9, 0xed, 0xed, 0xd9, 0xba, 0x96, 0x6b, 0x3b, 0x5, 0x5, 0x5b, 0xd9, 
0x1, 0x0, 0x3, 0x1, 0x37, 0x4, 0x38, 0x4, 0x3, 0x0, 0xc7, 0x54, 0x5, 0x5, 0x54, 0xc7, 
0x1, 0x0, 0x3, 0x1, 0x37, 0x4, 0x38, 0x4, 0x3, 0x0, 0xc2, 0x4c, 0x5, 0x5, 0x4c, 0xc2, 
0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb3, 0x3d, 0x3d, 0xb3, 
0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xab, 0x35, 0x35, 0xab, 
0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9e, 0x2e, 0x2e, 0x9e, 
0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0x96, 0x26, 0x26, 0x96, 
0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0x8c, 0x1f, 0x1f, 0x8c, 
0x0, 0x0, 0x3, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf2, 0x82, 0x1c, 0x1c, 0x82, 0xf2, 
0x0, 0x0, 0x3, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0xe6, 0x7d, 0x17, 0x17, 0x7d, 0xe6, 
0x0, 0x0, 0x3, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0xde, 0x75, 0x12, 0x12, 0x75, 0xde, 
0x0, 0x0, 0x3, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd9, 0x70, 0xd, 0xd, 0x70, 0xd9, 
0x0, 0x0, 0x3, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd1, 0x66, 0xa, 0xa, 0x66, 0xd1, 
0x0, 0x0, 0x3, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0xc7, 0x61, 0x5, 0x5, 0x61, 0xc7, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc2, 0x5c, 0x5c, 0xc2, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb8, 0x57, 0x57, 0xb8, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb3, 0x55, 0x55, 0xb3, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xab, 0x50, 0x50, 0xab, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa6, 0x4e, 0x4e, 0xa6, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9e, 0x49, 0x49, 0x9e, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x96, 0x3f, 0x3f, 0x96, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x91, 0x3a, 0x3a, 0x91, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x8c, 0x35, 0x35, 0x8c, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x82, 0x30, 0x30, 0x82, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x7d, 0x2d, 0x2d, 0x7d, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x75, 0x2c, 0x2c, 0x75, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x70, 0x27, 0x27, 0x70, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x66, 0x22, 0x22, 0x66, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x61, 0x17, 0x17, 0x61, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x5c, 0x14, 0x14, 0x5c, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x57, 0x12, 0x12, 0x57, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x52, 0xf, 0xf, 0x52, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x4d, 0xd, 0xd, 0x4d, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x4e, 0xd, 0xd, 0x4e, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x49, 0xd, 0xd, 0x49, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x41, 0xd, 0xd, 0x41, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x3c, 0xd, 0xd, 0x3c, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x35, 0xd, 0xd, 0x35, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x30, 0xd, 0xd, 0x30, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x2d, 0xa, 0xa, 0x2d, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x2c, 0xa, 0xa, 0x2c, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x27, 0xa, 0xa, 0x27, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x22, 0xa, 0xa, 0x22, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x1a, 0xa, 0xa, 0x1a, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x17, 0xa, 0xa, 0x17, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x12, 0xa, 0xa, 0x12, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xf, 0xf, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8,

0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd, 0xa, 0xa, 0xd, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xf, 0xa, 0xa, 0xf, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x12, 0xa, 0xa, 0x12, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x17, 0xa, 0xa, 0x17, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x1a, 0xa, 0xa, 0x1a, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x22, 0xa, 0xa, 0x22, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x27, 0xa, 0xa, 0x27, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x2c, 0xd, 0xd, 0x2c, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x2d, 0xd, 0xd, 0x2d, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x30, 0xd, 0xd, 0x30, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x35, 0xd, 0xd, 0x35, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x3c, 0xd, 0xd, 0x3c, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x41, 0xd, 0xd, 0x41, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x49, 0xd, 0xd, 0x49, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x4e, 0xf, 0xf, 0x4e, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x4d, 0x12, 0x12, 0x4d, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x52, 0x14, 0x14, 0x52, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x57, 0x17, 0x17, 0x57, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x5c, 0x22, 0x22, 0x5c, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x61, 0x27, 0x27, 0x61, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x66, 0x2c, 0x2c, 0x66, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x70, 0x2d, 0x2d, 0x70, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x75, 0x30, 0x30, 0x75, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x7d, 0x35, 0x35, 0x7d, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x82, 0x3a, 0x3a, 0x82, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x8c, 0x3f, 0x3f, 0x8c, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x96, 0x49, 0x49, 0x96, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9e, 0x4e, 0x4e, 0x9e, 
0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xab, 0x50, 0x50, 0xab, 
0x0, 0x0, 0x3, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0xb3, 0x55, 0x5, 0x5, 0x55, 0xb3, 
0x0, 0x0, 0x3, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0xc2, 0x57, 0xa, 0xa, 0x57, 0xc2, 
0x0, 0x0, 0x3, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0xc7, 0x5c, 0xd, 0xd, 0x5c, 0xc7, 
0x0, 0x0, 0x3, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd9, 0x61, 0x12, 0x12, 0x61, 0xd9, 
0x0, 0x0, 0x3, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0xde, 0x66, 0x17, 0x17, 0x66, 0xde, 
0x0, 0x0, 0x3, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0xe6, 0x70, 0x1c, 0x1c, 0x70, 0xe6, 
0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0x75, 0x1f, 0x1f, 0x75, 
0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0x7d, 0x26, 0x26, 0x7d, 
0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0x82, 0x2e, 0x2e, 0x82, 
0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0x8c, 0x35, 0x35, 0x8c, 
0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0x96, 0x3d, 0x3d, 0x96, 
0x1, 0x0, 0x3, 0x1, 0x37, 0x4, 0x38, 0x4, 0x3, 0x0, 0x9e, 0x4c, 0x5, 0x5, 0x4c, 0x9e, 
0x1, 0x0, 0x3, 0x1, 0x37, 0x4, 0x38, 0x4, 0x3, 0x0, 0xab, 0x54, 0x5, 0x5, 0x54, 0xab, 
0x1, 0x0, 0x3, 0x1, 0x37, 0x4, 0x38, 0x4, 0x3, 0x0, 0xb3, 0x5b, 0x5, 0x5, 0x5b, 0xb3, 
0x1, 0x0, 0x3, 0x1, 0x37, 0x4, 0x38, 0x4, 0x3, 0x0, 0xc2, 0x68, 0x5, 0x5, 0x68, 0xc2, 
0x1, 0x0, 0x3, 0x1, 0x37, 0x4, 0x38, 0x4, 0x3, 0x0, 0xc7, 0x75, 0x5, 0x5, 0x75, 0xc7, 
0x1, 0x0, 0x3, 0x1, 0x37, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd9, 0x82, 0xa, 0xa, 0x82, 0xd9, 
0x1, 0x0, 0x3, 0x1, 0x37, 0x4, 0x38, 0x4, 0x3, 0x0, 0xde, 0x88, 0x1c, 0x1c, 0x88, 0xde, 
0x1, 0x0, 0x3, 0x1, 0x37, 0x4, 0x38, 0x4, 0x3, 0x0, 0xe6, 0x94, 0x26, 0x26, 0x94, 0xe6, 
0x2, 0x0, 0x2, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa0, 0x30, 0x30, 0xa0, 
0x2, 0x0, 0x2, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xad, 0x36, 0x36, 0xad, 
0x2, 0x0, 0x2, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb3, 0x3d, 0x3d, 0xb3, 
0x2, 0x0, 0x2, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc2, 0x4a, 0x4a, 0xc2, 
0x2, 0x0, 0x2, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xcc, 0x4d, 0x4d, 0xcc, 
0x2, 0x0, 0x3, 0x1, 0x36, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd4, 0x59, 0x8, 0x8, 0x59, 0xd4, 
0x2, 0x0, 0x3, 0x1, 0x36, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd9, 0x66, 0x12, 0x12, 0x66, 0xd9, 
0x2, 0x0, 0x3, 0x1, 0x36, 0x4, 0x38, 0x4, 0x3, 0x0, 0xe6, 0x75, 0x1a, 0x1a, 0x75, 0xe6, 
0x2, 0x0, 0x3, 0x1, 0x36, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf0, 0x85, 0x21, 0x21, 0x85, 0xf0, 
0x3, 0x0, 0x2, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0x8c, 0x2b, 0x2b, 0x8c, 
0x3, 0x0, 0x2, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0x99, 0x33, 0x33, 0x99, 
0x3, 0x0, 0x2, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa3, 0x42, 0x42, 0xa3, 
0x3, 0x0, 0x3, 0x1, 0x35, 0x4, 0x38, 0x4, 0x3, 0x0, 0xb3, 0x59, 0x3, 0x3, 0x59, 0xb3, 
0x3, 0x0, 0x3, 0x1, 0x35, 0x4, 0x38, 0x4, 0x3, 0x0, 0xc2, 0x66, 0x12, 0x12, 0x66, 0xc2, 
0x3, 0x0, 0x3, 0x1, 0x35, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd6, 0x73, 0x1a, 0x1a, 0x73, 0xd6, 
0x4, 0x0, 0x2, 0x1, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0x80, 0x21, 0x21, 0x80, 
0x4, 0x0, 0x2, 0x1, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0x91, 0x2e, 0x2e, 0x91, 
0x4, 0x0, 0x2, 0x1, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa6, 0x40, 0x40, 0xa6, 
0x4, 0x0, 0x2, 0x1, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc2, 0x59, 0x59, 0xc2, 
0x4, 0x0, 0x3, 0x1, 0x34, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd6, 0x75, 0x8, 0x8, 0x75, 0xd6, 
0x5, 0x0, 0x2, 0x1, 0x33, 0x4, 0x38, 0x4, 0x2, 0x0, 0x8a, 0x1a, 0x1a, 0x8a, 
0x5, 0x0, 0x2, 0x1, 0x33, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9c, 0x2b, 0x2b, 0x9c, 
0x5, 0x0, 0x2, 0x1, 0x33, 0x4, 0x38, 0x4, 0x2, 0x0, 0xba, 0x40, 0x40, 0xba, 
0x5, 0x0, 0x3, 0x1, 0x33, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd6, 0x63, 0xd, 0xd, 0x63, 0xd6, 
0x6, 0x0, 0x2, 0x1, 0x32, 0x4, 0x38, 0x4, 0x2, 0x0, 0x8c, 0x1f, 0x1f, 0x8c, 
0x6, 0x0, 0x2, 0x1, 0x32, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc2, 0x38, 0x38, 0xc2, 
0x6, 0x0, 0x2, 0x1, 0x32, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd6, 0x57, 0x57, 0xd6, 
0x6, 0x0, 0x3, 0x1, 0x32, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf0, 0x80, 0xd, 0xd, 0x80, 0xf0, 
0x7, 0x0, 0x2, 0x1, 0x31, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa6, 0x26, 0x26, 0xa6, 
0x7, 0x0, 0x2, 0x1, 0x31, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc2, 0x42, 0x42, 0xc2, 
0x7, 0x0, 0x3, 0x1, 0x31, 0x4, 0x38, 0x4, 0x3, 0x0, 0xe6, 0x73, 0x3, 0x3, 0x73, 0xe6, 
0x8, 0x0, 0x2, 0x1, 0x30, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9e, 0x12, 0x12, 0x9e, 
0x8, 0x0, 0x2, 0x1, 0x30, 0x4, 0x38, 0x4, 0x2, 0x0, 0xcc, 0x2b, 0x2b, 0xcc, 
0x9, 0x0, 0x1, 0x1, 0x2f, 0x4, 0x38, 0x4, 0x1, 0x0, 0x73, 0x73, 
0x9, 0x0, 0x2, 0x1, 0x2f, 0x4, 0x38, 0x4, 0x2, 0x0, 0xad, 0x5, 0x5, 0xad, 
0x9, 0x0, 0x2, 0x1, 0x2f, 0x4, 0x38, 0x4, 0x2, 0x0, 0xdb, 0x2b, 0x2b, 0xdb, 
0xa, 0x0, 0x1, 0x1, 0x2e, 0x4, 0x38, 0x4, 0x1, 0x0, 0x6e, 0x6e, 
0xa, 0x0, 0x2, 0x1, 0x2e, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb3, 0xd, 0xd, 0xb3, 
0xb, 0x0, 0x1, 0x1, 0x2d, 0x4, 0x38, 0x4, 0x1, 0x0, 0x54, 0x54, 
0xb, 0x0, 0x2, 0x1, 0x2d, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb8, 0xd, 0xd, 0xb8, 
0xc, 0x0, 0x1, 0x1, 0x2c, 0x4, 0x38, 0x4, 0x1, 0x0, 0x33, 0x33, 
0xc, 0x0, 0x2, 0x1, 0x2c, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa6, 0x3, 0x3, 0xa6, 
0xd, 0x0, 0x1, 0x1, 0x2b, 0x4, 0x38, 0x4, 0x1, 0x0, 0x26, 0x26, 
0xd, 0x0, 0x1, 0x1, 0x2b, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa6, 0xa6, 
0xe, 0x0, 0x1, 0x1, 0x2a, 0x4, 0x38, 0x4, 0x1, 0x0, 0x33, 0x33, 
0xe, 0x0, 0x1, 0x1, 0x2a, 0x4, 0x38, 0x4, 0x1, 0x0, 0xab, 0xab, 
0xf, 0x0, 0x1, 0x1, 0x29, 0x4, 0x38, 0x4, 0x1, 0x0, 0x52, 0x52, 
0xf, 0x0, 0x2, 0x1, 0x29, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x1a, 0x1a, 0xd9, 
0x10, 0x0, 0x1, 0x1, 0x28, 0x4, 0x38, 0x4, 0x1, 0x0, 0x6b, 0x6b, 
0x10, 0x0, 0x2, 0x1, 0x28, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe0, 0x33, 0x33, 0xe0, 
0x11, 0x0, 0x2, 0x1, 0x27, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa6, 0xa, 0xa, 0xa6, 
0x12, 0x0, 0x1, 0x1, 0x26, 0x4, 0x38, 0x4, 0x1, 0x0, 0x4d, 0x4d, 
0x12, 0x0, 0x2, 0x1, 0x26, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x21, 0x21, 0xd9, 
0x13, 0x0, 0x1, 0x1, 0x25, 0x4, 0x38, 0x4, 0x1, 0x0, 0x80, 0x80, 
0x13, 0x0, 0x2, 0x1, 0x25, 0x4, 0x38, 0x4, 0x2, 0x0, 0xf2, 0x40, 0x40, 0xf2, 
0x14, 0x0, 0x2, 0x1, 0x24, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x1f, 0x1f, 0xd9, 
0x15, 0x0, 0x2, 0x1, 0x23, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb3, 0x14, 0x14, 0xb3, 
0x16, 0x0, 0x2, 0x1, 0x22, 0x4, 0x38, 0x4, 0x2, 0x0, 0x73, 0x8, 0x8, 0x73, 
0x17, 0x0, 0x1, 0x1, 0x21, 0x4, 0x38, 0x4, 0x1, 0x0, 0x66, 0x66, 
0x18, 0x0, 0x1, 0x1, 0x20, 0x4, 0x38, 0x4, 0x1, 0x0, 0x59, 0x59, 
0x19, 0x0, 0x1, 0x1, 0x1f, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40, 
0x1a, 0x0, 0x1, 0x1, 0x1e, 0x4, 0x38, 0x4, 0x1, 0x0, 0x38, 0x38, 
0x1b, 0x0, 0x1, 0x1, 0x1d, 0x4, 0x38, 0x4, 0x1, 0x0, 0x33, 0x33, 
0x1c, 0x0, 0x1, 0x1, 0x1c, 0x4, 0x38, 0x4, 0x1, 0x0, 0x30, 0x30, 
0x1d, 0x0, 0x1, 0x1, 0x1b, 0x4, 0x38, 0x4, 0x1, 0x0, 0x2e, 0x2e, 
0x1e, 0x0, 0x1, 0x1, 0x1a, 0x4, 0x38, 0x4, 0x1, 0x0, 0x38, 0x38, 
0x1f, 0x0, 0x1, 0x1, 0x19, 0x4, 0x38, 0x4, 0x1, 0x0, 0x30, 0x30, 
0x20, 0x0, 0x1, 0x1, 0x18, 0x4, 0x38, 0x4, 0x1, 0x0, 0x33, 0x33, 
0x21, 0x0, 0x1, 0x1, 0x17, 0x4, 0x38, 0x4, 0x1, 0x0, 0x38, 0x38, 
0x22, 0x0, 0x1, 0x1, 0x16, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40, 
0x23, 0x0, 0x1, 0x1, 0x15, 0x4, 0x38, 0x4, 0x1, 0x0, 0x59, 0x59, 
0x24, 0x0, 0x2, 0x1, 0x14, 0x4, 0x38, 0x4, 0x2, 0x0, 0x66, 0x8, 0x8, 0x66, 
0x25, 0x0, 0x2, 0x1, 0x13, 0x4, 0x38, 0x4, 0x2, 0x0, 0x73, 0x14, 0x14, 0x73, 
0x26, 0x0, 0x2, 0x1, 0x12, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb3, 0x1f, 0x1f, 0xb3, 
0x27, 0x0, 0x2, 0x1, 0x11, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x40, 0x40, 0xd9, 
0x28, 0x0, 0x3, 0x1, 0x10, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf2, 0x80, 0x21, 0x21, 0x80, 0xf2, 
0x2a, 0x0, 0x3, 0x1, 0xe, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd9, 0x4d, 0xa, 0xa, 0x4d, 0xd9, 
0x2c, 0x0, 0x2, 0x1, 0xc, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa6, 0x33, 0x33, 0xa6, 
0x2d, 0x0, 0x3, 0x1, 0xb, 0x4, 0x38, 0x4, 0x3, 0x0, 0xe0, 0x6b, 0x1a, 0x1a, 0x6b, 0xe0, 
0x2f, 0x0, 0x2, 0x1, 0x9, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x52, 0x52, 0xd9, 
0x31, 0x0, 0x2, 0x1, 0x7, 0x4, 0x38, 0x4, 0x2, 0x0, 0xab, 0x33, 0x33, 0xab, 
0x33, 0x0, 0x3, 0x1, 0x5, 0x4, 0x38, 0x4, 0x3, 0x0, 0xa6, 0x26, 0x3, 0x3, 0x26, 0xa6, 
0x35, 0x0, 0x3, 0x1, 0x3, 0x4, 0x38, 0x4, 0x3, 0x0, 0xa6, 0x33, 0xd, 0xd, 0x33, 0xa6, 
0x37, 0x0, 0x3, 0x1, 0x1, 0x4, 0x38, 0x4, 0x3, 0x0, 0xb8, 0x54, 0xd, 0xd, 0x54, 0xb8, 
0x39, 0x0, 0x4, 0x1, 0xff, 0x3, 0x38, 0x4, 0x4, 0x0, 0xb3, 0x6e, 0x2b, 0x5, 0x5, 0x2b, 0x6e, 0xb3, 
0x3b, 0x0, 0x6, 0x1, 0xfd, 0x3, 0x38, 0x4, 0x6, 0x0, 0xdb, 0xad, 0x73, 0x2b, 0x12, 0x3, 0x3, 0x12, 0x2b, 0x73, 0xad, 0xdb, 
0x3e, 0x0, 0x6, 0x1, 0xfa, 0x3, 0x38, 0x4, 0x6, 0x0, 0xcc, 0x9e, 0x73, 0x42, 0x26, 0xd, 0xd, 0x26, 0x42, 0x73, 0x9e, 0xcc, 
0x40, 0x0, 0x8, 0x1, 0xf8, 0x3, 0x38, 0x4, 0x8, 0x0, 0xe6, 0xc2, 0xa6, 0x80, 0x57, 0x38, 0x1f, 0xd, 0xd, 0x1f, 0x38, 0x57, 0x80, 0xa6, 0xc2, 0xe6, 
0x43, 0x0, 0x9, 0x1, 0xf5, 0x3, 0x38, 0x4, 0x9, 0x0, 0xf0, 0xd6, 0xc2, 0x8c, 0x63, 0x40, 0x2b, 0x1a, 0x8, 0x8, 0x1a, 0x2b, 0x40, 0x63, 0x8c, 0xc2, 0xd6, 0xf0, 
0x47, 0x0, 0xc, 0x1, 0xf1, 0x3, 0x38, 0x4, 0xc, 0x0, 0xd6, 0xba, 0x9c, 0x8a, 0x75, 0x59, 0x40, 0x2e, 0x21, 0x1a, 0x12, 0x3, 0x3, 0x12, 0x1a, 0x21, 0x2e, 0x40, 0x59, 0x75, 0x8a, 0x9c, 0xba, 0xd6, 
0x4b, 0x0, 0xf, 0x1, 0xed, 0x3, 0x38, 0x4, 0xf, 0x0, 0xd6, 0xc2, 0xa6, 0x91, 0x80, 0x73, 0x66, 0x59, 0x42, 0x33, 0x2b, 0x21, 0x1a, 0x12, 0x8, 0x8, 0x12, 0x1a, 0x21, 0x2b, 0x33, 0x42, 0x59, 0x66, 0x73, 0x80, 0x91, 0xa6, 0xc2, 0xd6, 
0x50, 0x0, 0x17, 0x1, 0xe8, 0x3, 0x38, 0x4, 0x17, 0x0, 0xd6, 0xc2, 0xb3, 0xa3, 0x99, 0x8c, 0x85, 0x75, 0x66, 0x59, 0x4d, 0x4a, 0x3d, 0x36, 0x30, 0x26, 0x1c, 0xa, 0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0xa, 0x1c, 0x26, 0x30, 0x36, 0x3d, 0x4a, 0x4d, 0x59, 0x66, 0x75, 0x85, 0x8c, 0x99, 0xa3, 0xb3, 0xc2, 0xd6, 
0x56, 0x0, 0x1c, 0x1, 0xe2, 0x3, 0x38, 0x4, 0x1c, 0x0, 0xf0, 0xe6, 0xd9, 0xd4, 0xcc, 0xc2, 0xb3, 0xad, 0xa0, 0x94, 0x88, 0x82, 0x75, 0x68, 0x5b, 0x54, 0x4c, 0x3d, 0x35, 0x2e, 0x26, 0x1f, 0x1c, 0x17, 0x12, 0xd, 0xa, 0x5, 0x5, 0xa, 0xd, 0x12, 0x17, 0x1c, 0x1f, 0x26, 0x2e, 0x35, 0x3d, 0x4c, 0x54, 0x5b, 0x68, 0x75, 0x82, 0x88, 0x94, 0xa0, 0xad, 0xb3, 0xc2, 0xcc, 0xd4, 0xd9, 0xe6, 0xf0, 
0x5f, 0x0, 0x30, 0x1, 0xd9, 0x3, 0x38, 0x4, 0x30, 0x0, 0xe6, 0xde, 0xd9, 0xc7, 0xc2, 0xb3, 0xab, 0x9e, 0x96, 0x8c, 0x82, 0x7d, 0x75, 0x70, 0x66, 0x61, 0x5c, 0x57, 0x55, 0x50, 0x4e, 0x49, 0x3f, 0x3a, 0x35, 0x30, 0x2d, 0x2c, 0x27, 0x22, 0x17, 0x14, 0x12, 0xf, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xf, 0x12, 0x14, 0x17, 0x22, 0x27, 0x2c, 0x2d, 0x30, 0x35, 0x3a, 0x3f, 0x49, 0x4e, 0x50, 0x55, 0x57, 0x5c, 0x61, 0x66, 0x70, 0x75, 0x7d, 0x82, 0x8c, 0x96, 0x9e, 0xab, 0xb3, 0xc2, 0xc7, 0xd9, 0xde, 0xe6, 
0x6c, 0x0, 0x37, 0x1, 0xcc, 0x3, 0x38, 0x4, 0x37, 0x0, 0xe6, 0xde, 0xd9, 0xc7, 0xc2, 0xb3, 0xab, 0x9e, 0x96, 0x8c, 0x82, 0x7d, 0x75, 0x70, 0x66, 0x61, 0x5c, 0x57, 0x52, 0x4d, 0x4e, 0x49, 0x41, 0x3c, 0x35, 0x30, 0x2d, 0x2c, 0x27, 0x22, 0x1a, 0x17, 0x12, 0xf, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xf, 0x12, 0x17, 0x1a, 0x22, 0x27, 0x2c, 0x2d, 0x30, 0x35, 0x3c, 0x41, 0x49, 0x4e, 0x4d, 0x52, 0x57, 0x5c, 0x61, 0x66, 0x70, 0x75, 0x7d, 0x82, 0x8c, 0x96, 0x9e, 0xab, 0xb3, 0xc2, 0xc7, 0xd9, 0xde, 0xe6, 
};

#endif
