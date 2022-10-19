////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
#include <stdlib.h> // to call system operation 
// make the main funtion
 void main(void){
	 
	 int x=10,y=20,*ptr1=&x,*ptr2=&y;
	 
	 int temp;
	 printf("before change x= %d and y= %d \n ",*ptr1,*ptr2);
	 temp=*ptr1;
	 *ptr1=*ptr2;
	 *ptr2=temp;
	 printf("after change x= %d and y= %d",*ptr1,*ptr2);
	 
	 
	 
	 
	 
	 
	 
	 
 }