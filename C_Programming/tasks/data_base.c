////// std name : Motasem Hamdy  //////
////// group id : 0515072210     //////
////// lectucre number : 1       //////
////// Assignment number : 1     ////// 

// include to call printf & scanf
#include <stdio.h>
// make the main funtion
void password_check(int password,int password_input);
 void main(void){
	 int choice =1;
while (choice==1){	 
	 int id1=1111,password1=1111,id2=2222,password2=2222,id3=3333,password3=3333,id_input,password_input;
	 //declarting the variables
	 
	 printf("plz enter your id");
	 scanf("%d",&id_input);
		
		if (id1==id_input){
			password_check(password1,password_input);
		}
		else if (id2==id_input){
			password_check(password2,password_input);
		}
		else if (id3==id_input){
			password_check(password3,password_input);
		}
	 
	printf("if you want to try again press 1"); 
	scanf("%d",&choice);
	 
}	 
	 
 }
 void password_check(int password,int password_input){
	 int counter=0;
	 for(counter=1;counter<=3;counter++){
				 printf("plz enter your password ");//asking the user to give input
				 scanf("%d",&password_input);// taking input from user 
				 if (password_input==password){
					  printf("welcome ahmed"); // printing message to the user
					  break;
				 }
				 else if (counter==3) {
					 printf("wrong password sorry no more tries"); // printing message to the user
				 }
				else printf("wrong password try again\n");	 // printing message to the user
				 
				 
				 
			 }
 }
 