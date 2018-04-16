/*
 * main.c

 *
 *  Created on: Apr 1, 2018
 *      Author: My
 */
#include <avr/delay.h>
#include"types.h"
#include "Register.h"
#include <avr/io.h>


int main(void)
{
	DDRA = 0xff;
	DDRB = 0xff;
	DDRC = 0xff;


	char array[]={0b00000100,0b01000000,0b00000000,0b11100100,0b00001000,0b01001000,0b11010000,0b01100000,0b00100010,0b11110100};
	/* write hex value for CA display from 0 to 9 */

	while(1)
	{

		for(int i=0;i<3;i++)
		{
			PORTC = (1 << i);
			_delay_ms(300);

			for(int j=4;j<10;j++)
			{
				PORTB = array[j]; /* write data on to the LED port */
				_delay_ms(300); /* wait for 1 second */

				for(int i=0;i<10;i++)
				{
					PORTA = array[i]; /* write data on to the LED port */
					_delay_ms(300); /* wait for 1 second */
				}
			}

		}
	}
}
/////////////////////////////////////////////////////
/*int main(void)
{
	uint8_t i;
	DDRA = 0xff;

	while(1)
	{
		for(i=0;i<=7;i++)
		{

			PORTA = (1 << i);
			_delay_ms(1000);

		}

	}
	return 0;
}

// the first cod sloution
int main(void)
{

	 DDRA =0b11111111;


	while(1){



		PORTA =0b00000100; // Number 0
		_delay_ms(1000);
		PORTA =0b01000000; // Number 9
		_delay_ms(1000);
		PORTA =0b00000000; // Number 8
		_delay_ms(1000);
		PORTA =0b11100100; // Number 7
		_delay_ms(1000);
		PORTA =0b00001000; // Number 6
		_delay_ms(1000);
		PORTA =0b01001000; // Number 5
		_delay_ms(1000);
		PORTA =0b11010000; // Number 4
		_delay_ms(1000);
		PORTA =0b01100000; // Number 3
		_delay_ms(1000);
		PORTA =0b00100010; // Number 2
		_delay_ms(1000);
		PORTA =0b11110100; // Number 1
		_delay_ms(1000);




	}




}*/
