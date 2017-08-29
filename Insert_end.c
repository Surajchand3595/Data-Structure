/*This Insert End Function used in Single link list  */

#include"header.h"
#include"Structure.h"

void Insert_end(node *Start)
{
	node *end = NULL;
	
	end = (*Create_node_ptr)(end);

	while(Start -> next != NULL)
		Start = Start -> next;

	Start -> next = end;	


}	
