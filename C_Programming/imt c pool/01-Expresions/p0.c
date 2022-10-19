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
	 u32 a,b,c,d;
	 printf("plz enter the values\n ");
	 scanf("%d%d%d%d", &a, &b,&c ,&d );
	 printf("a is : %d \n b is : %d \n c is : %d \n d is : %d \n  " , a,b,c,d);
	 if(c-d!=0)
		printf("%f", ((f32)a+b)/((f32)c-d));
	else printf(" third and fourth vaue are equal!!");
 }