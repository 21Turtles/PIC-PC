#include <stdio.h>
#include <16F887.h>

#pragma config FOSC = HS
#pragma config LVP = ON //The ZEPPP programmer uses this
#define _XTAL_FREQ 7372800 //7.3728 MHz Crystal External Oscillator

void main(void)
{
    TRISC = 0b00001111; //First 4 Pins are set as inputs (1), last 4 are set as outputs (0)
    PORTC = 0x00; //init all port C pins at 0

int a = RC0; //Input 1
int b = RC1; //Input 2
int c = RC2; //Input 3
int d = RC3; //Input 4
int x = 0; //

//8 Byte memory
//Stores 8 4-Bit numbers
int a0 = 0; int b0 = 0; int c0 = 0; int d0 = 0; //byte 1
int a1 = 0; int b1 = 0; int c1 = 0; int d1 = 0; //byte 2
int a2 = 0; int b2 = 0; int c2 = 0; int d2 = 0; //byte 3
int a3 = 0; int b3 = 0; int c3 = 0; int d3 = 0; //byte 4
int a4 = 0; int b4 = 0; int c4 = 0; int d4 = 0; //byte 5
int a5 = 0; int b5 = 0; int c5 = 0; int d5 = 0; //byte 6
int a6 = 0; int b6 = 0; int c6 = 0; int d6 = 0; //byte 7
int a7 = 0; int b7 = 0; int c7 = 0; int d7 = 0; //byte 8
    
while (1) {
    if (a == 1 && x==) {
        a0
    }
}
        
}
