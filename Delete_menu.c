/* MainMenu of Delete function in Single Link List */

#include"header.h"
#include"Structure.h"

int Delete_menu(void)
{
	int choice;
		
		printf("********* Deletion **********\n\n");
		printf("01.	Delete At The Beginning\n");
		printf("02.	Delete At The End\n");
		printf("03.	Delete At The Nth-Place \n");
		printf("04.	Delete At The Key\n");

		printf("Enter your Choice : ");
		scanf("%d",&choice);

return choice;		
}	
