#include "types.h"
#include "Register.h"
#include "micro.h"

void DIO_vid_SetPinDirection(u8 Port , u8 Pin , u8 Value)
{
	switch(Port)
	{
	case 0:
		if(Value == 1)
			Set_Bit(DDRA,Pin);
		else if (Value == 0)
			Clr_Bit(DDRA,Pin);
		break;

	case 1:
		if(Port == 1)
			Set_Bit(DDRB,Pin);
		else if (PORTA == 0)
			Clr_Bit(DDRB,Pin);
		break;

	}

}

void DIO_vid_SetPinValue(u8 Port , u8 Pin , u8 Value)
{
	switch(Port)
	{
	case 0:
		if(Value == 1)
			Set_Bit(PORTA,Pin);
		else if(Value == 0)
			Clr_Bit(PORTA,Pin);
		break;

	case 1:
		if(Port == 1)
			Set_Bit(PORTB,Pin);
		else if(Port == 0)
			Clr_Bit(PORTB,Pin);
		break;

	}

}

u8 DIO_ReadPort(u8 Port)
{
	u8 value ;
	switch(Port)
	{

	case 0:
		value = PINA;
		break;
	case 1:
		value = PINB;
		break;

	}

	return value;
}

void DIO_vid_SetPortDirection(u8 port ,u8 Value)
{ 
	switch(port)
	{
	case 0:
		DDRA = Value;
		break;
	case 1:
		DDRB = Value;
		break;
	case 2:
		DDRA = Value;
		break;
	case 3:
		DDRA = Value;
		break;

	}
}

void DIO_vid_SetPortValue(u8 port ,u8 Value)
{ 
	switch(port)
	{
	case 0:
		PORTA = Value;
		break;
	case 1:
		PORTB= Value;
		break;
	case 2:
		PORTA = Value;
		break;
	case 3:
		PORTA = Value;
		break;

	}


}
