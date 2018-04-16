/*
 * main.c
 *
 *  Created on: Mar 31, 2018
 *      Author: My
 */

#include "types.h"
#include "Register.h"
#include <avr/delay.h>
#include  "DIO.h"


void main(void)
{

	DIO_vid_SetPortDirection(0,0);
	DIO_vid_SetPortValue(0,255);

	DIO_vid_SetPortDirection(1,255);

	while(1)
	{
		u8 value = 	DIO_ReadPort(0);
		DIO_vid_SetPortValue(1,value);


	}





	/*while(1)
	{

		DIO_vid_SetPinDirection(0,2,1);
		DIO_vid_SetPinValue(0,2,1);
		_delay_ms(1000);
		DIO_vid_SetPinValue(0,2,0);
		_delay_ms(1000);
	}
*/




	//DIO_vidSetPortDirection(0 ,255);
	//DIO_vidSetPortValue(0 ,255);



}


