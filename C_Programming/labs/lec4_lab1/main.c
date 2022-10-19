#include <stdio.h>
#inlcude "MATH.h"
void main(void){
		
	int		num1=5,num2=4;
	int		sum = sum(num1,num2);
	int		sub = sub(num1,num2);
	int		multi = multi(num1,num2);
	float 	div = div(num1,num2);
	int		max = get_max(num1,num2);
		printf("%d",sum);
		printf("%d",sub);
		printf("%d",multi);
		printf("%f",div);
		printf("%d",max);
		
		
	} 