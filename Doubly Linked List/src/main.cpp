#include"functions.h"


int main(int argc, char**argv)
{
	initialize_linkedlist();
	insert_linkedlist(33);
	insert_linkedlist(22);
	insert_linkedlist(11);
	insert_linkedlist(2);
	insert_linkedlist(8);
	insert_linkedlist(99);
	print_linkedlist();


	reverse_linkedlist();
	//delete_linkedlist();

	//insertbeginning_linkedlist(100);
	//insertbeginning_linkedlist(2222);

	print_linkedlist();
	return 0;
}
