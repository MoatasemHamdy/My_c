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
	 
	u8 x;
	printf("enter any number");
	scanf("%d",&x);
	if ((1<<(sizeof(x)-1))&x){
		printf("the MSB is set to 1 ");
	}
	 else printf("the MSB is set to 0 ");
	 
	 
	 
	 
	 
	 
	 
	 
 }
