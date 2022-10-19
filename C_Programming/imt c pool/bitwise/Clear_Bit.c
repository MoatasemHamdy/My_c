////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
#include "Std_types.h"
#include <stdlib.h> // to call system operation 
// make the main funtion
 void main(void){
	 int x,Bit_No;
	 printf("enter any number and the bit number want to change between 0 and %d  \n",8*sizeof(x)-1);
	 scanf("%d %d",&x,&Bit_No);
	 	 printf("the number before changing is %d \n",x);

		x=x&(~(1<<Bit_No));
	 printf("the number after changing is %d\n",x);
	 
	 
	 
	 
	 
	 
	 
	 
 }