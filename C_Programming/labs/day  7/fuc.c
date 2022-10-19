////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
#include <stdlib.h> // to call system operation 
// make the main funtion

void summation(int x ,int*sum);

 void main(void){
	 int x=40;
	 int summ=25;
	 
	// printf("the sum = %d \n",summation(x,y,&summ));
	summation(x,&summ);
	 printf("the sum = %d \n ",summ);
	 
	 
	 
	 
 }
void summation(int x,int*summ){
	*summ+=x;
	
	
}