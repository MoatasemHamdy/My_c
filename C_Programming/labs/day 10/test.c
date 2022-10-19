////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
//#include "Std_types.h"
#include <stdlib.h> // to call system operation 
#include "..\..\common\bit_math.h"

// make the main funtion
 void main(void){
	 
	 int Var=345;
	 int BitNo=15;
	 
	 Set_Bit(Var,BitNo);
	 printf("the number is %d ",Var);
	 Clr_Bit(Var,BitNo);
	 printf("the number is %d ",Var);
	 Toggle_Bit(Var,BitNo);
	 printf("the number is %d ",Var);
	 Get_Bit(Var,BitNo);
	 printf("the number is %d ",Var);
	 
	 
	 
 }
