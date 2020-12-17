/*
 * lcd_keybad_layered.c
 *
 * Created: 12/12/2020 3:41:47 PM
 * Author : dell
 */ 

#include "calculator.h"


int main(void)
{
	DIO_INI();
	LCD_init();
	 keypad_ini();
	
  
    while (1) 
    {
		
		summation();
    }
}

