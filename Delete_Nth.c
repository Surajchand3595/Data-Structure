/*This Delete Nth Function used in Single link list  */

#include"header.h"
#include"Structure.h"

void Delete_Nth(node *Start)
{
short int var;
node *Nth;

	printf("Enter the Nth node you want to Delete : ");
	scanf("%d",&var);

	while(var)
	{
		Nth = Start -> next -> next;
		Start = Start -> next;
		var--;
	}

	Start -> next = Nth -> next;
	
}	
