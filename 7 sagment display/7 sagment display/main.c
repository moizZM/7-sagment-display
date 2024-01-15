#include <avr/io.h>
#define F_CPU 1000000UL
#include "util/delay.h"

int main(void)
{
  DDRA = 0xFF;
  PORTA = 0x00;
  
  unsigned char i;
  unsigned char numberslist[] = { 0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F,0x6F};
  
    while (1) 
    {
		for (i =0;i<10;i++)
		{
			PORTA = numberslist[i];
			_delay_ms(1000);
		}
		_delay_ms(1000);
    }
}

