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
	 
	 int x ;
	 printf("enter any number");
	 scanf("%d",&x);
	 int i=0;
	 int zeros=0;
	 for (i=0;i<32;i++){
		 if(((x>>i)&1)==0) zeros++;
	 }
	 printf("number of zeros is : %d \n",zeros);
	 
	 
	 
	 
	 
	 
 }