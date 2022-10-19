////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
#include "Std_types.h"
#include <stdlib.h> // to call system operation 
// make the main funtion
struct employee {
	
	u32 salary,deduction,bonus;
	
	
	
	
	
	
}ahmed,amr,waleed;
 void main(void){
	 printf("plz enter ahmed salary ");
	 scanf("%d",&ahmed.salary);
	 printf("plz enter ahmed deduction ");
	 scanf("%d",&ahmed.deduction);
	 printf("plz enter ahmed bonus ");
	 scanf("%d",&ahmed.bonus);
	 
	 printf("plz enter amr salary ");
	 scanf("%d",&amr.salary);
	 printf("plz enter amr deduction ");
	 scanf("%d",&amr.deduction);
	 printf("plz enter amr bonus ");
	 scanf("%d",&amr.bonus);
	 
	 printf("plz enter waleed salary ");
	 scanf("%d",&waleed.salary);
	 printf("plz enter waleed deduction ");
	 scanf("%d",&waleed.deduction);
	 printf("plz enter waleed bonus ");
	 scanf("%d",&waleed.bonus);
	 
	  u32 net_ahmed=ahmed.salary+ahmed.bonus-ahmed.deduction;
	  u32 net_amr=amr.salary+amr.bonus-amr.deduction;
	  u32 net_waleed=waleed.salary+waleed.bonus-waleed.deduction;
	  u32 total = net_ahmed+net_amr+net_waleed;
	  printf("the total is %d : ",total);
	 
 }
