#ifndef _linked_list_H_
#define _linked_list_H_
typedef struct node
{
    int data;
    struct node * next;

}node;

void add_node(int value);
void display_linked(void);
node get_last_node(void);






#endif