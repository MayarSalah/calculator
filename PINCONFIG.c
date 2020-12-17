/*
* PINCONFIG.c
*
* Created: 12/5/2020 7:07:08 PM
*  Author: dell
*/
#include "DIOCONFIG.h"

const DIO_PINCONFGTYPE  Pincfg[]={
	{output,std_high},
	{output,std_high},
	{output,std_high},
	{output,std_high},
	{output,std_high},
	{output,std_high},
	{output,std_high},
	{output,std_high},
				 
	{output,std_high},
	{output,std_high},
	{output,std_high},
	{output,std_high},
	{output,std_high},
	{output,std_high},
	{output,std_high},
	{output,std_high},
				 
	{input,std_low},
	{input,std_low},
	{input,std_low},
	{input,std_low},
	{output,std_high},
	{output,std_high},
	{output,std_high},
	{output,std_high},
					 
	{output,std_high},
	{output,std_high},
	{output,std_high},
	{output,std_high},
	{output,std_high},
	{output,std_high},
	{output,std_high},
	{output,std_high}
};

void DIO_INI(){
	UINT8 COUNT=0;
	Dio_portstypes   portx;
	Dio_channelstypes channelpos;
	for (COUNT=0;COUNT<dio_count;COUNT++)
	{
		channelpos= COUNT%8;
		portx=COUNT/8;
		switch (portx){
			case DIO_PORTA:
			if (Pincfg[COUNT].pindir==output)
			{
				setbit(DDRA_reg,channelpos);
			} 
			else
			{
				clearbit(DDRA_reg,channelpos);
			}
			
			break;
			case DIO_PORTB:
			if (Pincfg[COUNT].pindir==output)
			{
				setbit(DDRB_reg,channelpos);
			}
			else
			{
				clearbit(DDRB_reg,channelpos);
			}
			
			break;
			case DIO_PORTC:
			if (Pincfg[COUNT].pindir==output)
			{
				setbit(DDRC_reg,channelpos);
			}
			else
			{
				clearbit(DDRC_reg,channelpos);
			}
			
			break;
			case DIO_PORTD:
			if (Pincfg[COUNT].pindir==output)
			{
				setbit(DDRD_reg,channelpos);
			}
			else
			{
				clearbit(DDRD_reg,channelpos);
			}
			
			break;
			};
			
	};
	
	
	
}