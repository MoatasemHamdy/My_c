////// std name : Motasem Hamdy  //////
////// group id : 0515072210     //////
////// lectucre number : 1       //////
////// Assignment number : 1     ////// 

// include to call printf & scanf
#include <stdio.h>
// make the main funtion
 void main(void){
	 int id1=1111,password1=1111,id2=2222,password2=2222,id3=3333,password3=3333,id_input,password_input;
	 int choice =1,counter=0;//declarting the variables
	 while (choice==1){
	 
	 counter=0;
		 printf("plz enter your id\n");//asking the user to give input
		 scanf("%d",&id_input);// taking input from user 
		 if (id_input==id1){
			 for(counter=1;counter<=3;counter++){
				 printf("plz enter your password ");//asking the user to give input
				 scanf("%d",&password_input);// taking input from user 
				 if (password_input==password1){
					  printf("welcome ahmed"); // printing message to the user
					  break;
				 }
				 else if (counter==3) {
					 printf("wrong password sorry no more tries"); // printing message to the user
				 }
				else printf("wrong password try again\n");	 // printing message to the user
				 
				 
				 
			 }
		 }
		 if (id_input==id2){
			 for(counter=1;counter<=3;counter++){
				 printf("plz enter your password ");//asking the user to give input
				 scanf("%d",&password_input);// taking input from user 
				 if (password_input==password2){
					  printf("welcome ahmed"); // printing message to the user
					  break;
				 }
				 else if (counter==3) {
					 printf("wrong password sorry no more tries"); // printing message to the user
				 }
				else printf("wrong password try again\n");	 // printing message to the user
				 
				 
				 
			 }
		 }
		 if (id_input==id3){
			 for(counter=1;counter<=3;counter++){
				 printf("plz enter your password ");//asking the user to give input
				 scanf("%d",&password_input);// taking input from user 
				 if (password_input==password3){
					  printf("welcome ahmed"); // printing message to the user
					  break;
				 }
				 else if (counter==3) {
					 printf("wrong password sorry no more tries"); // printing message to the user
				 }
				else printf("wrong password try again\n");	 // printing message to the user
				 
				 
				 
			 }
		 }
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	} 
 }