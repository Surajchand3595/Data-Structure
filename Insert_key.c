/*This Insert Beginning Function used in Single link list  */

#include"header.h"
#include"Structure.h"

void Insert_key(node *Start)
{
short int num1;

	printf("Enter the Key : ");
	scanf("%d",&num1);

	while(Start -> data != num1)
		Start = Start -> next;
	
	node *key = NULL;

	key = (*Create_node)(key);

	key -> next = Start -> next;
	Start -> next = key;	

}	
