/*
 * functions.cpp
 *
 *  Created on: Dec 11, 2014
 *      Author: ashissi3
 */
#include "functions.h"

Node * head, *tail;

void insert_linkedlist(int a)
{
	Node * temp = new Node();
	temp->data = a;

	if (head==NULL || tail==NULL)
		{
			head = tail = temp;
			temp->next = NULL;
			temp->prev = NULL;
		}
	else
		{
			tail->next = temp;
			temp->next = NULL;
			temp->prev = tail;
			tail = temp;
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
				Node * temp = tail;
						while(temp)
						{
							cout<<temp->data<<" ";
							temp = temp->prev;
						}
						cout<<endl;
			}
}
void initialize_linkedlist()
{
	head = NULL;
	tail = NULL;
}

void reverse_linkedlist()
{
	if(head!=NULL)
		{
			if(head == tail)
				return;
			else
			{
				Node * temp = tail;
				head = tail;
				tail = temp;
				Node * p = tail;
				Node * save;
				Node * savenext;
				while(p)
				{
					save = p->next;
					p->next = p->prev;
					p->prev = save;
					p = save;
				}
			}
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

}


void insertbeginning_linkedlist(int a)
{
	Node * temp = new Node();
		if (head==NULL)
			{
				temp->data = a;
				temp->next = NULL;
				temp->prev = NULL;
				head = tail = temp;
			}
			else
			{
				temp->data = a;
				temp->next = head;
				temp->prev = NULL;
				head = temp;
			}
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


