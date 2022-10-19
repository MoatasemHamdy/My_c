////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
#include <stdlib.h> // to call system operation 
// make the main funtion
 void main(void){
	 int x =10,y=20;
	 int *ptr=&x;
	 printf("the x value is : %d \n ",*ptr);
	 printf("the x address is : %p \n ",ptr);
	 
	 ptr=&y;
	 
	 printf("the  y value is : %d \n",*ptr);
	 printf("the y address is : %p \n ",ptr);
	 
	 
	 
 }