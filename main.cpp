#include "mbed.h"

DigitalIn button(p22);
DigitalOut red(p21);


int main() {
    red = 0;
    while(1) {
        if (button) { // not pressed
            red = 0;
        } else {
            red = 1;
        }
        wait(0.2);
    }
}