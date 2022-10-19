////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
//#include "..\..\common\Std_types.h"
#include <stdlib.h> // to call system operation 
// make the main funtion
 void main(void){
	 
	 int x, zeros=0,ones=0,i;
	 
	 printf("enter any number");
	 scanf("%d",&x);
	
	 for (i=0;i<32;i++){
		 if(((x>>i)&1)==0) zeros++;
		 else ones++;
	 }
	 printf("number of zeros is : %d \nnumber of ones is : %d \n",zeros,ones);
	 
	 
	 
	 
	 
	 
	 
	 
	 
 }