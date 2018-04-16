/*
 * DIO.c
 *
 *  Created on: Mar 31, 2018
 *      Author: ljose
 */
#include"Types.h"
#include"Registers.h"
#include"Bit.h"
#include"DIO.h"
void DIO_vidSetPortDirection(u8 port,u8 value)
{
	switch(port)
	{
	case 0:DDRA=value;break;
	case 1:DDRB=value;break;
	case 2:DDRC=value;break;
	case 3:DDRD=value;break;

	}
}
void DIO_vidSetPortValue(u8 port,u8 value)
{
	switch(port)
	{
		case 0:PortA=value;break;
		case 1:PortB=value;break;
		case 2:PortC=value;break;
		case 3:PortD=value;break;

	}
}
void DIO_vidSetPinDirection(u8 port,u8 pin,u8 value)
{
switch(port)
{
case 0:
	if(value==1)
{
	Set_Bit(DDRA,pin);
}
else
{
	Clr_Bit(DDRA,pin);
}
break;
case 1:
if(value==1){
	Set_Bit(DDRB,pin);
}
else{
	Clr_Bit(DDRB,pin);
}
break;
case 2:
if(value==1){
	Set_Bit(DDRC,pin);
}
else{
	Clr_Bit(DDRC,pin);
}
break;
case 3:
if(value==1){
	Set_Bit(DDRD,pin);
}
else{
	Clr_Bit(DDRD,pin);
}
break;
}
}

void DIO_vidSetPinValue(u8 port,u8 pin,u8 value){
switch(port){
case 0:
if(value==1){
	Set_Bit(PortA,pin);
}
else{
	Clr_Bit(PortA,pin);
}
break;
case 1:
if(value==1){
	Set_Bit(PortB,pin);
}
else{
	Clr_Bit(PortB,pin);
}
break;
case 2:
if(value==1){
	Set_Bit(PortC,pin);
}
else{
	Clr_Bit(PortC,pin);
}
break;
case 3:
if(value==1){
	Set_Bit(PortD,pin);
}
else{
	Clr_Bit(PortD,pin);
}
break;
}
}

u8 DIO_u8ReadPort(u8 port){
	u8 value;
	switch(port){
	case 0:value=PINA;break;
	case 1:value=PINB;break;
	case 2:value=PINC;break;
	case 3:value=PIND;break;
	}
	return value;
}



