////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
#include <stdlib.h> // to call system operation 
#include "FUNCTIONS.h" //the functions librarry
// make the main funtion
 void main(void){
	 int choice=0;
	 int arr[10];
	 
	 printf("hello .. welcome to our program \n ");
	 
	 fill_the_array(arr,10);
	 system("cls");
	while (choice==0){ 
	  printf("to rescan the array press 1 \n");
	  printf("for the sorting algorithms press 2 \n");
	  printf("for the searching algorithms press 3 \n");
	  printf("to display the array press 4 \n");
	 	  scanf("%d",&choice);
			if (choice==1){
			  fill_the_array(arr,10);
			  printf("done \n");
			  printf("if you want to go back press 0 ");
			  scanf("%d",&choice);
			 
			}
			if (choice==2){
				int sort_choice;
				printf("to sort incrementally press 1 \n");
				printf("to sort decrementally press 2 \n");
				printf("to go back press 0 \n");
				scanf("%d",&sort_choice);
				if (sort_choice==1){
					bubble_sort_gradually(arr,10);
					printf("done \n");
					printf("if you want to go back press 0 \n");
					scanf("%d",&choice);
				}
				if (sort_choice==2){
					bubble_sort_decrementally(arr,10);
					printf("done \n");
					printf("if you want to go back press 0 \n");
					scanf("%d",&choice);
				}
				
				//	printf("if you want to go back press 0 \n");
				//	scanf("%d",&choice);
				//  if (sort_choice==1||sort_choice==2)	printf("done \n");
					
				if (sort_choice==0) choice=0; 
			
								
			
			}
			if (choice==3){
				int search_choice;
				printf("for linear search press 1 \n");
				printf("for binary search press 2 \t NOTE: ARRAY MUST BE SORTED!!\n");
				printf("to go back press 0 \n");
				scanf("%d",&search_choice);
				if (search_choice==1){
					int value;
					printf("plz enter the value that you want to search \n");
					scanf("%d",&value);
					linear_search(arr,10,value);
					printf("done \n");
					printf("if you want to go back press 0 \n");
					scanf("%d",&choice);
					
				}
				if (search_choice==2){
					int value;
					printf("plz enter the value that you want to search \n");
					scanf("%d",&value);
					binary_search(arr,10,value);
					printf("done \n");
					printf("if you want to go back press 0 \n");
					scanf("%d",&choice);
				} 
				if (search_choice==0) choice=0; 
			
			}
			if (choice==4){
				display_the_array(arr,10);
				
				printf("if you want to go back press 0 \n");
				scanf("%d",&choice);
				
				
			}
			if (choice<0||choice>4) {
				printf("wrong value \n ");
				printf("if you want to choose again press 0 \n ");
				scanf("%d",&choice);
				
				}
	 
	 
	 
	 
	 
	 
	}
 }