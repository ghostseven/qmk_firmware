/*
Copyright 2020 bt66tech

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

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4454 //DT for DrayTronics
#define PRODUCT_ID      0x0001 //
#define DEVICE_VER      0x0001 //Version 1
#define MANUFACTURER    Draytronics
#define PRODUCT         DEVSTM32

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

#define MATRIX_COL_PINS { B1, B2, B10 }
#define MATRIX_ROW_PINS { B11, B12, B13 }
#define DIODE_DIRECTION COL2ROW


/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE



