/*
* DIOCONFIG.h
*
* Created: 12/5/2020 6:36:05 PM
*  Author: dell
*/


#ifndef DIOCONFIG_H_
#define DIOCONFIG_H_
#include "DIO.h"
#define dio_count 32
typedef struct
{
	Dio_dirstypes pindir;
	stdlevel_types level;
}DIO_PINCONFGTYPE;
void DIO_INI();



#endif /* DIOCONFIG_H_ */