#include <16F887.h>
#pragma config FOSC = HS
#define _XTAL_FREQ 7372800

void main(void)
{
while (1) {
        // Turn LED on
        RC0 = 1;
        // Wait for 500 milliseconds
        __delay_ms(500);

        // Turn LED off
        RC0 = 0;
        // Wait for 500 milliseconds
        __delay_ms(500);
    }
}
