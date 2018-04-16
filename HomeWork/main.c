/*
 * main.c
 *
 *  Created on: Apr 1, 2018
 *      Author: My
 */
#include <avr/delay.h>
#include <avr/io.h>
#define F_CPU 12000000UL
#include"types.h"
#include "Register.h"
#include "micro.h"

int main(void)
{
	DDRA =0b11111111;
	while(1)
	{
		PORTA = 0b00111111; // Number 0
		_delay_ms(1000);
		PORTA = 0b00100000; // Number 1
		_delay_ms(1000);
		PORTA = 0b01011011; // Number 2
		_delay_ms(1000);
		PORTA = 0b01001111; // Number 3
		_delay_ms(1000);
		PORTA = 0b01100110; // Number 4
		_delay_ms(1000);
		PORTA = 0b01101101; // Number 5
		_delay_ms(1000);
		PORTA = 0b01111101; // Number 6
		_delay_ms(1000);
		PORTA = 0b00000111; // Number 7
		_delay_ms(1000);
		PORTA = 0b11111111; // Number 8
		_delay_ms(1000);
		PORTA = 0b01101111; // Number 9
		_delay_ms(1000);
	}
	return 0;
}

/*int main (void)
{
	Set_Bit(DDRB,PB0);
	Set_Bit(DDRB,PB1);
	Set_Bit(DDRB,PB2);
	Set_Bit(DDRB,PB3);

	while(1)
	{
		int i;
		for(i=0;i<=9;i++)
		{
			PORTB=i;
			_delay_ms(1000);
		}

		_delay_ms(1000);
		for(i=9;i>=0;i--)
		{
			PORTB=i;
			_delay_ms(1000);
		}

		_delay_ms(1000);

	}
	return 0;
}
 */
