/* Copyright (C) 2024 Michael O'Toole
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

//#include <ws2812.h>

#define USB_POLLING_INTERVAL_MS 1
#define WAIT_FOR_USB

#define MATRIX_ROWS 10
#define MATRIX_COLS 10


#define ENCODER_A_PINS { B12 }
#define ENCODER_B_PINS { B13 }
#define ENCODER_RESOLUTION 4
#define ENCODER_MAP_KEY_DELAY 10
