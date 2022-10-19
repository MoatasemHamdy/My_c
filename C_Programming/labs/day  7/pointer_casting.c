////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
#include <stdlib.h> // to call system operation 
// make the main funtion
 void main(void){
	 int x=10;
	 char y='s';
	 float z = 1002;
	 
	 void *ptr=&x;
	 
	 printf("the x equal : %d\n",*(int*)ptr);
	 ptr = &y;
	 printf("the x equal : %c\n",*(char*)ptr);
	 ptr =&z;
	 printf("the x equal : %f\n",*(float*)ptr);
	// printf("the x equal : %ul\n",*(double*)ptr);
	 
	 
	 
	 
 }
