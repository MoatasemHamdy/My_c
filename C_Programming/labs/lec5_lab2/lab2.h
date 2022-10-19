////// std name : Motasem Hamdy  //////
////// group id : 0515072210     //////
////// lectucre number : 1       //////
////// Assignment number : 1     ////// 

//	u8 Local_Number[11]={2,1,4,7,4,8,3,6,4,7,50};   // this is your maximim array to save in u64 (without the 50) *************************

// include to call pru64f & scanf
#include <stdio.h>
#include <math.h>

#include "STD_TYPES.h"
#include "Macro.h"

// make the main funtion
u64 Number_UpToPowerOfZeros(u8 Number_ToMultiWithZeros, u8 Number_ofZeros);
u64 Number_TypedInDigits (u8 * Local_Number);

	void main(void){
	
	
	u8 Local_Number[11]={2,1,4,7,4,8,3,6,4,7,50};


	
//u64  Final_Number=0; 
     printf("%d",Number_TypedInDigits(Local_Number));
	
}

	u64 Number_UpToPowerOfZeros(u8 Number_ToMultiWithZeros, u8 Number_ofZeros)
	{
	u64 y = (u64)pow(10,(double)Number_ofZeros);
// 	printf("Number of Zeros is: %d /n ",y);
	return(y*(u64)Number_ToMultiWithZeros);
	}
	u64 Number_TypedInDigits (u8* Local_Number)
	{
		u64 Result=0;
		u8 Number_OfDigits=0;
		u8 i =0;
		for (i=0;i<11;i++)
		{	
			u64 Result;
			if (Local_Number[i]!=50)
				{
				Number_OfDigits++;
				}
			else
				{
				break;
				}
				// Number_OfDigits=10
		}	
			u8 Poolean_CheckIfInRange =(Number_OfDigits<=10)
			&&((Local_Number[0]<=2)
			&&(Local_Number[1]<=1)
			&&(Local_Number[2]<=4)
			&&(Local_Number[3]<=7)
			&&(Local_Number[4]<=4)
			&&(Local_Number[5]<=8)
			&&(Local_Number[6]<=3)
			&&(Local_Number[7]<=6)
			&&(Local_Number[8]>=4)
			&&(Local_Number[9]<=7)
			);
			
				
			if  (Poolean_CheckIfInRange==1)
		{	
				u64 x;
				for (i=0;i<(Number_OfDigits);i++)
				{				x=Number_UpToPowerOfZeros(Local_Number[i],(Number_OfDigits-1-i));
				//	printf("Sum before is : %d \n",x);			//debug
					(Result)+=x ; 
				//	printf("Sum after is  : %d \n",Result);  // debug
				//	printf("\n");	
				
				}
				return Result;
			}
			else 
			{
			return ;
			//	printf("The Number Is Out Of Range!! \n");
			}			
			
	}