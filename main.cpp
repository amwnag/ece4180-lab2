#include "mbed.h"

// Cylon style LED scanner
// BusOut led_state(LED1, LED2, LED3, LED4);

DigitalIn enable(p26);
DigitalOut led(p23);

DigitalOut debug(LED1);

int main() {
     while(1) {
        debug = 0;

        if (enable) { // button released
            debug = 1;
            wait(0.2);
            debug = 0;
            wait(0.2);

            led = 0;
            wait(0.2);
        } else {
            led = 1;
            wait(0.2);
        }
    }
}
