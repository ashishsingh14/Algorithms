/*
 * functions.cpp
 *
 *  Created on: Dec 9, 2014
 *      Author: ashissi3
 */

#include"functions.h"
Node * head;

void initialize_linkedlist()
{
	head = NULL;
}

void insert_linkedlist( int a)
{
	if (head==NULL)
	{
		Node * temp = new Node();
		temp->data = a;
		temp->next = NULL;
		head = temp;
	}
	else
	{
		Node * temp  = head;
		while(temp->next){
			temp = temp->next;
		}

		Node * p = new Node();
		p->data = a;
		p->next = NULL;
		temp->next = p;
	}

}

void insertbeginning_linkedlist(int a)
{
	Node * temp = new Node();
	if (head==NULL)
		{
			temp->data = a;
			temp->next = NULL;
			head = temp;
		}
		else
		{
			temp->data = a;
			temp->next = head;
			head = temp;
		}
}

bool search_linkedlist(int a)
{
	if (head!=NULL)
	{
		Node * temp = head;
		while(temp)
		{
			if (temp->data==a)
			{
				return true;
			}
			temp = temp->next;
		}
	}
	return false;

}

void print_linkedlist()
{
	if(head==NULL)
		cout<<"Linked list is empty"<<endl;
	else
	{
		Node * temp = head;
				while(temp)
				{
					cout<<temp->data<<" ";
					temp = temp->next;
				}
				cout<<endl;
	}

}

void reverse_linkedlist()
{
	if(head!=NULL)
	{
		Node * prev = NULL;
		Node * n = head;
		Node * save;
		while(n)
		{
			save = n->next;
			n->next = prev;
			prev = n;
			n = save;
		}
		head = prev;
	}
	else
		return;
}



void delete_linkedlist()
{
	if(head!=NULL)
		{
			Node * temp = head;
			Node * p = NULL;
			while(temp)
			{
				p = temp->next;
				temp->next = NULL;
				delete temp;
				temp = p;
			}
			head = NULL;

		}

	else
		return;


}


bool find_delete_element(int a)
{
	if(head!=NULL)
			{
				if(head->data==a)
				{
					Node * temp = head;
					head = head->next;
					temp->next = NULL;
					delete temp;
					return true;
				}
				else
				{
					Node * temp = head;
					Node * prev = NULL;
					while(temp)					//remember the silly mistake in the while loop it can get into the infinite loop
					{
						if(temp->data!=a)
						{
							prev = temp;
							temp = temp->next;
						}
						else
							break;

					}

					if (temp!=NULL)
					{
						if(temp->next)
						{
							prev->next = temp->next;
							temp->next = NULL;

						}
						else
						{
							prev->next = NULL;

						}
						cout<<"Deleted the element\n";
						delete temp;
						return true;
					}
					else
					{
						cout<<"Didn't find the element\n";
						return false;
					}


				}
			}
	return false;

}

bool detectloop()
{
	if(head!=NULL)
	{

		Node * slow;
		Node * fast;

		if(head->next->next)
		{
			slow = head;
			fast = head->next->next;
			while(slow && fast->next)
			{
				if(fast==slow)
					return true;
				else
				{
					fast = fast->next->next;
					slow = slow->next;
				}
			}
		}


	}
	return false;
}

int countelements()
{
	if(head!=NULL)
	{
		Node * temp = head;
		int count = 0;
		while(temp)
		{
			count++;
			temp=temp->next;
		}
		return count;
	}
	return 0;
}

int getnthelement(int a)
{
	if(head!=NULL)
	{
		int c = a;
		Node * temp = head;
		while(temp && --c)
		{
			temp = temp->next;
		}
		if(c==0)
			return temp->data;
		else
			return -1;
	}
	return -1;
}

void sortedinsert(int a)
{
	if (head==NULL)
		{
			Node * temp = new Node();
			temp->data = a;
			temp->next = NULL;
			head = temp;
		}
		else
		{
			Node * temp  = head;
			Node * prev = NULL;
			while(temp->next){
				temp = temp->next;
			}

			Node * p = new Node();
			p->data = a;
			p->next = NULL;
			temp->next = p;
		}

}

