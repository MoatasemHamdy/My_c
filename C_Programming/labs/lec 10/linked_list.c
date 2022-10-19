////// std name : Motasem Hamdy  			//////
////// group id : 0515072210     			//////
////// wa number: 01284631170      			//////
////// gmail    : mezo38519@gmail.com     	////// 
// include to call printf & scanf
#include <stdio.h>
//#include "Std_types.h"
#include <stdlib.h> // to call system operation 
// make the main funtion
#include "linked_list.h"

	node* start = NULL;
 
	void add_node(int value)
	{
		node * new=(node *)malloc(sizeof(node));
		if(start==NULL)
		{
			new -> next = NULL;
			new -> data = value;
			start=new;
		}
		else
		{
			node * temp =start;
			while(temp->next!=NULL){
				temp = temp->next;
			}
			temp->next=new;
		}
	}
	
	void display_linked(void){
		node* temp = start;
		
		
		while (temp == NULL){
			printf("%d",temp->data);
			temp=temp->next;
			
			
		} 
		
		
		
		
		
	}
	
	