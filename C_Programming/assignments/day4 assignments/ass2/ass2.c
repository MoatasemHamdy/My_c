////// std name : Motasem Hamdy  //////
////// group id : 0515072210     //////
////// lectucre number : 1       //////
////// Assignment number : 1     ////// 

// include to call printf & scanf
#include <stdio.h>
#include  "FUNCTIONS.h"
// make the main funtion
 void main(void){
	 int choice =1;
while (choice ==1){	 
	 int operation,num1,num2;
	 
	 printf("welcome to our calculator\n");
	 printf("enter the operation id that you want \n");
	 scanf("%d",&operation);
	 printf("%d",operation);
	 if (operation==1){
		 printf("enter the first number");
		 scanf("%d",&num1);
		 printf("enter the second number");
		 scanf("%d",&num2);
		 printf("the result is : %d \n",add(num1,num2));
	 } 
	 else if (operation==2){
		 printf("enter the first number");
		 scanf("%d",&num1);
		 printf("enter the second number");
		 scanf("%d",&num2);
		 printf("the result is : %d \n",sub(num1,num2));
	 }
	 else if (operation==3){
		 printf("enter the first number");
		 scanf("%d",&num1);
		 printf("enter the second number");
		 scanf("%d",&num2);
		 printf("the result is : %d \n",multi(num1,num2));
	 }
	 else if (operation==4){
		 printf("enter the first number");
		 scanf("%d",&num1);
		 printf("enter the second number");
		 scanf("%d",&num2);
		 printf("the result is : %f \n",div(num1,num2));
	 }else if (operation==5){
		 printf("enter the first number");
		 scanf("%d",&num1);
		 printf("enter the second number");
		 scanf("%d",&num2);
		 printf("the result is : %d \n",anding(num1,num2));
	 }else if (operation==6){
		 printf("enter the first number");
		 scanf("%d",&num1);
		 printf("enter the second number");
		 scanf("%d",&num2);
		 printf("the result is : %d \n",oring(num1,num2)); 
	 }
	 else if (operation==7){
		 printf("enter the number");
		 scanf("%d",&num1);
		 printf("the result is : %d \n",not(num1));
	 }
	 else if (operation==8){
		 printf("enter the first number");
		 scanf("%d",&num1);
		 printf("enter the second number");
		 scanf("%d",&num2);
		 printf("the result is : %d \n",Xoring(num1,num2));
	 }
	 else if (operation==9){
		 printf("enter the number");
		 scanf("%d",&num1);
		 printf("the result is : %d \n",reminder(num1));
	 }
	 else if (operation==10){
		printf("enter the number");
		 scanf("%d",&num1);
		 printf("the result is : %d \n",incre(num1));
		 
	 }
	 else if (operation==11){
		printf("enter the number");
		 scanf("%d",&num1);
		 printf("the result is : %d \n",decre(num1));
	 }
	 else {printf("wrong operation id ");}
	 printf("if you want to repeat press 1");
	 scanf("%d",&choice);
	}	
 }