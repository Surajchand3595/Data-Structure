/*This Insert Beginning Function used in Single link list  */

#include"header.h"
#include"Structure.h"

void Insert_Nth(node *Start)
{
short int num;

	printf("Enter the Nth node : ");
	scanf("%d",&num);	

	while(num)
	{
		Start = Start -> next;
		num--;	
	}

	node *Nth = NULL;

	Nth = (*Create_node)(Nth);

	Nth -> next = Start -> next;
	Start -> next = Nth;


}	
