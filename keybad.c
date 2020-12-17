/*
* keybad.c
*
* Created: 12/12/2020 3:47:47 PM
*  Author: dell
*/

#include "keybad.h"


void keypad_ini()
{
	write(C0,std_high);
	write(C1,std_high);
	write(C2,std_high);
	write(C3,std_high);
	
}
long CheckR0()
{   
	long chckr0=0;
	write(R3,std_high);
	write(R0,std_low);
	write(R1,std_high);
	write(R2,std_high);
	
	if ((read (C0)==std_low))
	{
		LCD_SendChar('7');
		chckr0=7;
		while((read (C0))==std_low);
		
	}
	else if ((read (C1)==std_low))
	{
		LCD_SendChar('8');
		chckr0=8;
		while((read (C1))==std_low);
		
	}
else if ((read (C2)==std_low))
	{
		LCD_SendChar('9');
		chckr0=9;
		while((read (C2))==std_low);
		
	}
else if ((read (C3)==std_low))
	{
		LCD_SendChar('/');
		chckr0=10;
		while((read (C3))==std_low);
		
	}
	else{
	chckr0=0;
	
	};
	return chckr0;
	}
long CheckR1()
{
	long chckr1=0;
	write(R0,std_high);
	write(R1,std_low);
	write(R2,std_high);
    write(R3,std_high);
	if ((read (C0)==std_low))
	{
		LCD_SendChar('4');
		chckr1=4;
		while((read (C0))==std_low);
	}
	else if ((read (C1)==std_low))
	{
		LCD_SendChar('5');
		chckr1=5;
		while((read (C1))==std_low);
	}
	else if ((read (C2)==std_low))
	{
		LCD_SendChar('6');
		chckr1=6;
		while((read (C2))==std_low);
	}
else if ((read (C3)==std_low))
	{
		LCD_SendChar('*');
		chckr1=11;
		while((read (C3))==std_low);
	}
	else{
		chckr1=0;
	};
	return chckr1;
}
long CheckR2()
{
	long chckr2=0;
	write(R0,std_high);
	write(R1,std_high);
	write(R2,std_low);
	write(R3,std_high);
	if ((read (C0)==std_low))
	{
		LCD_SendChar('1');
		chckr2=1;
		while((read (C0))==std_low);
		
	}
	else if ((read (C1)==std_low))
	{
		LCD_SendChar('2');
		chckr2=2;
		while((read (C1))==std_low);
	}
else if ((read (C2)==std_low))
	{
		LCD_SendChar('3');
		chckr2=3;
		while((read (C2))==std_low);
	}
else if ((read (C3)==std_low))
	{
		
		LCD_SendChar('-');
		chckr2=12;
		while((read (C3))==std_low);
	}
		else{
			chckr2=0;
			
		};
		return chckr2;
	
}
long CheckR3()
{
long chckr3=0;
	write(R0,std_high);
	write(R1,std_high);
	write(R2,std_high);
	write(R3,std_low);
	if ((read (C0)==std_low))
	{
		LCD_Cmd(0x01);
	//	LCD_SendChar('0');
		chckr3=15;
		while((read (C0))==std_low);
	}
	else if ((read (C1)==std_low))
	{
		LCD_SendChar('0');
		chckr3=0;
		ZER0=1;
		while((read (C1))==std_low);
	}
	else if ((read (C2)==std_low))
	{
		LCD_SendChar('=');
		_delay_ms(20);
		LCD_Cmd(0x01);
		chckr3=14;
		while((read (C2))==std_low);
	}
	else if ((read (C3)==std_low))
	{
		LCD_SendChar('+');
		chckr3=13;
		while((read (C3))==std_low);
	}
	else
	{
		chckr3=0;
	}
	return chckr3;
	
}