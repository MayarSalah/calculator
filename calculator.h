/*
 * calculator.h
 *
 * Created: 12/13/2020 1:50:18 AM
 *  Author: dell
 */ 


#ifndef CALCULATOR_H_
#define CALCULATOR_H_

#include "keybad.h"
#include <stdlib.h>
long calculated_num[10];
long operators[10];
void summation();
void arrayofnum(long * arr ,long num);
void operation(long * u,long W,UINT8 oper);
void reaarrange_calculation (long * arr_num ,long * arr_opreators, UINT8 oper );
void calculation_function(long * arr_num ,long * arr_operators);
void cleararr(long * V);



#endif /* CALCULATOR_H_ */