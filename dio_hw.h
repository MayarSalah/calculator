/*
 * dio_hw.h
 *
 * Created: 12/5/2020 6:15:34 PM
 *  Author: dell
 */ 


#ifndef DIO_HW_H_
#define DIO_HW_H_
#include "std.h"
#define  PORTA_reg (*((volatile UINT8* )0x3B))
#define  DDRA_reg (*((volatile UINT8* )0x3A))
#define  PINA_reg (*((volatile UINT8* )0x39))


#define  PORTB_reg (*((volatile UINT8* )0x38))
#define  DDRB_reg (*((volatile UINT8* )0x37))
#define  PINB_reg (*((volatile UINT8* )0x36))

#define  PORTC_reg (*((volatile UINT8* )0x35))
#define  DDRC_reg (*((volatile UINT8* )0x34))
#define  PINC_reg (*((volatile UINT8* )0x33))

#define  PORTD_reg (*((volatile UINT8* )0x32))
#define  DDRD_reg (*((volatile UINT8* )0x31))
#define  PIND_reg (*((volatile UINT8* )0x30))

#endif /* DIO_HW_H_ */