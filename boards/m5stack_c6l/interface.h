#pragma once
#include "board.h"

#define PIN_OLED_CS     6
#define PIN_OLED_DC     18
#define PIN_OLED_RST    15
#define PIN_OLED_SCK    20
#define PIN_OLED_MOSI   21

#define PIN_BUZZER      11
#define PIN_RGB         2

// LoRa SX1262
#define PIN_LORA_CS     23
#define PIN_LORA_SCK    20
#define PIN_LORA_MOSI   21
#define PIN_LORA_MISO   22
#define PIN_LORA_BUSY   19
#define PIN_LORA_IRQ    7
// resets and RF switches through IO expander
#define IO_LORA_RESET   IO_E0_P7
#define IO_LORA_LNA_EN  IO_E0_P5
#define IO_LORA_ANT_SW  IO_E0_P6

// Button
#define IO_BUTTON       IO_P0
