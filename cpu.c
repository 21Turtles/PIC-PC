#include <16F628A.h>
#use delay(clock=4000000)
#fuses NOWDT, HS, PUT, NOPROTECT, BROWNOUT, MCLR, NOLVP, NOCPD
void main(void)
{
 setup_comparator(NC_NC_NC_NC);
 setup_vref(FALSE);
 set_tris_b(0b11111110);
 
 while( 1 )
 {
  output_low(PIN_A2);
  delay_ms(500);
  output_high(PIN_A2);
  delay_ms(500);
 }
}
