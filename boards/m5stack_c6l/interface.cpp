#include "interface.h"
#include "io_expander.h"
#include <SPI.h>
#include <Wire.h>

// ------------------- OLED -------------------
void board_display_init() {
    pinMode(PIN_OLED_CS, OUTPUT);
    pinMode(PIN_OLED_DC, OUTPUT);
    pinMode(PIN_OLED_RST, OUTPUT);

    digitalWrite(PIN_OLED_RST, LOW);
    delay(20);
    digitalWrite(PIN_OLED_RST, HIGH);

    // SSD1306 SPI init will run in the Bruce default driver
}

// ------------------- LED -------------------
void board_led_init() {
    pinMode(PIN_RGB, OUTPUT);
}

void board_led_set(uint8_t r, uint8_t g, uint8_t b) {
    // handled by WS2812 driver in Bruce
}

// ------------------- Buzzer -------------------
void board_buzzer_init() {
    pinMode(PIN_BUZZER, OUTPUT);
}

void board_buzzer_set(bool on) {
    digitalWrite(PIN_BUZZER, on ? HIGH : LOW);
}

// ------------------- LoRa -------------------
void board_lora_power_on() {
    io_expander_write(IO_LORA_LNA_EN, 1);
    io_expander_write(IO_LORA_ANT_SW, 1);
    io_expander_write(IO_LORA_RESET, 1);
}

void board_lora_power_off() {
    io_expander_write(IO_LORA_LNA_EN, 0);
    io_expander_write(IO_LORA_ANT_SW, 0);
    io_expander_write(IO_LORA_RESET, 0);
}
