/* This is Create Node Function */

#include"header.h"
#include"Structure.h"

node* Create_node(node* Start)
{

	static int i = 0;
    int number;
	

	Start = (node*)malloc(sizeof(node));

    	if(i != 0)	
	{	
		printf("Enter the number : \n");
		scanf("%d",&number);
		
		Start -> data = number;
		Start -> next = NULL;
	}
	i++;

return Start;
}	
