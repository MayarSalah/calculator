/*
 * keybad.h
 *
 * Created: 12/12/2020 3:46:43 PM
 *  Author: dell
 */ 


#ifndef KEYBAD_H_
#define KEYBAD_H_

#include "LCD.h"
 UINT8 ZER0;
#define C0 dio_channel_C0
#define C1 dio_channel_C1
#define C2 dio_channel_C2
#define C3 dio_channel_C3


#define R0 dio_channel_C4
#define R1 dio_channel_C5
#define R2 dio_channel_C6
#define R3 dio_channel_C7


long CheckR0();
long CheckR1();
long CheckR2();
long CheckR3();
void keypad_ini();


#endif /* KEYBAD_H_ */