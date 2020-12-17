/*
 * bitmath.h
 *
 * Created: 12/5/2020 6:09:39 PM
 *  Author: dell
 */ 


#ifndef BITMATH_H_
#define BITMATH_H_


#define setbit(reg,bitnum) (reg|=(1<<bitnum))
#define clearbit(reg,bitnum) (reg &=~ (1<<bitnum))
#define togglebit(reg,bitnum) (reg ^=(1<<bitnum))
#define getbit(reg,bitnum) ((reg >> bitnum)&1)

#endif /* BITMATH_H_ */