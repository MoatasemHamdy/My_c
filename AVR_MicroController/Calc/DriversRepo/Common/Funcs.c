


#include <stdio.h>
#include "STD_TYPES.h"
#include "Macro.h"
// #include "Funcs.h"


u32 Number_UpToPower(u32 Base , u32 Power)
	{
		if (Power==0) return 1;
		else  return (Base * Number_UpToPower(Base,(Power-1)));

	}
	u32 Number_UpToPowerOfZeros(u8 Number_ToMultiWithZeros, u8 Number_ofZeros)
	{
	u32 y = Number_UpToPower(10,(u32)Number_ofZeros);
			return(y*(u32)Number_ToMultiWithZeros);
	}
	u32 Number_TypedInDigits (u8* Local_Number)
	{
		u32 Result=0;
		u8 Number_OfDigits=0;
		u8 i =0;
		for (i=0;i<10;i++)
		{	
			if ((Local_Number[i]!=50)&&(Local_Number[i]!=40)&&(Local_Number[i]!=30)
				&&(Local_Number[i]!=20)&&(Local_Number[i]!=10)
				&&(Local_Number[i]!=60)
				&& (Local_Number[i]!=NotPressed))
			{
				Number_OfDigits++;
			}
			else
				{
				break;
				}
				// Number_OfDigits=9
		}	
				u32 x;
				for (i=0;i<(Number_OfDigits);i++)
				{
					x=Number_UpToPowerOfZeros(Local_Number[i],(Number_OfDigits-1-i));
					(Result)+=x ; 
				}
				return Result;
			
	}
