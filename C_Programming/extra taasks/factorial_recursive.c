#include<stdio.h>
int addnumber(int n);
int main(void)
{   
    int a;
	printf("enter the number =");
	scanf("%d",&a);
	printf("%d",addnumber(a));
}
int addnumber(int n)
{
	if(n>1)
	{
		return n*addnumber(n-1);
	}
	return 1;
}