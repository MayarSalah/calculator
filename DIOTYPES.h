/*
* DIOTYPES.h
*
* Created: 12/5/2020 6:25:27 PM
*  Author: dell
*/


#ifndef DIOTYPES_H_
#define DIOTYPES_H_
typedef enum{
	dio_channel_A0=0,
	dio_channel_A1,
	dio_channel_A2,
	dio_channel_A3,
	dio_channel_A4,
	dio_channel_A5,
	dio_channel_A6,
	dio_channel_A7,
	
	
	dio_channel_B0,
	dio_channel_B1,
	dio_channel_B2,
	dio_channel_B3,
	dio_channel_B4,
	dio_channel_B5,
	dio_channel_B6,
	dio_channel_B7,
	
	dio_channel_C0,
	dio_channel_C1,
	dio_channel_C2,
	dio_channel_C3,
	dio_channel_C4,
	dio_channel_C5,
	dio_channel_C6,
	dio_channel_C7,
	
	dio_channel_D0,
	dio_channel_D1,
	dio_channel_D2,
	dio_channel_D3,
	dio_channel_D4,
	dio_channel_D5,
	dio_channel_D6,
	dio_channel_D7,
}Dio_channelstypes;

typedef enum{
	DIO_PORTA=0,
	DIO_PORTB,
	DIO_PORTC,
	DIO_PORTD,
	
}Dio_portstypes;
typedef enum{
	input=0,
	output
}Dio_dirstypes;


#endif /* DIOTYPES_H_ */