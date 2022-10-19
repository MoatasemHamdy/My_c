////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
//#include "Std_types.h"
#include <stdlib.h> // to call system operation 
void main(void){
	int arr[5]={1,2,3,4,5};
		 
		 int temp[5]={0};
		 int i=0;
		 for(i=0;i<5;i++){
			 temp[(sizeof(arr)/4)-i-1]=arr[i];
			 
		 }
		for (i=0;i<5;i++){
		printf("%d",temp[i]);
		}
		printf("\n the original arr is \n");
		for (i=0;i<5;i++){
		printf("%d",arr[i]);
		}
}

