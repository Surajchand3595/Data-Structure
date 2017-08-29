/* Main Function of the Single Link List */

#include"header.h"
#include"Structure.h"


int main()
{	
	int choice;
	node *Start;

		Start = NULL;

		mainmenu_ptr = mainmenu;
		Graphics_ptr = Graphics;
		operation_ptr = operation;
		Create_link_list_ptr = Create_link_list;
		Create_node_ptr = Create_node;
		Insertion_ptr = Insertion;
		Insert_menu_ptr = Insert_menu;
		Insert_op_ptr = Insert_op;
		Insert_beginning_ptr = Insert_beginning;
		Insert_end_ptr = Insert_end;
		Insert_Nth_ptr = Insert_Nth;
		Insert_key_ptr = Insert_key;
		Deletion_ptr = Deletion;
		Delete_menu_ptr = Delete_menu;
		Delete_op_ptr = Delete_op;
		Delete_beginning_ptr = Delete_beginning;
		Delete_end_ptr = Delete_end;
		Delete_Nth_ptr = Delete_Nth;
		Delete_key_ptr = Delete_key;
		Display_ptr = Display;


		while(1)
		{
			choice = (*mainmenu_ptr)();
			Start = (*operation_ptr)(choice,Start);
			
		}	
		

return 0;
}	
