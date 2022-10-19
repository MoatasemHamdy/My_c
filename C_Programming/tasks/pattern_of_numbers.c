////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
//#include "Std_types.h"
#include <stdlib.h> // to call system operation if needed
// make the main funtion
 void main(void){
	 int num,i=0,j=0;
	 printf("enter any number");
	 scanf("%d",&num);
	// int arr[][];
	for(i=num; i>=1; i--){ //first half of the shape ... from number to 1
		
		for(j=num;j>i;j--){
			printf(" %d", j);
		}
		for(j=1; j<=((i*2)-1); j++)
        {
            printf(" %d", i);
        }
		  for(j=i+1; j<=num; j++)
        {
            printf(" %d", j);
        }	
		printf("\n");
	}
	for(i=1; i<num; i++){   //second half of the shape ... from 1 to number
		
		for(j=num;j>i;j--){
			printf(" %d", j);
		}
		for(j=1; j<=(i*2-1); j++)
        {
            printf(" %d", i+1);
        }
		  for(j=i+1; j<=num; j++)
        {
            printf(" %d", j);
        }	
		printf("\n");
	}

 }
	 
