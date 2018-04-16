/*
 * LCD.c
 *
 *  Created on: Apr 13, 2018
 *      Author: Gogo
 */
# include"LCD_Cfg.h"
# include"Types.h"
# include"Dio.h"
# include"Registers.h"
# include<avr/delay.h>
void LCD_vidwriteCharacter(u8 data)
{
	DIO_vidSetPortValue(LCD_Port,data);
	DIO_vidSetPinValue(LCD_Control,RS,1);
	DIO_vidSetPinValue(LCD_Control,RW,0);
	DIO_vidSetPinValue(LCD_Control,E,0);
	_delay_ms(1);
	DIO_vidSetPinValue(LCD_Control,E,1);
	_delay_ms(2);

}
void LCD_vidwriteCommand(u8 data)
{
	DIO_vidSetPortValue(LCD_Port,data);
	DIO_vidSetPinValue(LCD_Control,RS,0);
	DIO_vidSetPinValue(LCD_Control,RW,0);
	DIO_vidSetPinValue(LCD_Control,E,1);
	_delay_ms(1);
	DIO_vidSetPinValue(LCD_Control,E,1);
	_delay_ms(2);

}
void LCD_vidInit(void)
{
	DIO_vidSetPortDirection(LCD_Port,0XFF);
	DIO_vidSetPinDirection(LCD_Control,RS,1);
	DIO_vidSetPinDirection(LCD_Control,RW,1);
	DIO_vidSetPinDirection(LCD_Control,E,1);
	_delay_ms(50);
	LCD_vidwriteCommand(0b00111000);
	_delay_ms(1);
	LCD_vidwriteCommand(0b00001100);
	_delay_ms(1);
	LCD_vidwriteCommand(0b00000000);
	_delay_ms(2);
}
void LCD_vidwriteString(u8 *arr)
{
	u8 i=0;
	while(arr[i]!='\0')
	{
		LCD_vidwriteCharacter (arr[i]);
		i++;
	}
}


