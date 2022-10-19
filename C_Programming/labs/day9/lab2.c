////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
#include "Std_types.h"
#include <stdlib.h> // to call system operation 

typedef struct{
		u16 id,math_grade,lang_grade,physics_grade,chemistry_grade;
		}student;
void show (student temp);
student fill (void);
// make the main funtion
 void main(void){
	 int search;
	 student class[10];
	 int i=0;
	 for (i=0;i<10;i++){
		 printf("the %d student \n ",i);
		 class[i]=fill();
	 }
	 
	 printf("plz enter the student id that you want");
	 scanf("%d",&search);
	 if (search<10&&search>-1){
		 show(class[search]);
	 }
	 
	 
	 
	 
	 
	 
	 
 }
student fill (void){
	student temp;
	printf("enter the math grade and lang grade and physics grade and chimst grade\n");
	printf("the grades between 0 and 100\n");
	scanf("%d%d%d%d",&temp.math_grade,&temp.lang_grade,&temp.physics_grade,&temp.chemistry_grade);
	printf("done\n");
	return temp;
	
	
}

void show (student temp){
	printf("math grade is : %d \n",temp.math_grade);
	printf("language grade is : %d\n",temp.lang_grade);
	printf("physics grade is : %d\n",temp.physics_grade);
	printf("physics grade is : %d\n",temp.chemistry_grade);
	
	
}
