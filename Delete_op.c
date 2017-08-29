/*This is Delete Function .All the Operation Done in
 * Link List are Called From Here */

#include"header.h"
#include"Structure.h"

void Delete_op (int choice , node * Start)
{


	switch(choice)
	{
		case 1:
				printf("Delete At The Beginning\n");
				(*Delete_beginning_ptr)(Start);
				break;
				
		case 2:	
				printf("Delete At The End\n");
				(*Delete_end_ptr)(Start);
				break;	

		case 3:	
				printf("Delete At the Nth place\n");
				(*Delete_Nth_ptr)(Start);
				break;	

		case 4:	
				printf("Delete At The Key\n");
				(*Delete_key_ptr)(Start);
				break;
		default:
			printf("Enter the Right No. Please !\n");
			break;	

	}
	
}	
