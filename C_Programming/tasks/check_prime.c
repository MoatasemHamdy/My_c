////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
//#include "Std_types.h"
#include <stdlib.h> // to call system operation 
// make the main funtion
#include <stdbool.h>

bool isInt(float number);
 void main(void){
	 
	 printf("enter the number \n ");
	 float num ;
	 scanf("%f",&num);
	 if(isInt(num)){
		 int i=2;
		 int check=0;
		 for(i=2;i<(int)(num/2);i++){
			 if(isInt(num/i)){
				 check=1;
				 printf("the number isnot prime it can been divided by %d \n ",i);
				 break;
			 }
		 }
		 if(check==0)
			 printf("the number is prime"); 
	 }
 }
bool isInt(float number){
	int number_int = (int)number;
	float fraction= number-(float)number_int;
	if (fraction==0)return true;
	else return false;	
}
 