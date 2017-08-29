/*This Delete End Function used in Single link list  */

#include"header.h"
#include"Structure.h"

void Delete_end(node *Start)
{
node *end = NULL;

	end = (node *)malloc(sizeof(node));	

	while(Start -> next != NULL)
	{	
		end = Start; 			// here end is 2nd last node of the link list //
		Start = Start -> next;
	}
		end -> next = NULL;	
}	
