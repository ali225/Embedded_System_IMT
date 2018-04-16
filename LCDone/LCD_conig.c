/*
 * LCD_conig.c

 *
 *  Created on: Apr 13, 2018
 *      Author: My
 */
#include "types.h"
#include <avr/delay.h>
#include "LCD_conig.h"
#include "DIO.h"
#include "LCD.h"
#include "LCD_conig.h"


#define F_CPU 8000000UL



void LCD_vidwrirteChar(u8 data)
{
	DIO_vidSetPinValue(LCD_CONTROL,RS,1);
	DIO_vidSetPinValue(LCD_CONTROL,RW,0);
	DIO_vidSetPortValue(LCD_PORT,data);
	DIO_vidSetPinValue(LCD_CONTROL,E,1);
	_delay_ms(1);
	DIO_vidSetPinValue(LCD_CONTROL,E,0);
	_delay_ms(1);

}

void LCD_vidwrirteCommund(u8 comm)
{
	DIO_vidSetPinValue(LCD_CONTROL,RS,0);
	DIO_vidSetPinValue(LCD_CONTROL,RW,0);
	DIO_vidSetPortValue(LCD_PORT,comm);
	DIO_vidSetPinValue(LCD_CONTROL,E,1);
	_delay_ms(1);
	DIO_vidSetPinValue(LCD_CONTROL,E,0);
	_delay_ms(1);

}
void lcd_vidinint(void)
{
	DIO_vidSetPortDirerection(LCD_PORT,255);
	DIO_vidSetPinDirerection(LCD_CONTROL,RS,1);
	DIO_vidSetPinDirerection(LCD_CONTROL,RW,1);
	DIO_vidSetPinDirerection(LCD_CONTROL,E,1);

	_delay_ms(50);
	LCD_vidwrirteCommund(0b00111000);
	_delay_ms(1);
	LCD_vidwrirteCommund(0b00001100);
	_delay_ms(1);
	LCD_vidwrirteCommund(0b00000001);


}
