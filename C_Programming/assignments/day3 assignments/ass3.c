////// std name : Motasem Hamdy  //////
////// group id : 0515072210     //////
////// lectucre number : 1       //////
////// Assignment number : 1     ////// 

// include to call printf & scanf
#include <stdio.h>
// make the main funtion
 void main(void){
	  int h,counter,counter2,choice=1;
	 while (choice==1){
		 printf("welcome .. how many rows do you want of stars?");
		 int h,counter,counter2;
		 scanf("%d",&h);
		 for (counter=0;counter<h;counter++){
			 for (counter2=0; counter2<h-1-counter; counter2++)
			{
				printf(" ");
			}
			for (counter2=0; counter2<2*counter+1; counter2++)
			{
				printf("*");
			}
			printf("\n");
		
	 
		}
		printf("if you want to start again type 1");
		scanf("%d",&choice);
		
	 }
	 printf("good buy");
	 
	 
	 
	 
	 
 }