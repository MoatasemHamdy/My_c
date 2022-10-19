////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
#include "Std_types.h"
#include <stdlib.h> // to call system operation 
#include "..\..\common\Arr_Func.h"
#include "..\..\common\Arr_Func.c"

// make the main funtion
 void main(void){
	 int x ;
	 printf("enter any number");
	 scanf("%d",&x);
	 printf("enter the number of bit between %d and %d : ",0,(sizeof(x)*8)-1);
	 int Bit_No;
	 scanf("%d",&Bit_No);
	 x=x|(1<<Bit_No);
	 printf("the number after changing is %d ", x);

	 
	 
	 
 }