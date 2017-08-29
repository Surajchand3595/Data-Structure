/* This is Display Function */

#include"header.h"
#include"Structure.h"

void Display(node *Start)
{
int i = 1;

	while(Start->next)
	{
		printf(" NODE[ %d ] ------ VALUE : %d \n",i,Start -> next -> data);
		Start = Start -> next;
		i++;
	}	
}	
