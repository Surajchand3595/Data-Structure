/*This Insert Beginning Function used in Single link list  */

#include"header.h"
#include"Structure.h"

void Insert_beginning(node *Start)
{
	node *temp = NULL;
		
		temp = Create_node(temp);

		temp -> next = Start -> next;
		 Start -> next = temp;
}	
