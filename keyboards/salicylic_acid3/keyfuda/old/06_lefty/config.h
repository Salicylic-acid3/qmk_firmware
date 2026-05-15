/*
Copyright 2021 Salicylic_Acid

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x04D8
#define PRODUCT_ID      0xE757
#define DEVICE_VER      0x0001
#define MANUFACTURER    Salicylic_Acid
#define PRODUCT         keyfuda06_lefty

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 18

#define DIRECT_PINS {{ D2, D3, D1, D0, D4, F6, D7, F5, C6, F4, B3, B4, B1, E6, F7, B5, B6, B2 }}
#define UNUSED_PINS
