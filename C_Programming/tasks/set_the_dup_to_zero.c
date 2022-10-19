////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
#include <stdlib.h> // to call system operation 
// make the main funtion
 void main(void){
	 int i =0,j=0,arr[]={2,56,2,5,1,5,3,62,5,825,2,5,1,3,5};
	 for(i=0;i<15;i++){
		 for (j=i+1;j<15;j++){
			 
			 if (arr[i]==arr[j]){
				 arr[j]=0;
			 }
			 
		 }
		 
	 }
	 printf("the array is \n ");
	 for (i=0;i<15;i++){
	 printf("%d \n",arr[i]);
	 }
	 
 }