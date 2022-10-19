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
	 
	 u8 x , bit_no;
	 printf("enter any number");
	 scanf("%d",&x);
	 printf("enter no of bit that you want");
	 scanf("%d",&bit_no);
	 
	 if (((x>>bit_no)&1)==1){
		 printf("the wanted bit is set to 1");
		 
	 }
	 else printf("the bit wanted is set to 0");
	 
	 
	 
	 
	 
	 
	 
 }
