#include <stdio.h>
#include <16F887.h>
#pragma config FOSC = HS
#define _XTAL_FREQ 7372800

void main(void)
{
int z = RA6;
int a = (RC0 * z);
int b = (RC1 * z);
int c = (RC2 * z);
int d = (RC3 * z);
int x = 0;
    
int a0 = 0; int b0 = 0; int c0 = 0; int d0 = 0;
int a1 = 0; int b1 = 0; int c1 = 0; int d1 = 0;
int a2 = 0; int b2 = 0; int c2 = 0; int d2 = 0;
int a3 = 0; int b3 = 0; int c3 = 0; int d3 = 0;
    
while (1) {

    }
        
}
