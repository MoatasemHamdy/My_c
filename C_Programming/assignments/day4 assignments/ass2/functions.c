#include <stdio.h> 

void take_input(int x){
	scanf("%d",&x);
}
int add(int x , int y){
	return x+y;
}
int sub(int x , int y){
	return x-y;
}
int multi(int x , int y){
	return x*y;
}
float div(int x , int y){
	return (float)x/(float)y;
}
int anding(int x , int y){
	return x&y;
}
int oring(int x , int y){
	return x|y;
}
int not(int x ){
	return !x;
}
int Xoring(int x , int y){
	return x^y;
}
int reminder(int x ){
	return x&1;
}
int incre(int x  ){
	x++;
	return x;
}
int decre(int x  ){
	x--;
	return x;
}