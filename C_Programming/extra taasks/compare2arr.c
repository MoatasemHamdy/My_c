////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
//#include "Std_types.h"
#include <stdlib.h> // to call system operation 

void main (void){
	
	int arr1[5]={2};
	int arr2[5]={2};
	printf("%d \n ",sizeof(arr1));
	if(sizeof(arr1)==sizeof(arr2)){
		int i=0;
		for (i=0;i<5;i++){
			if (arr1[i]==arr2[i]) {}
			else break;
		}
	if (i==5) printf(" the 2 arrs are equal");
	}
	
	
	
}