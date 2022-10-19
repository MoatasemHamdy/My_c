////// std name : Motasem Hamdy  //////
////// group id : 0515072210     //////
////// lectucre number : 1       //////
////// Assignment number : 1     ////// 

// include to call printf & scanf
#include <stdio.h>
#include "FUNCTIONS.h"
// make the main funtion
 void main(void){
	 
	 
	int num1,choice=1,max=0,min=0,counter=0;
		while (choice ==1){
			for (counter=0;counter<4;counter++){
				printf("plz enter the %d number : \n",(counter+1));
				scanf("%d",&num1);
				printf("num1=%d\n",num1);	
				if (counter==0)max=num1;
				max = get_max(num1,max);
				printf("max=%d\n",max);
				if (counter==0)min=num1;
				min = get_min(num1,min);
				printf("min=%d\n",min);
			}
		printf("the max is %d and the min is %d \n",max,min);	
		printf("for repeat press 1 ");
		scanf("%d",&choice);
		}
		
 }