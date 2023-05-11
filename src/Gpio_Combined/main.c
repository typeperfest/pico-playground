#include "pico/stdlib.h"

#define BUTTON_1_PIN 5
#define BUTTON_2_PIN 7
#define LE_DIODE 16

int main() {    
    gpio_init(BUTTON_1_PIN);
    gpio_set_dir(BUTTON_1_PIN, GPIO_IN);
    gpio_init(BUTTON_2_PIN);
    gpio_set_dir(BUTTON_2_PIN, GPIO_IN);
    gpio_init(LE_DIODE);
    gpio_set_dir(LE_DIODE, GPIO_OUT);
    while (true) {
        bool button1_state = gpio_get(BUTTON_1_PIN);
        bool button2_state = gpio_get(BUTTON_2_PIN);
        gpio_pull_down(BUTTON_1_PIN);
        gpio_pull_down(BUTTON_2_PIN);
        if (button1_state && button2_state) {
            gpio_put(LE_DIODE, 1);
        } else {
            gpio_put(LE_DIODE, 0);
        }
        button1_state = false;
        button2_state = false;
    }
}