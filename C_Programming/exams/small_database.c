#include <stdio.h>
#include<stdlib.h>
void main (void)
{   
    int user_id=0;
    int hours=0 ;
	int choice =0;
 
 
    int first_age =20 ;
	int first_salary= 1000;
	int first_id =1 ;
	
	int second_age =21;
	int second_salary =2000  ;
	int second_id = 2;
	
	int third_age =22;
	int third_salary =3000;
	int third_id =3   ;

    int fourth_age = 23 ;
	int fourth_salary =4000  ;
	int fourth_id =4  ;

	int fifth_age = 24 ;
	int fifth_salary = 5000 ;
	int fifth_id  = 5   ;
	
	
	
	do{
		
	
	int user_id=0;
	printf("enter your id :");
	scanf("%d",&user_id);
	
	
	
	switch (user_id)
	{
		case 1 : { 
		      printf("your salary is %d\n",first_salary);
			  printf("your age is %d\n",first_age);
			
			printf("please enter your hours :");
			scanf("%d",&hours);
			
			if (hours>50)
			{
				printf("done\n");	
			}
			else {
				
								printf("your salary is %f\n",(float)first_salary*0.9);

				
			}
             break;

				
		}
		case 2 : { 
		      printf("your salary is %d\n",second_salary);
			  printf("your age is %d\n",second_age);
			
			printf("please enter your hours :");
			scanf("%d",&hours);
			
			if (hours>50)
			{
				printf("done\n");	
			}
			else {
				
								printf("your salary is %f\n",(float)second_salary*0.9);

				
			}

            break;
				
		}
		case 3: { 
		      printf("your salary is %d\n",third_salary);
			  printf("your age is %d\n",third_age);
			
			printf("please enter your hours :");
			scanf("%d",&hours);
			
			if (hours>50)
			{
				printf("done\n");	
			}
			else {
				
				printf("your salary is %f\n",(float)third_salary*0.9);
				
			}
			break;


				
		}
		
		case 4 : { 
		      printf("your salary is %d\n",fourth_salary);
			  printf("your age is %d\n",fourth_age);
			
			printf("please enter your hours :");
			scanf("%d",&hours);
			
			if (hours>50)
			{
				printf("done\n")	;
			}
			else {
				
								printf("your salary is %f\n",(float)fourth_salary*0.9);

				
			}
			break;


				
		}
		
		case 5 : { 
		      printf("your salary is %d\n",fifth_salary);
			  printf("your age is %d\n",fifth_age);
			
			printf("please enter your hours :");
			scanf("%d",&hours);
			
			if (hours>50)
			{
				printf("done \n")	;
			}
			else {
				
								printf("your salary is %f\n",(float)fifth_salary*0.9);

				
			}
			break;


				
		}
		
		default : printf("wrong id \n");
		
	}
	
	
	printf("if you want to enter again please press 1 ");
	scanf("%d",&choice);
	system ("cls");
	
	}while (choice==1);
	
	
	
}