////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
#include "..\common\Std_types.h"
#include <stdlib.h> // to call system operation 
#include <stdbool.h>

typedef struct patient{
	u8 name[20];
	u8 age;
	u8 gander[6];
	u32 id;
	
	
}patient;
bool check_password(){
	u16 x ;
	u8	tries=0;
	printf("plz enter the password : ");
	scanf("%d",&x);
	u8 i=1;
	for (i=1;i<3;i++){
		if (x==1234){
			return true;
			}
			printf("wrong password ");
			if (i<3)printf("try again : ");
			scanf("%d",&x);
	}
	if (i==3) printf(" sorry no more tries ");
	return false;

}

patient add_new_patient_record(){
	patient temp;
	printf("plz enter the patient name : ");
    scanf("%[^\n]s",temp.name);
	printf("the name you enterd is : %s   ",temp.name);
	printf("plz enter the patient age :   ");
	scanf("%d",&temp.age);
	printf("plz enter the patient gander : ");
	scanf("%s",temp.gander);
	printf("plz enter the patient ID : ");
	scanf("%d",&temp.id);
return temp;
	
	}






