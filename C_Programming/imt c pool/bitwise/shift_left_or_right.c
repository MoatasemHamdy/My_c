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
	 
	 int x,shiftNo,shiftChoice,i;
	 
	 printf("enter any number and the times of shift");
	 scanf("%d %d",&x,&shiftNo);
	 
	 printf("for right shift press 1 and for left press2 ");
	 scanf("%d",&shiftChoice);
	 
	    for (i=31;i>=0;i--){   // print method
		printf("%d",(x>>i)&1);
		if ((i+1)%8==1) printf(" ");
		if (i==0) printf("\n");
	 }
	 
	 if(shiftChoice==1){
     
		 x=x>>shiftNo;		
      
	}		 
	 
	 else if (shiftChoice==2){
		 x=x<<shiftNo;
	
		 
		 
	 }
	 printf("number after shift is : %d \n",x); 
	  for (i=31;i>=0;i--){   // print method
		printf("%d",(x>>i)&1);
		if ((i+1)%8==1) printf(" ");
		if (i==0) printf("\n");
	}
	 
	 
	 
	 
	 
	 
	 
	 
 }