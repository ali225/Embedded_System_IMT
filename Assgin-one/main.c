/*
 * main.c
 *
 *  Created on: Apr 5, 2018
 *      Author: My
 */

#include <avr/delay.h>
#include"types.h"
#include "Register.h"
#include <avr/io.h>

int sevenfor_60();
int sevenfor_10();


int main(void)
{
	DDRA = 0xff;
	DDRB = 0xff;
	DDRC = 0b11111111;


	while(1)
	{
		PORTC = 0b00000001;
		_delay_ms(300);
		sevenfor_60();
		PORTC = 0b00000010;
		_delay_ms(300);
		sevenfor_10();
		PORTC = 0b00000100;
		_delay_ms(300);
		sevenfor_60();


	}

}

int sevenfor_60()
{
	char array[]={0b00000100,0b01000000,0b00000000,0b11100100,0b00001000,0b01001000,0b11010000,0b01100000,0b00100010,0b11110100};

	for(int j=5;j<10;j++)
	{
		PORTB = array[j];
		_delay_ms(300);

		for(int i=0;i<10;i++)
		{
			PORTA = array[i];
			_delay_ms(300);
		}
	}
	return 0;
}


int sevenfor_10()
{
	char array[]={0b00000100,0b01000000,0b00000000,0b11100100,0b00001000,0b01001000,0b11010000,0b01100000,0b00100010,0b11110100};

	for(int j=9;j<10;j++)
	{
		PORTB = array[j];
		_delay_ms(300);

		for(int i=0;i<10;i++)
		{
			PORTA = array[i];
			_delay_ms(300);
		}
	}
	return 0;
}
