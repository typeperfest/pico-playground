#include "pico/stdlib.h"
#include "hardware/pio.h"

#include "main.pio.h"

int main() {
#ifndef PICO_DEFAULT_LED_PIN
#warning pio/main_pio example requires a board with a regular LED
#else
    // choose PIO from 2 different PIO's
    PIO pio = pio0;
    uint offset = pio_add_program(pio, &hello_program);

    // Find a free state machine on our chosen PIO (erroring if there are
    // none). Configure it to run our program, and start it, using the
    // helper function we included in our .pio file.
    uint sm = pio_claim_unused_sm(pio0, true);
    hello_program_init(pio, sm, offset, PICO_DEFAULT_LED_PIN);

    // The state machine is now running. Any value we push to its TX FIFO will
    // appear on the LED pin.
    while (true) {
        // Blink 
        pio_sm_put_blocking(pio, sm, 1);
        sleep_ms(500);
        // Blonk
        pio_sm_put_blocking(pio, sm, 0);
        sleep_ms(500);
    }
#endif
}