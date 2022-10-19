////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
#include <stdlib.h> // to call system operation 

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

 void bubble_sort_decrementally (int * arr,int size){
	 
	  int i=0 ,j=0;
	  for (i=0;i<size-1;i++){
		  for (j=0; j<size-i-1;j++){
			  if (arr[j]<arr[j+1]){
				  int z=arr[j];
				  arr[j]=arr[j+1];
				  arr[j+1]=z;
		  
				}
			}
		}	
 }

 void fill_the_array(int *arr,int size){
	 int i =0;
	 printf("FILL THE ARRAY\n");
	 for (i=0;i<size;i++){
		 printf("plz enter the %d number ",i+1);
		 scanf("%d",&arr[i]);
		 
	 }
	 
 }

 void display_the_array(int *arr,int size){
	 int i =0;
	 printf(" THE ARRAY IS	\n");
	 for (i=0;i<size;i++){
		 printf(" the %d number is : %d \n",i+1,arr[i] );
		 
		 
	 }
	 
 }
 
 void linear_search(int *arr , int size,int value){
	 int no_of_dups=0;
	 int i=0;
	 int pos;
	 
	 for (i=0;i<size;i++){
		 if (arr[i]==value){
			 pos = i;
			 no_of_dups++;
			 printf("the position is : %d /t",pos);
		 }
	 }
	 if (no_of_dups<1){printf("the value doesnt exsist");}
	 printf("the number of dups is : %d \n",no_of_dups);
	 
 }
 
 void binary_search(int*arr,int size,int value){
	 
	 int min=0,max=size,mid;
	 while (min<max){
		 mid =(min+max)/2;
		 if (arr[mid]==value)     printf("the value in the position : %d \n",mid);
		 else if (arr[mid]<value) min=mid+1;
		 else if (arr[mid]>value) max=mid-1;
	 }
	 if(min>max)printf("the value doesnt exist");
 }