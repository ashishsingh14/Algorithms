//============================================================================
// Name        : BST.cpp
// Author      : Ashish
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "functions.h"


class node{
public:
    int data;
    node * next;

};

void function1( node *a)
{
    //a->data=9898989;
    delete a;
    a = NULL;
}

int main() {
	BST* b = new BST();



	b->Insert(5);

	b->Insert(2);
	//b->Insert(3);
	b->Insert(10);
	//b->inorder();
	//cout<<endl<<b->hasPathSum(10);
	b->deleteusingdouble();
	cout<<endl;
	//b->inorder();
	cout<<endl;
	b->checkempty();
	//b->checkempty();
	delete b;

	   /*int * q = new int(234);

	   struct node * root = new node();
	   root->data=8999;
	   root->next=0;
	   cout<<root<<endl;
	   function1(root);
	   cout<<root->data<<endl;
	   cout<<root->next<<endl;
	   cout<<root<<endl;*/

	/*node * root = new node();
		   root->data=897878;
		   root->next=0;
		   cout<<root<<endl;

		   function1(root);
		   cout<<root->data<<endl;
		   cout<<root->next<<endl;
		   cout<<root<<endl;*/


	return 0;
}


