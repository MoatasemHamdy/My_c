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
	 int try;
	 if (x>0){
	 for(i=0;i<32;i++){
		 try=x;
		 try=((try>>i)&1);
		 if (try==1)position=i;
		 
	 }
	 }
	 if(position>=0)printf("the highest position of 1 is in the index no : %d \n",position);
	 if (x==0)printf("there is no 1 in the whole number and the number is 0 ");
	 if (x<0) printf("the highest position is in the index no : %d \n",8*sizeof(x)-1);
	 
	 
	 
	 
	 
	 
 }