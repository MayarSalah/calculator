/*
 * DIO.h
 *
 * Created: 12/5/2020 6:35:43 PM
 *  Author: dell
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "std.h"
#include "dio_hw.h"
#include "DIOTYPES.h"
#include "bitmath.h"

void write(Dio_channelstypes channelID,stdlevel_types channellevel);
stdlevel_types read(Dio_channelstypes channelID);
#endif /* DIO_H_ */