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
	  int x ;
	 printf("enter any number : ");
	 scanf("%d",&x);
	 int i=0;
	 printf("binary before toggle is  ");
	 for (i=31;i>=0;i--){   // print method
		printf("%d",(x>>i)&1);
		if ((i+1)%8==1) printf(" ");
		if (i==0) printf("\n");
	}
	
	 for (i=0;i<32;i++){    // toggle method
		x=x^(1<<i);
	 }
	 printf("the toggled no is : %d \n",x);
	   printf("binary after toggle is : ");
	 for (i=31;i>=0;i--){   // print method
		printf("%d",(x>>i)&1);
		if ((i+1)%8==1) printf(" ");	
		if (i==0) printf("\n");

	}
	 
	 
	 
	 
	 
	 
	 
	 
 }