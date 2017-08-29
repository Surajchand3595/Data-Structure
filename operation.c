/*This is Operation Function .All the Operation Done in
 * Link List are Called From Here */

#include"header.h"
#include"Structure.h"

node* operation (int choice , node * Start)
{

	switch(choice)
	{
		case 1:
			if(Start == NULL)
			{
				Start = (*Create_link_list_ptr)(Start);
				break;
			}
			else
			{
				printf("Already Created Link List\n");
				break;
			}

		case 2:	
			if(Start != NULL)
			{	
				printf("Insertion\n");
				(*Insertion_ptr)(Start);
				break;
			}
			else
			{
				printf("First Create The Link List\n");
				break;
			}	

		case 3:	
			if(Start != NULL)
			{	
				printf("Deletion\n");
				(*Deletion_ptr)(Start);
				break;
			}	
			else
			{
				printf("First Create The Link List\n");
				break;
			}	

		case 4:	
			if(Start != NULL)
			{	
				printf("Traversing\n");
				break;
			}	
			else
			{
				printf("First Create The Link List\n");
				break;
			}	

		case 5:	
			if(Start != NULL)
			{	
				printf("Display\n");
				(*Display_ptr)(Start);
				break;
			}	
			else
			{
				printf("First Create The Link List\n");
				break;
			}	

		case 6:	
			printf("Exit\n");
			exit(EXIT_SUCCESS);
		
		default:
			printf("Enter the Right No. Please !\n");
			break;	

	}
return Start;	
}	
