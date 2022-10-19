////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
//#include "Std_types.h"
#include <stdlib.h> // to call system operation 
// make the main funtion
 void main(void){
 
 
    char x;
	printf("enter any number : ");
 
	scanf("%d",&x);
	printf("the original binary is : \n ");
	for (int i =7;i>=0;i--){
		printf("%d",(x>>i)&1);
	}
	
	printf(" \n the reversed binary is : \n ");
	for (int i =0;i<=7;i++){
		printf("%d",(x>>i)&1);
	}
 }