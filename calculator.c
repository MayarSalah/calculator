/*
* calculator.c
*
* Created: 12/13/2020 1:49:56 AM
*  Author: dell
*/
#include "calculator.h"
long base=0;
long sum=0;
UINT8 I=0;
void summation()
{
	char op [10];
	ZER0=0;
	long x, y, z, m;
	
	x=CheckR0();
	y=CheckR1();
	z=CheckR2();
	m=CheckR3();
	long n=x+y+z+m;
	if ((x+y+z+m)==0)
	{
		switch (ZER0)
		{
			case 0:
			break;
			
			
			case 1:
			sum =x+y+z+m+(base*10);
			base=sum;
			sum=0;
			
			break;
			
		};
	}
	else if ((x+y+z+m)>9)

	{
		if ((x+y+z+m)<14)
		{
			arrayofnum(calculated_num,base);
			arrayofnum(operators,n);
			base=0;
			sum=0;
			I++;
		}
	else if((x+y+z+m)==14)
		 {
			arrayofnum(calculated_num,base);
			calculation_function(calculated_num ,operators);
		ltoa(calculated_num[1],op,10);
		LCD_SendString(op);
			
			base=0;
			sum=0;
			I=0;
			
		}
		else
		{
			cleararr(calculated_num);
			cleararr(operators);
			base=0;
			sum=0;
			 I=0;
			
		};
		
		
	}
	else
	{
		sum =x+y+z+m+(base*10);
		base=sum;
		sum=0;
	};
	
	
}



void arrayofnum(long * arr ,long num)
{
	arr[I]=num;
	
}

 void operation(long * u,long W,UINT8 oper)
{
	long k;
	switch (W)
	{
		case 10:
		k=u[oper]/u[oper+1];
		u[oper]=k;
        u[oper+1]=k;
		break;
		
		
		case 11:
		k=u[oper]*u[oper+1];
		u[oper]=k;
		u[oper+1]=k;
		break;
		
		
		case 12:
		k=u[oper]-u[oper+1];
		u[oper]=k;
		u[oper+1]=k;
		break;
		
		
		case 13:
		k=u[oper]+u[oper+1];
		u[oper]=k;
		u[oper+1]=k;
		break;
		
		
	};
}

void reaarrange_calculation (long * arr_num ,long * arr_opreators, UINT8 oper )
{
	UINT8 spread;
	for (spread=oper+1;spread<I;spread++)
	{
		if (arr_opreators[spread]==0)
		{
			arr_num[spread+1]=arr_num[oper];
		}
			else
			{
				break;
			}
	
	};
	
	
	
	for (spread=oper-1;spread>0;spread--)
	{
		if (arr_opreators[spread]==0)
		{
			arr_num[spread]=arr_num[oper];
		}
		else
		{
			break;
		}
		
	};
	
	
	
	
	
	
}

void calculation_function(long * arr_num ,long * arr_operators)
{
	UINT8 oper=0;
	for (oper=0;oper<I;oper++)
	{
		if (arr_operators[oper]==10)
		{
			arr_operators[oper]=0;
			operation(arr_num,10,oper);
			reaarrange_calculation ( arr_num , arr_operators, oper );
			//reaarrange_calculation (calculated_num ,operators, oper );
			
		} ;

		
	};
	
	
	for (oper=0;oper<I;oper++)
	{
		if (arr_operators[oper]==11)
		{
			arr_operators[oper]=0;
			operation(arr_num,11,oper);
			reaarrange_calculation (arr_num ,arr_operators, oper );
		//reaarrange_calculation (calculated_num ,operators, oper );
			
		} ;

		
	};
	
	
	
	for (oper=0;oper<I;oper++)
	{
		if (arr_operators[oper]==12)
		{
			arr_operators[oper]=0;
		operation(arr_num,12,oper);
		reaarrange_calculation (arr_num ,arr_operators, oper );
			//reaarrange_calculation (calculated_num ,arr_operators, oper );
		} ;

		
	};
	
	
	for (oper=0;oper<I;oper++)
	{
		if (arr_operators[oper]==13)
		{
			arr_operators[oper]=0;
			operation(arr_num,13,oper);
			reaarrange_calculation (arr_num ,arr_operators, oper );
			//reaarrange_calculation (calculated_num ,operators, oper );
		} ;

		
	};
	
	
	
}
void cleararr(long * V)
{
	UINT8 CL=0;
	for(CL=0;CL<10;CL++){
		V[CL]=0;
	};
	
	
}