////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
//#include "Std_types.h"
#include <stdlib.h> // to call system operation 
// make the main funtion
 
 int binary_search_recu(int *ptr[],int value,int low,int high);
 void main(void){
	 
	 int arr[5]={0,1,2,3,4};		// 
	
	printf("the index is %d ", binary_search_recu(arr,1,0,4));
 }
	 
 
 int binary_search_recu(int *ptr[],int value,int low,int high){
while (low>high){
	
int	mid = (low+high)/2;
	 if(ptr[mid]==value)return mid ;
	 else if (ptr[mid]>value)binary_search_recu(arr,value,low,mid-1) ; 
	 else if (ptr[mid]<value)binary_search_recu(arr,value,mid+1,high);
      }
	
	return -1;
}

 
 
 
 
 
 
 