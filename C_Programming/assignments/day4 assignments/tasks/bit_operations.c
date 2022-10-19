////// std name : Motasem Hamdy  //////
////// group id : 0515072210     //////
////// lectucre number : 1       //////
////// Assignment number : 1     ////// 

// include to call printf & scanf
#include <stdio.h>
// make the main funtion
int set_bit(int x, int y);
int clear_bit(int x, int y);
int toggle_bit(int x, int y);
 void main(void){
	 int bit_number,num=6;
	 printf("the number is 6 which bit do you want to edit \n");
	 scanf("%d",&bit_number);
	int sett = set_bit(num,bit_number);
	int clrd = clear_bit(num,bit_number);
	int toggled = toggle_bit(num,bit_number);
	 printf("if the bit set to 1 the number will be %d \n ", sett);
	 printf("if the bit set to 0 the number will be %d \n ", clrd);
	 
	 printf("if the bit toggled the number will be %d \n ", toggled);
	 
	 
	 
	 
	 
	 
 }
 int set_bit(int x, int y){
	 x=x|(1<<y);
	 return x;
 }
 int clear_bit(int x, int y){
	 x=x&(~(1<<y));
	 return x;
 }
 int toggle_bit(int x, int y){
	x=x^(1<<y);
	 return x;
 }
 