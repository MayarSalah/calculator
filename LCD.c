/*
 * LCD.c
 *
 * Created: 12/11/2020 4:18:51 PM
 *  Author: dell
 */ 
#include "LCD.h"


void LCD_init(void)
{
	_delay_ms(20);
	write(RW,std_low);
	LCD_Cmd(0x33);
	_delay_us(150);
	LCD_Cmd(0x32);
	LCD_Cmd(0x28);
	LCD_Cmd(0x06);
	LCD_Cmd(0x0C);
	LCD_Cmd(0x01);
	_delay_ms(2);
	
}
void LCD_Cmd(UINT8 Cmd)
{
	LCD_DATAPORT= (LCD_DATAPORT &=(0x0F))|(Cmd &(0xF0));
	write(RS,std_low);
	write(E,std_low);
	_delay_us(100);
	write(E,std_high);
	_delay_ms(5);
LCD_DATAPORT= (LCD_DATAPORT &=(0x0F))|(Cmd<<4);
	
	write(RS,std_low);
	write(E,std_low);
	_delay_us(100);
	write(E,std_high);
	//_delay_ms(2);//i can neglet it here
	
	
	
}
void LCD_SendChar(char  data)
{
	LCD_DATAPORT= (LCD_DATAPORT &=(0x0F))|(data &(0xF0));
	write(RS,std_high);
	write(E,std_low);
	_delay_us(100);
	write(E,std_high);
	_delay_ms(2);
	LCD_DATAPORT= (LCD_DATAPORT &=(0x0F))|(data<<4);
	write(E,std_low);
	_delay_us(100);
	write(E,std_high);
	_delay_ms(2);
	
}
void LCD_SendString(char * string)
{
	
	UINT8 i=0;
	while(string[i]!='\0')
	{
		LCD_SendChar(string[i]);
		i++;
		
	};
}


void LCD_SendStringPOS(char * string,UINT8 LINE,UINT8 POS)
{
	switch(LINE)
	{
	case 1:
	LCD_Cmd((0x80|(POS&0x0F)));
	LCD_SendString(string);
	break;
	
	case 2:
	LCD_Cmd((0xC0|(POS&0x0F)));
	LCD_SendString(string);
	break;
	
	};
	
}
void LCD_CUSTOMCHAR (UINT8 loc,UINT8 * msg)
{
	if(loc<8){
	LCD_Cmd((0x40+loc*8));
	for (UINT8 i=0;i<8;i++)
	{
		LCD_SendChar(msg[i]);
	};
	
	};
	}