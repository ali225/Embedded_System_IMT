/*
 * main.c
 *
 *  Created on: Apr 4, 2018
 *      Author: My
 */
#include <avr/io.h>
#include "types.h"
#include "Register.h"
#include <avr/delay.h>
#include  "DIO.h"


int main(void)
{

	DDRA =0b11111111; // 255
	DDRB =0b11111111; // 255


	while(1)
	{

		PORTA =0b00101110; // number 0
		PORTB =0b00100000; // number 0
	}
}
