
/* Structure for Single Link List */

typedef struct node
{
	int data;
	struct node *next;
}node;


/* Function Used in Single Link List */
         int mainmenu (void);
         void Graphics (void);
         node* operation (int , node *);
	 node* Create_link_list ( node * );
	 node* Create_node ( node *);
	 void Insertion (node *);
	 int Insert_menu (void);
	 void Insert_op (int ,node *);
	 void Insert_beginning(node *);
	 void Insert_end(node *);
	 void Insert_Nth(node *);
	 void Insert_key(node *);
	 void Deletion (node *);
	 int Delete_menu (void);
	 void Delete_op (int ,node *);
	 void Delete_beginning(node *);
	 void Delete_end(node *);
	 void Delete_Nth(node *);
	 void Delete_key(node *);
  	 void Display (node *);

 /* Function Pointer of Above Function */
	 int (*mainmenu_ptr) (void);
	 void (*Graphics_ptr) (void);
	 node* (*operation_ptr) (int, node *);                                           
	 node* (*Create_link_list_ptr) ( node * );
	 node* (*Create_node_ptr) ( node * );
	 void (*Insertion_ptr) (node *);
	 int (*Insert_menu_ptr) (void);
	 void (*Insert_op_ptr) (int, node*);
	 void (*Insert_beginning_ptr)(node *);
	 void (*Insert_end_ptr)(node *);
	 void (*Insert_Nth_ptr)(node *);
	 void (*Insert_key_ptr)(node *);
	 void (*Deletion_ptr) (node *);
	 int (*Delete_menu_ptr) (void);
	 void (*Delete_op_ptr) (int, node*);
	 void (*Delete_beginning_ptr)(node *);
	 void (*Delete_end_ptr)(node *);
	 void (*Delete_Nth_ptr)(node *);
	 void (*Delete_key_ptr)(node *);
  	 void (*Display_ptr) (node *);
