

#ifndef vv
#define  vv

void DIO_vid_SetPortDirection(u8 port ,u8 Value);
void DIO_vid_SetPortValue(u8 port ,u8 Value);
void DIO_vid_SetPinDirection(u8 Port , u8 Pin , u8 Value);
void DIO_vid_SetPinValue(u8 Port , u8 Pin , u8 Value);
u8 DIO_ReadPort(u8 port);

#endif
