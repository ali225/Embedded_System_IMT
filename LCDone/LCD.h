/*
 * LCD.h
 *
 *  Created on: Apr 13, 2018
 *      Author: My
 */

#include "types.h"

#ifndef LCD_H_
#define LCD_H_


 void  lcd_vidinint(void);
void   LCD_vidwrirteChar(u8 data);
void LCD_vidwrirteCommund(u8 comm);

#endif /* LCD_H_ */