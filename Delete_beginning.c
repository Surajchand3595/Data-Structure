/*This Delete Beginning Function used in Single link list  */

#include"header.h"
#include"Structure.h"

void Delete_beginning(node *Start)
{
	Start -> next   = Start -> next -> next;

}	
