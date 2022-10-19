////// std name : Motasem Hamdy  //////
////// group id : 0515072210     //////
////// lectucre number : 1       //////
////// Assignment number : 1     ////// 

// include to call printf & scanf
#include <stdio.h>
void swap(int *x, int *y);
// make the main funtion
 void main(void){
	
	int num1,num2;
		printf("plz enter the first number");
		scanf("%d",&num1);	
		printf("plz enter the second number");
		scanf("%d",&num2);
		swap(&num1,&num2);
		printf("the first number is %d and the second one is %d",num1,num2);
		
 }
 void swap(int *x,int *y){
	 int temp = *x;
	 *x=*y;
	 *y=temp;
 }