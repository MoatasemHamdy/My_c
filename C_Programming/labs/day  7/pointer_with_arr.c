////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
#include <stdlib.h> // to call system operation 
// make the main funtion
 void main(void){
	 int arr[10]={5,6,7,4,8,95,5,3,84,15};
	 int *ptr=arr;
	// printf("ptr at pos 2 is : %d \n",*++ptr);
 printf("ptr at pos 2 is : %d \n",*(ptr+1));
 printf("ptr at pos 2 is : %d \n",ptr[1]);
 
 printf("ptr at pos 6 is : %d \n",*(ptr+5));
 printf("ptr at pos 6 is : %d \n",ptr[5]);
		int x=10,y=23;
	int *ptr1=&x,*ptr2=&y;
	printf("the distance = %p" , ptr1-ptr2);
	
		
	
	 
	 
	 
	 
	 
	 
 }
