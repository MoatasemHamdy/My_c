////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 

// include to call printf & scanf
#include <stdio.h>
#include "..\common\Std_types.h"
#include <stdlib.h> // to call system operation 
#include <stdbool.h>
#include "project_functions.c"
void main (void){

	printf("hello admin \n ");	
/*	if (check_password()){
		printf("password is correct ");
		
	}
	else {  
		printf(" good bye ");
	} 
	*/
	patient p1 =add_new_patient_record();
	
	printf("%s",p1.name);
	
	printf("%s",p1.gander);
	
	
	
	
	
	
	
}
