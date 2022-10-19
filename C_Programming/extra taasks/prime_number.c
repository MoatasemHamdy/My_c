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
bool isPrime(float num);
bool isInt(float number);
 void main(void){
	 char str[10];
    printf("Enter string with space:\n");
    scanf("%[^\n]s", str);
    printf("String entered is: \n %s", str);
   // return 0;
	 
	 
 }
bool isInt(float number){
	int number_int = (int)number;
	float fraction= number-(float)number_int;
	if (fraction==0)return true;
	else return false;	
}
bool isPrime(float num){
	if(isInt(num)){
		 int i=2;
		 int check=0;
		 for(i=2;i<11;i++){
			 if(isInt(num/i)){
				 check=1;
				 return false;
				 break;
			 }
		 }
		 if(check==0)
			 return true;
	 }
}
 