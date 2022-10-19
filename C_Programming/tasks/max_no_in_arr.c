////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
#include <stdlib.h> // to call system operation 
// make the main funtion
 void main(void){
	 
	 int i=0;
	 int index ;
	 int max;
	 int arr[10]={50,56,5,12,65,4,12,85,92,0};
	 for (i=0;i<10;i++){
		 if (i==0)max=arr[i];
		 if (max<arr[i]){
			 max=arr[i];
			 index=i;
		 }
		 
	 }
	 printf("the maximum number in the index %d",index);
	 
	 
 }