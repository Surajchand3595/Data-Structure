/*This Insert Beginning Function used in Single link list  */

#include"header.h"
#include"Structure.h"

void Delete_key(node *Start)
{
int var1;
node *key;

	printf("Enter the key you want to Delete : ");
	scanf("%d",&var1);

	while(Start -> data != var1)
	{
		key = Start;
		Start = Start -> next;
	}
	
	key -> next = Start -> next;
}	
