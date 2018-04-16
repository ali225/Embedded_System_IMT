#include "types.h"
#include "DIO.h"
#include <avr/delay.h>

void main(void)
{
	DIO_vidSetPortDirerection (0 , 255);
	DIO_vidSetPinDirerection (2 , 0 , 1);
	DIO_vidSetPinDirerection (2 , 1 , 1);

	u8 arr[10]={4,158,34,10,152,72,64,30,0,8};


    u8 j=0;
    u8 k;
    u8 u=0;
	while(1)
	{
		for(k=0;;k++)
		{
			if(k%500==0)
			{
				j++;
				if(j==10)
				{
					u++;
					j=0;
					if(u==6)
					{
						u=0;
						j=0;
					}
				}
			}

		DIO_vidSetPinValue (2,1,0);
		DIO_vidSetPinValue (2,0,1);
		DIO_vidSetPortValue (0 , arr[u]);
		_delay_ms(2);
		DIO_vidSetPinValue (2,0,0);
		DIO_vidSetPinValue (2,1,1);
		DIO_vidSetPortValue (0 , arr[j]);
		_delay_ms(2);
		}
	}
}







