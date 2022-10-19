
////// std name : Motasem Hamdy  //////
////// group id : 0515072210     //////
////// lectucre number : 1       //////
////// Assignment number : 1     ////// 

// include to call printf & scanf
#include <stdio.h>
// make the main funtion
void calc (int x, int y, int *sum ,int *sub ,int *multi,float *div);
 void main(void){
	 int i=0;
	 int x = 50;
	 int y =60 ;
	 int sum,multi,sub;
	float div;
	calc(x,y,sum)
 }
 
 void calc (int x, int y, int *ptrsum ,int *ptrsub ,int *ptrmulti,float *ptrdiv){
	 *ptrsum = x+y;
	 *ptrsub = x-y;
	 *ptrmulti= x*y;
	 *ptrdiv = (float)x/(float)y;
	 
	 
 }