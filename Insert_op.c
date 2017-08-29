/*This is Operation Function .All the Operation Done in
 * Link List are Called From Here */

#include"header.h"
#include"Structure.h"

void Insert_op (int choice , node * Start)
{


	switch(choice)
	{
		case 1:
				printf("Insert At The Beginning\n");
				(*Insert_beginning_ptr)(Start);
				break;
				
		case 2:	
			
				printf("Insert At The End\n");
				(*Insert_end_ptr)(Start);
				break;	

		case 3:	
				printf("Insert At the Nth place\n");
				(*Insert_Nth_ptr)(Start);
				break;	

		case 4:	
				printf("Insert At The Key\n");
				(*Insert_key_ptr)(Start);
				break;
		default:
			printf("Enter the Right No. Please !\n");
			break;	

	}
	
}	
