// Copyright 2022 Dane Skalski (@Daneski13)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Electrical Wiring Stuff
// #define MATRIX_ROW_PINS 
//     { GP9, GP10, GP11, GP12, GP13 }
// #define MATRIX_COL_PINS 
//     { GP1, GP2, GP3, GP4, GP5, GP8 }
// #define DIODE_DIRECTION COL2ROW

// Split Keyboard Stuff
// #define EE_HANDS                 // Sets the keyboard’s handedness using EEPROM
// #define SERIAL_USART_HALF_DUPLEX // Use full duplex communication (TRRS)
// #define SERIAL_USART_TX_PIN GP0  // USART TX pin
// #define SERIAL_USART_RX_PIN GP1  // USART RX pin
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP6
#define I2C1_SCL_PIN GP7
/* RGB Stuff */
#ifdef RGB_MATRIX_ENABLE

#    define RGB_MATRIX_LED_COUNT 74
#    define RGB_MATRIX_SPLIT \
        { 37, 37 } // 37 LEDs on each side

#endif

#ifdef OLED_ENABLE
  #define OLED_DISPLAY_128X64
  #define OLED_TIMEOUT 30000
#endif