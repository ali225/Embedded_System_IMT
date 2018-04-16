/*
 * Main.c
 *
 *  Created on: Apr 13, 2018
 *      Author: Gogo
 */
#include "Types.h"
#include"LCDc.h"
void main (void)
{
   LCD_vidInit();
   u8 arr[]="Hello";
   LCD_vidwriteString(arr);
}
