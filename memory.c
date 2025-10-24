#include <stdio.h>
#include <16F887.h>

#pragma config FOSC = HS
#pragma config LVP = ON //The ZEPPP programmer uses this
#define _XTAL_FREQ 7372800 //7.3728 MHz Crystal External Oscillator

void main(void)
{
    TRISC = 0b11110000; //First 4 Pins are set as outputs (0), last 4 are set as inputs (0)
    PORTC = 0x00; //init all port C pins at 0

    TRISD = 0x00; //all port D pins to input
    PORTD= 0x00; //init all pins on port D

//4b-it input
int a = RC4; //Input 1
int b = RC5; //Input 2
int c = RC6; //Input 3
int d = RC7; //Input 4

//Outputs is RC0,1,2,3- 4-bit

int o0 = RC0; //Input 1
int o1 = RC1; //Input 2
int o2 = RC2; //Input 3
int o3 = RC3; //Input 4
    
int x = 0; //Read or Write
    
//Memory Address Selector
int y0 = RD4; //Selector 1
int y1 = RD5; //Selector 2
int y2 = RD6; //Selector 3
int y3 = RD7; //Selector 4
    
//8 Byte memory
//Stores 8 4-Bit numbers
int a0 = 0; int b0 = 0; int c0 = 0; int d0 = 0; //byte 1 - Address id = 0000 0
int a1 = 0; int b1 = 0; int c1 = 0; int d1 = 0; //byte 2 - Address id = 0001 1
int a2 = 0; int b2 = 0; int c2 = 0; int d2 = 0; //byte 3 - Address id = 0010 2
int a3 = 0; int b3 = 0; int c3 = 0; int d3 = 0; //byte 4 - Address id = 0011 3
int a4 = 0; int b4 = 0; int c4 = 0; int d4 = 0; //byte 5 - Address id = 0100 4
int a5 = 0; int b5 = 0; int c5 = 0; int d5 = 0; //byte 6 - Address id = 0101 5
int a6 = 0; int b6 = 0; int c6 = 0; int d6 = 0; //byte 7 - Address id = 0110 6
int a7 = 0; int b7 = 0; int c7 = 0; int d7 = 0; //byte 8 - Address id = 0111 7
    
while (1) {
    if (y3 == 0 && y2 == 0 && y1 == 0 && y0 == 0) {
        a0 = a;
        b0 = b;
        c0 = c;
        d0 = d;
    } else if (y3 == 0 && y2 == 0 && y1 == 0 && y0 == 1) {
        a1 = a;
        b1 = b;
        c1 = c;
        d1 = d;
    } else if (y3 == 0 && y2 == 0 && y1 == 1 && y0 == 0) {
        a2 = a;
        b2 = b;
        c2 = c;
        d2 = d;
    } else if (y3 == 0 && y2 == 0 && y1 == 1 && y0 == 1 {
        a3 = a;
        b3 = b;
        c3 = c;
        d3 = d;
    } else if (y3 == 0 && y2 == 1 && y1 == 0 && y0 == 0 {
        a4 = a;
        b4 = b;
        c4 = c;
        d4 = d;
    } else if (y3 == 0 && y2 == 1 && y1 == 0 && y0 == 1 {
        a5 = a;
        b5 = b;
        c5 = c;
        d5 = d;
    } else if (y3 == 0 && y2 == 1 && y1 == 1 && y0 == 0 {
        a6 = a;
        b6 = b;
        c6 = c;
        d6 = d;
    } else if (y3 == 0 && y2 == 1 && y1 == 1 && y0 == 1 {
        a7 = a;
        b7 = b;
        c7 = c;
        d7 = d;
    }








    






        
}
        
}
