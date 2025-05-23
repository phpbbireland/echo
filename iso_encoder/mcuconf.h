/*/* Copyright (C) 2024 Michael O'Toole
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
#include_next <mcuconf.h>

/*
  Settings for 16Mhz crystal
*/
#undef  STM32_PLLM_VALUE
#define STM32_PLLM_VALUE  8

#undef  STM32_PLLN_VALUE
#define STM32_PLLN_VALUE  96

#undef  STM32_PLLP_VALUE
#define STM32_PLLP_VALUE  0x00000002U

#undef  STM32_PLLQ_VALUE
#define STM32_PLLQ_VALUE  4

/*
  STM32 PWM Settings
*/

#undef  STM32_PWM_USE_TIM4
#define STM32_PWM_USE_TIM4 TRUE

#undef  STM32_PWM_USE_ADVANCED
#define STM32_PWM_USE_ADVANCED TRUE

#undef  STM32_I2C_USE_I2C1
#define STM32_I2C_USE_I2C1 TRUE

//ref /home/Mike/STM32CubeMX/Projects/New2/
