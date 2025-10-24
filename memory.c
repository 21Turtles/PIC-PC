#include <stdio.h>
#include <16F887.h>

#pragma config FOSC = HS
#pragma config LVP = ON //The ZEPPP programmer uses this
#define _XTAL_FREQ 7372800 //7.3728 MHz Crystal External Oscillator

//Write Enable Pin: RD3
//Input Pins: RC7-RC6-RC5-RC4
//Selector Pins: RD7-RD6-RD5-RD4
//Output Pins: RC3-RC2-RC1-RC0

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
    
int x = RD3; //Read (0) or Write (1)
    
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
        if (x == 1) {
        a0 = a;
        b0 = b;
        c0 = c;
        d0 = d;
        } else {
            RC0 = a0;
            RC1 = b0;
            RC2 = c0;
            RC3 = d0;
        }
    } else if (y3 == 0 && y2 == 0 && y1 == 0 && y0 == 1) {
        if (x == 1) {
        a1 = a;
        b1 = b;
        c1 = c;
        d1 = d;
        } else {
            RC0 = a1;
            RC1 = b1;
            RC2 = c1;
            RC3 = d1;
        }
    } else if (y3 == 0 && y2 == 0 && y1 == 1 && y0 == 0) {
        if (x == 1) {
        a2 = a;
        b2 = b;
        c2 = c;
        d2 = d;
        } else {
            RC0 = a2;
            RC1 = b2;
            RC2 = c2;
            RC3 = d2;
        }
    } else if (y3 == 0 && y2 == 0 && y1 == 1 && y0 == 1) {
        if (x == 1) {    
        a3 = a;
        b3 = b;
        c3 = c;
        d3 = d;
        } else {
            RC0 = a3;
            RC1 = b3;
            RC2 = c3;
            RC3 = d3;
        }
    } else if (y3 == 0 && y2 == 1 && y1 == 0 && y0 == 0) {
        if (x == 1) {
        a4 = a;
        b4 = b;
        c4 = c;
        d4 = d;
        } else {
            RC0 = a4;
            RC1 = b4;
            RC2 = c4;
            RC3 = d4; 
        }
    } else if (y3 == 0 && y2 == 1 && y1 == 0 && y0 == 1) {
        if (x == 1) {
        a5 = a;
        b5 = b;
        c5 = c;
        d5 = d;
        } else {
            RC0 = a5;
            RC1 = b5;
            RC2 = c5;
            RC3 = d5;
        }
    } else if (y3 == 0 && y2 == 1 && y1 == 1 && y0 == 0) {
        if (x == 1) {
        a6 = a;
        b6 = b;
        c6 = c;
        d6 = d;
        } else {
            RC0 = a6;
            RC1 = b6;
            RC2 = c6;
            RC3 = d6;
        }
    } else if (y3 == 0 && y2 == 1 && y1 == 1 && y0 == 1) {
        if (x == 1) {
        a7 = a;
        b7 = b;
        c7 = c;
        d7 = d;
        } else {
            RC0 = a7;
            RC1 = b7;
            RC2 = c7;
            RC3 = d7;
        }
    }

}
        
}
