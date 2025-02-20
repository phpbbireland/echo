/* Copyright (C) 2024 Michael O'Toole
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

// My dev board uses a 16Mhz crystal... https://hackaday.io/project/198392-keyboard-development-boards-qmk-via

#pragma once

#include_next <board.h>

#undef  STM32_HSECLK
#define STM32_HSECLK      16000000U
