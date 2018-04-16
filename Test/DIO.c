#include "types.h"
#include "Register.h"


void DIO_vidSetPortDirection(u8 port ,u8 Value)
{ 
	switch(port)
	{
	case 0:
		DDRA = Value;
		break;
	case 1:
		DDRA = Value;
		break;
	case 2:
		DDRA = Value;
		break;
	case 3:
		DDRA = Value;
		break;

	}
}

void DIO_vidSetPortValue(u8 port ,u8 Value)
{ 
	switch(port)
	{
	case 0:
		PORTA = Value;
		break;
	case 1:
		PORTA = Value;
		break;
	case 2:
		PORTA = Value;
		break;
	case 3:
		PORTA = Value;
		break;

	}


}
