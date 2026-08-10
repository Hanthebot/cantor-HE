#pragma once

#define HE_MATRIX_ROWS 3 // Rows per half
#define MATRIX_COLS 7 // Columns per half

#define MATRIX_ROW_PINS \
    { A0, A1, A2 }

#define ROWS_PER_COL \
    { 3, 3, 3, 3, 3, 3, 3 }

#define AMUX_MAX_COLS_COUNT 7

#define AMUX_SEL_PINS \
    { B13, B14, B15 }

#define AMUX_COL_CHANNELS \
    { 0, 1, 2, 3, 4, 5, 6 }

#define DEFAULT_ACTUATION_MODE 0
// "Light" preset based on 480-330 sensor range (~150 counts travel):
// APC actuation at 30% travel, release at 20% travel (10% hysteresis)
// RT deadzone at 30%, act offset ~10 counts (6.7% of travel), rel offset ~8 counts (5.3%)
#define DEFAULT_MODE_0_ACTUATION_LEVEL 300
#define DEFAULT_MODE_0_RELEASE_LEVEL 200
#define DEFAULT_MODE_1_INITIAL_DEADZONE_OFFSET 300
#define DEFAULT_MODE_1_ACTUATION_OFFSET 10
#define DEFAULT_MODE_1_RELEASE_OFFSET 8
#define DEFAULT_BOTTOM_DEADZONE 50
#define DEFAULT_EXTREMUM 1023
#define NOISE_CEILING_THRESHOLD 30
#define BOTTOMING_CALIBRATION_THRESHOLD 50
#define DEFAULT_NOISE_CEILING_SAMPLING_COUNT 30
#define DEFAULT_BOTTOMING_READING 0
#define DEFAULT_CALIBRATION_STARTER true

#define EECONFIG_KB_DATA_SIZE 253

#define VIA_CUSTOM_LIGHTING_ENABLE

// APP starts at 0x08004000 (WeAct HID bootloader in sector 0, custom linker script)
// STM32_BOOTLOADER_ADDRESS override is in rules.mk

// Split serial (STM32 USART1 full-duplex, PB6 TX / PB7 RX)
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN B6
#define SERIAL_USART_RX_PIN B7
#define SERIAL_USART_DRIVER SD1
