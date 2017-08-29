/* MainMenu of Single Link List */

#include"header.h"
#include"Structure.h"

int Insert_menu(void)
{
	int choice;
		
		printf("********* Insertion **********\n");
		printf("01.	Insert At The Beginning\n");
		printf("02.	Insertion At The End\n");
		printf("03.	Insertion At The Nth-Place \n");
		printf("04.	Insert At The Key\n");

		printf("Enter your Choice : ");
		scanf("%d",&choice);

return choice;		
}	
