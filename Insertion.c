/* Main Function of Insertion in  the Single Link List */

#include"header.h"
#include"Structure.h"

void Insertion(node * Start)
{	
	int choice;

			choice = (*Insert_menu_ptr)();
			 (*Insert_op_ptr)(choice,Start);	
		
}	
