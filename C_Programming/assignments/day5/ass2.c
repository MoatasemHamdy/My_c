////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
#include <stdlib.h> // to call system operation 
// make the main funtion
 void main(void){
	 int choice=1;
	 while (choice==1){
	 int stds[3][10];
	 int min,max,pass=0,fail=0,i=0,j=0,sum=0;
	 float average;
	 for (i=0;i<3;i++){
		 for (j=0;j<10;j++){
			 printf("class [%d] std no %d : ",i+1,j+1);
			 scanf("%d",&stds[i][j]);
			 sum+=stds[i][j];
			 if (stds[i][j]<0||stds[i][j]>100){
				 printf("wrong value plz enter the grade between 0 and 100 ");
				j--;	
			 }
			 if (stds[i][j]>=50) pass++;
			 if (stds[i][j]<50) fail++;
			 if (j==0&&i==0){
				 min=stds[0][0];
				 max=stds[0][0];
			 }
			 if (i!=0&&i!=0){min = min<stds[i][j]?min:stds[i][j];
			 max = max>stds[i][j]?max:stds[i][j];
			 }
			 
		 }
	 }
	 average= (float)sum/30;
	 printf("the maximum grade is : %d \n",max);
	 printf("the minimum grade is : %d \n",min);
	 printf("the average grade is : %f \n",average);
	 printf("the number of pass is : %d \n",pass);
	 printf("the number of fail is : %d \n",fail);
	 
	 printf("if you want to repeat press 1 :");
	 scanf("%d",&choice);
	 if(choice==1) system("cls");
	 }
	 
	 
	 
 }
 