/*
 * DIO.c
 *
 * Created: 12/5/2020 6:36:25 PM
 *  Author: dell
 */ 
#include "DIO.h"
void write(Dio_channelstypes channelID,stdlevel_types channellevel){
Dio_portstypes   portx=channelID/8;
Dio_channelstypes channelpos= channelID%8;
switch (portx){
	case DIO_PORTA:
	if (channellevel==std_high)
	{
		setbit(PORTA_reg,channelpos);
	} 
	else
	{
		clearbit(PORTA_reg,channelpos);
		
	}
	
	break;
	
	case DIO_PORTB:
	if (channellevel==std_high)
	{
		setbit(PORTB_reg,channelpos);
	}
	else
	{
		clearbit(PORTB_reg,channelpos);
		
	}
	
	break;
	
	case DIO_PORTC:
	if (channellevel==std_high)
	{
		setbit(PORTC_reg,channelpos);
	}
	else
	{
		clearbit(PORTC_reg,channelpos);
		
	}
	
	break;
	
	case DIO_PORTD:
	
	if (channellevel==std_high)
	{
		setbit(PORTD_reg,channelpos);
	}
	else
	{
		clearbit(PORTD_reg,channelpos);
		
	}
	break;
	
};
}

stdlevel_types read(Dio_channelstypes channelID){
	stdlevel_types bitvalue=0;
	Dio_portstypes   portx=channelID/8;
	Dio_channelstypes channelpos= channelID%8;
	switch (portx){
		case DIO_PORTA:
    bitvalue=getbit(PINA_reg,channelpos);
	   break;
		
		case DIO_PORTB:
	 bitvalue=getbit(PINB_reg,channelpos);
		
		break;
		
		case DIO_PORTC:
	 bitvalue=getbit(PINC_reg,channelpos);
		
		break;
		
		case DIO_PORTD:
		
	 bitvalue=getbit(PIND_reg,channelpos);
		break;
		
	};
	
	
	return bitvalue;
	
}