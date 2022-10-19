////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
#include <stdlib.h> // to call system operation 
// make the main funtion

void bubble_sort_gradually (int * arr,int size);
 void main(void){
	 
	 int arr[]={10,35,120,321,561,32,68,1,0365,2,0,5311,0};
	 
	 bubble_sort_gradually(arr,13);
	 for (int i =0; i<13;i++){
		 printf("%d\n : \n",arr[i]);
	 }
	 
	 
 }
 void bubble_sort_gradually (int * arr,int size){
	 
	  int i=0 ,j=0;
	  for (i=0;i<size-1;i++){
		  for (j=0; j<size-i-1;j++){
			  if (arr[j]>arr[j+1]){
				  int z=arr[j];
				  arr[j]=arr[j+1];
				  arr[j+1]=z;
		  
				}
			}
		}	
 }
	 

