/*
 * Main.c


 *
 *  Created on: Apr 13, 2018
 *      Author: Gogo
 */
#include <avr/io.h>
#include<avr/delay.h>
#include "Types.h"
#include"LCDc.h"

int  main (void)
{

	while(1){
		/*Init LCD */
		LCD_vidInit();

		/*writ CGRAM this order  */
		LCD_vidwriteCommand(0x40);

		/*the draw Arabic A */
		LCD_vidwriteCharacter(0x00);
		LCD_vidwriteCharacter(0xFF);
		LCD_vidwriteCharacter(0x10);
		LCD_vidwriteCharacter(0x10);
		LCD_vidwriteCharacter(0x10);
		LCD_vidwriteCharacter(0xFF);
		LCD_vidwriteCharacter(0x00);
		LCD_vidwriteCharacter(0x00);

		/*the draw Arabic L */

		LCD_vidwriteCharacter(0x04);
		LCD_vidwriteCharacter(0x04);
		LCD_vidwriteCharacter(0x04);
		LCD_vidwriteCharacter(0x04);
		LCD_vidwriteCharacter(0x04);
		LCD_vidwriteCharacter(0x1F);
		LCD_vidwriteCharacter(0x00);
		LCD_vidwriteCharacter(0x00);

		/*the draw Arabic i */
		LCD_vidwriteCharacter(0x00);
		LCD_vidwriteCharacter(0x00);
		LCD_vidwriteCharacter(0x00);
		LCD_vidwriteCharacter(0x00);
		LCD_vidwriteCharacter(0x00);
		LCD_vidwriteCharacter(0x11);
		LCD_vidwriteCharacter(0x11);
		LCD_vidwriteCharacter(0xFF);

		/*the draw Smail ^_^  */
		LCD_vidwriteCharacter(0x00);
		LCD_vidwriteCharacter(0x00);
		LCD_vidwriteCharacter(0x0A);
		LCD_vidwriteCharacter(0x00);
		LCD_vidwriteCharacter(0x11);
		LCD_vidwriteCharacter(0x0E);
		LCD_vidwriteCharacter(0x00);
		LCD_vidwriteCharacter(0x00);

		//	LCD_vidwriteCharacter('a');
		//  LCD_vidWritnumber(100);


		char array[]={12,11,10,9,8,7,6,5,4,3,2,1,0};

		for (int j= 0 ; j < 12; j++){
			LCD_vidsetposition(1,array[j]);

			/*print smail*/
			LCD_vidwriteCharacter(3);
			/*print i*/
			LCD_vidwriteCharacter(2);
			/*print ل*/
			LCD_vidwriteCharacter(1);
			/*print ع*/
			LCD_vidwriteCharacter(0);

			/*write the row two and start 0  */
			LCD_vidsetposition(2,j);
			/*print array that */
			u8 arr[]="ALi";
			LCD_vidwriteString(arr);
			LCD_vidwriteCharacter(3);
			_delay_ms(1000);

			LCD_vidClear(0xFF);
			_delay_ms(1);
		}

		for (int i=12;i>0;i--){

			LCD_vidsetposition(1,array[i]);

			/*print smail*/
			LCD_vidwriteCharacter(3);
			/*print i*/
			LCD_vidwriteCharacter(2);
			/*print ل*/
			LCD_vidwriteCharacter(1);
			/*print ع*/
			LCD_vidwriteCharacter(0);

			/*write the row two and start 0  */
			LCD_vidsetposition(2,i);
			/*print array that */
			u8 arr[]="ALi";
			LCD_vidwriteString(arr);
			LCD_vidwriteCharacter(3);
			_delay_ms(1000);

			LCD_vidClear(0xFF);
			_delay_ms(1);
		}

	}

}
