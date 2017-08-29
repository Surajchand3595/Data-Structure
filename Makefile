#! /bin/bash

sllist: Single_Link_List.o mainmenu.o Graphics.o operation.o Create_link_list.o Create_node.o Insertion.o Insert_menu.o Insert_op.o Deletion.o Delete_menu.o Delete_op.o Insert_beginning.o Insert_end.o Insert_Nth.o Insert_key.o Delete_beginning.o Delete_end.o Delete_Nth.o Delete_key.o Display.o
	gcc -o sllist Single_Link_List.o mainmenu.o  Graphics.o operation.o Create_link_list.o Create_node.o Insertion.o Insert_menu.o Insert_op.o Deletion.o Delete_menu.o Delete_op.o Insert_beginning.o Insert_end.o Insert_Nth.o Insert_key.o Delete_beginning.o Delete_end.o Delete_Nth.o Delete_key.o Display.o

Display.o: Display.c header.h Structure.h
		gcc -c Display.c

Delete_key.o: Delete_key.c header.h Structure.h
		gcc -c Delete_key.c

Delete_Nth.o: Delete_Nth.c header.h Structure.h
		gcc -c Delete_Nth.c

Delete_end.o: Delete_end.c header.h Structure.h
		gcc -c Delete_end.c

Delete_beginning.o: Delete_beginning.c header.h Structure.h
		gcc -c Delete_beginning.c

Insert_key.o: Insert_key.c header.h Structure.h
		gcc -c Insert_key.c

Insert_Nth.o: Insert_Nth.c header.h Structure.h
		gcc -c Insert_Nth.c

Insert_end.o: Insert_end.c header.h Structure.h
		gcc -c Insert_end.c

Insert_beginning.o: Insert_beginning.c header.h Structure.h
		gcc -c Insert_beginning.c

Delete_op.o: Delete_op.c header.h Structure.h
		gcc -c Delete_op.c

Delete_menu.o: Delete_menu.c header.h Structure.h
		gcc -c Delete_menu.c

Deletion.o: Deletion.c header.h Structure.h
		gcc -c Deletion.c

Insert_op.o: Insert_op.c header.h Structure.h
		gcc -c Insert_op.c

Insert_menu.o: Insert_menu.c header.h Structure.h
		gcc -c Insert_menu.c

Insertion.o: Insertion.c header.h Structure.h
		gcc -c Insertion.c

Create_node.o: Create_node.c header.h Structure.h
		gcc -c Create_node.c 

Create_link_list.o: Create_link_list.c header.h Structure.h
		gcc -c Create_link_list.c 

operation.o: operation.c header.h Structure.h
		gcc -c operation.c -g

Graphics.o: Graphics.c header.h Structure.h
		gcc -c Graphics.c 

mainmenu.o: mainmenu.c header.h Structure.h
		gcc -c mainmenu.c

Single_Link_List: Single_Link_List.c header.h Structure.h
		gcc -c Single_Link_List.c
