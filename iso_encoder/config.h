/* Copyright (C) 2024 mioke
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

#define MATRIX_ROWS 6
#define MATRIX_COLS 18

#define ENCODER_A_PINS { B8 }
#define ENCODER_B_PINS { B9 }
#define ENCODER_RESOLUTION 4
#define ENCODER_MAP_KEY_DELAY 10



//#define ENCODER_DIRECTION_FLIP




/*
	My new development board uses a 16Mhz Crystal, so we need to override STM32_HSECLK
	Edit qmk_firmware/platforms/chibios/boards/BLACKPILL_STM32_F411/configs/mcuconf.h

	Add the following code at about line 50

	#define STM32_PLLM_VALUE                    8
	#define STM32_PLLN_VALUE                    96
	#define STM32_PLLP_VALUE                    0x00000002U
	#define STM32_PLLQ_VALUE                    4

*/



/*
#define CRYSTAL16 true

#ifdef  CRYSTAL16
#define STM32_HSECLK      16000000U
#endif
*/

/*

// WS2812 RGB LED strip input and number of LEDs
#define WS2812_PWM_DRIVER        PWMD3
#define WS2812_PWM_CHANNEL       1
#define WS2812_PWM_PAL_MODE      2
#define WS2812_PWM_DMA_STREAM    STM32_DMA1_STREAM2
#define WS2812_PWM_DMA_CHANNEL   5
#define WS2812_EXTERNAL_PULLUP

#define RGB_TRIGGER_ON_KEYDOWN
#define WS2812_DI_PIN A1
#define WS2812_LED_COUNT 99
#define WS2812_TIMING	1250
#define WS2812_T1H	900
#define WS2812_T0H	350
#define WS2812_TRST_US	280
#define WS2812_RGBW true                             // Enables RGBW support (except i2c driver)
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_RGB      // WS2812B-2020

#define RGBLIGHT_LED_COUNT 99
#define RGBLIGHT_HUE_STEP	8
#define RGBLIGHT_SAT_STEP	17
#define RGBLIGHT_VAL_STEP	17
#define RGBLIGHT_LIMIT_VAL	255
#define RGBLIGHT_SLEEP true
#define RGBLIGHT_MAX_LAYERS 4

*/
