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
	 int x;
	 	 printf("enter any number ");
	 scanf("%d",&x);
	 int i =0 ;
	 int position=-1;
	 if (x>0|x<0){
	 for(i=0;i<32;i++){

		 if ((x>>i)&1){
			 position=i;
		     break;
		 }
	 } if (position!=-1) 
		 printf("the first bit set to 1 is : %d\n",position);
	 }
	 else if (x=0){
		 printf("there is no bits are set to 1 int the number ... the number is zero! \n");
	
	 
 }
 }