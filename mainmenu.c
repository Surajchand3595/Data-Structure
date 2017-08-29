/* MainMenu of Single Link List */

#include"header.h"
#include"Structure.h"

int mainmenu (void)
{
	int choice;
		
		Graphics();
		printf("01.	Create Link List\n");
		printf("02.	Insertion\n");
		printf("03.	Deletion\n");
		printf("04.	Traversing\n");
		printf("05. 	Display\n");
		printf("06. 	Exit\n\n");
		printf("Enter your Choice : ");
		scanf("%d",&choice);

return choice;		
}	
