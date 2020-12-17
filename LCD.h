/*
 * LCD.h
 *
 * Created: 12/11/2020 4:18:32 PM
 *  Author: dell
 */ 


#ifndef LCD_H_
#define LCD_H_
#include "DIO.h"
#include "DIOCONFIG.h"
#define  F_CPU 16000000UL
#include <util/delay.h>


//Data
#define LCD_DATAPORT  PORTA_reg


//control
#define LCD_CONTROLPORT  PORTB_reg
#define RS dio_channel_B1
#define RW dio_channel_B2
#define E dio_channel_B3

void LCD_init(void);
void LCD_Cmd(UINT8 Cmd);
void LCD_SendChar(char  data);
void LCD_SendString(char * string);
void LCD_SendStringPOS(char * string,UINT8 LINE,UINT8 POS);
void LCD_CUSTOMCHAR (UINT8 loc,UINT8 * msg);
#endif /* LCD_H_ */