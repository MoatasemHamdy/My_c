////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
#include <stdlib.h> // to call system operation 
// make the main funtion
 void main(void){
	 
	 int min , max;
	 int counter=0;
	 int values[10];
	 int choice =1;
	while (choice==1) {
	 for(counter=0;counter<10;counter++){
	 
		 printf("enter the [%d] value : ", counter+1);
		 scanf("%d",&values[counter]);
		 if (counter==0){
			 min = values[counter];
			 max = values[counter];
		 }
			else {
				max=max>values[counter]?max:values[counter];
				min=min<values[counter]?min:values[counter];
			}
	 }
	 for (counter=0;counter<10;counter++){
		 printf("the [%d] number is %d \n",counter+1,values[counter]);
		 
	 }
	 printf("the max is %d and the min is %d \n ",max,min);
	 printf("if you want to repeat press 1");
	 scanf("%d",&choice);
	 
	 if (choice==1){
		 system("cls");
	 }
	 
	 
	 
	 
	 
	 
	 
	 
	 
	}
	 
	 
 }