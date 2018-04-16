/*
 * main.c
 *
 *  Created on: Apr 13, 2018
 *      Author: My
 */

#include <avr/delay.h>
#include "LCD.h"
#include "types.h"



void main(void)
{
	lcd_vidinint();

	 LCD_vidwrirteChar('A');
	 LCD_vidwrirteChar('L');
	 LCD_vidwrirteChar('i');


}
