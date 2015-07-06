/*
 * functions.cpp
 *
 *  Created on: May 16, 2015
 *      Author: ashissi3
 */

#include "functions.h"

LinkedList::LinkedList()
{
	head = NULL;
}

void LinkedList::insertlinkedlist(int a)
{
	if(head==NULL)
	{
		head = new Node();
		head->data = a;
		head->next = NULL;
	}

	else
	{
		Node * temp = new Node();
		temp->data = a;
		temp->next = head;
		head = temp;
	}
}


void LinkedList::printlinkedlist(){
	if(head!=NULL)
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


void LinkedList::reverselinkedlist()
{
	if(head!=NULL)
	{
		if(head->next==NULL)
			return;
		else
		{
			Node * temp = head;
			Node * prev=NULL;
			Node * ne;
			while(temp)
			{
				ne = temp->next;
				temp->next = prev;
				prev = temp;
				temp = ne;
			}
			head = prev;
		}
	}
}




bool LinkedList::checkpalindrome()
{
	stack<int> copy;
	Node * temp = head;
	while(temp)
	{
		copy.push(temp->data);
		temp = temp->next;
	}
	temp = head;
	while(!copy.empty())
	{
		if(copy.top()!=temp->data)
			return false;
		temp = temp->next;
		copy.pop();
	}
	return true;
}

void LinkedList::reverselinkedlistrecursionhelper(Node * temp)
{
	if(temp->next==NULL)
	{
		head = temp;
		return;
	}
	reverselinkedlistrecursionhelper(temp->next);
	Node * q = temp->next;
	q->next = temp;
	temp->next = NULL;
}

void LinkedList::reverselinkedlistrecursion()
{
	if(head==NULL || head->next==NULL)
		return ;
	else
	{
		Node *temp,*prev;
		temp = head;
		prev = NULL;
		reverselinkedlistrecursionhelper(temp);
	}

}

int LinkedList:: lengthlinkedlist()
{
	Node * temp = head;
	int count = 0;
	while(temp){
		count+= 1;
		temp = temp->next;
	}
	return count;
}


void LinkedList::insertsortedorder(int a)
{
	Node * temp = new Node();
	if(head==NULL)
		{
			head = new Node();
			head->data = a;
			head->next = NULL;
		}

	else if(head->next==NULL)
	{
			if(a<head->data)
			{
				temp->data = a;
				temp->next = head;
				head = temp;
			}
			else
			{
				temp->data = a;
				head->next = temp;
				temp->next = NULL;
			}
	}
	else if(a<=head->data)
	{
		temp->data = a;
		temp->next = head;
		head = temp;
	}
	else
	{
			Node * current = head;
			Node * prev = NULL;
			temp->data = a;
			while(current && a>(current->data))
			{
				prev = current;		//check current first in the while condition
				current = current->next;
			}
			if(current==NULL)
			{
				prev->next = temp;
				temp->next = NULL;

			}
			else
			{
				prev->next = temp;
				temp->next = current;
			}
		}

}

void LinkedList::printnthefromlast(int n)
{
	if(head==NULL)
		return;
	else
	{
		Node*ref = head;
		Node* main = head;
		int count = 0;
		while(count<n)
		{

			if(ref==NULL)
			{
				cout<<"There are not enough nodes"<<endl;
				return;
			}
			ref = ref ->next;
			count++;

		}
		while(ref!=NULL)
		{
			ref = ref->next;
			main = main->next;
		}

		cout<<"The data at the Nth position from the end is "<<main->data<<endl;

	}
}

void LinkedList::deletealternativenodes()
{
	if(head==NULL)
		return;
	int count = 1;
	Node * temp = head;
	Node * prev;
	Node * save;
	while(temp)
	{
		if(count%2==0)
		{
			Node * per = temp;
			save = temp->next;
			prev->next = temp->next;
			delete per;
			temp = save;
			count++;

		}
		else
		{
			count++;
			prev = temp;
			temp = temp->next;
		}
	}
}

void LinkedList::mergetwosorted()
{
	LinkedList * l = new LinkedList();
	l->insertsortedorder(5);
	l->insertsortedorder(13);
	l->insertsortedorder(1);
	l->insertsortedorder(9);
	LinkedList * final = new LinkedList();
	if(head == NULL)
	{
		final->head = l->head;
	}
	else if (l->head == NULL)
		final->head = head;
	else
	{

	}

}

void LinkedList::deletenodesgreatervalueright()
{
	if(head==NULL)
		return;
	Node * temp = head;
	Node * n = NULL;
	Node * prev = NULL;
	while(temp && temp->next)
	{
		if(temp->data<(temp->next->data))
		{
			n = temp->next;
			prev = temp;
			prev->next = NULL;
			free(prev);
			temp = n;

		}
		else
			temp=temp->next;
	}

	head = temp;
}


