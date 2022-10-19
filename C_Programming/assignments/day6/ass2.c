////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
#include <stdlib.h> // to call system operation if needed

// make the main funtion
 void main(void){
	 int x=4,y=6,z=8;
	 int *p =&x;
	 int *q =&y;
	 int *r =&z;
	 printf("the value of x is %d\n",x);
	 printf("the value of y is %d\n",y);
	 printf("the value of z is %d\n",z);
	 printf("the value of p in decimal is %d\n",p);
	 printf("the value of q in decimal is %d\n",q);
	 printf("the value of r in decimal is %d\n",r);
	 printf("the value of p in adrres is %p\n",p);
	 printf("the value of q in adrres is %p\n",q);
	 printf("the value of r in adrres is %p\n",r);
	 printf("the value in *p is %d\n",*p);
	 printf("the value in *q is %d\n",*q);
	 printf("the value in *r is %d\n",*r);
	 
	 printf("swapping pointers \n");
	 int temp = *r;
		*r = *p;
		*p=temp;
	 
	 
	 printf("the value of x is %d\n",x);
	 printf("the value of y is %d\n",y);
	 printf("the value of z is %d\n",z);
	 printf("the value of p in decimal is %d\n",p);
	 printf("the value of q in decimal is %d\n",q);
	 printf("the value of r in decimal is %d\n",r);
	 printf("the value of p in adrres is %p\n",p);
	 printf("the value of q in adrres is %p\n",q);
	 printf("the value of r in adrres is %p\n",r);
	 printf("the value in *p is %d\n",*p);
	 printf("the value in *q is %d\n",*q);
	 printf("the value in *r is %d\n",*r);
	 
	 
	 
	 
	 
	 
	 
	 
	 
 }