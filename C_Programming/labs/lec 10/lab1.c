////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
#include "..\..\common\ARR_FUNC.h"
#include <stdlib.h> // to call system operation 
// make the main funtion
 void main(void){
	char x ;
	printf("enter the number of values");
	scanf("%d",&x);
		char* ptr=(char*)malloc(x*sizeof(char));
		fill_the_array((char *)ptr,x);
		bubble_sort_gradually((char *)ptr,x);
		display_the_array((char *)ptr,x);
		
	 
	 
	 
	 
	 
	 
 }