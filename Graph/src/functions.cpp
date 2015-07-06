/*
 * functions.cpp
 *
 *  Created on: Jan 28, 2015
 *      Author: ashissi3
 */
#include "functions.h"


Graph::Graph(int x)
{
	n = x;
	head = new Node*[n];
	for(int i = 0; i<n;i++)
	{
		head[i] = NULL;
	}
}

void Graph::addedge_undirected(int a, int b)
{
	Node * newnode = new Node();
	newnode->data = b;

	if(head[a]==NULL){

		head[a] = newnode;
		head[a]->next = NULL;
	}
	else
	{
		newnode->next = head[a];
		head[a] = newnode;
	}
	Node * newnode1 = new Node();
	newnode1->data = a;
	if(head[b]==NULL){

		head[b] = newnode1;
		head[b]->next = NULL;
	}
	else
	{
		newnode1->next = head[b];
		head[b] = newnode1;
	}

}

void Graph::addedge_directed(int a, int b)
{
	Node * newnode = new Node();
	newnode->data = b;

	if(head[a]==NULL){

		head[a] = newnode;
		head[a]->next = NULL;
	}
	else
	{
		newnode->next = head[a];
		head[a] = newnode;
	}
}

void Graph::removeedge_undirected(int a, int b)
{
	Node*temp;
	Node*prev;
	if(head[a]==NULL)
		return;
	else
	{
		temp = head[a];
		prev = NULL;
		while(temp->data!=b)
		{
			prev = temp;
			temp = temp->next;
		}
		if(prev)
		{
			prev->next = temp->next;
			temp->next = NULL;
			delete temp;
		}
		else
		{
			head[a] = temp->next;
			temp->next = NULL;
			delete temp;
		}
	}

	if(head[b]==NULL)
			return;
	else
	{
		temp = head[b];
		prev = NULL;
		while(temp->data!=a)
		{
			prev = temp;
			temp = temp->next;
		}
		if(prev)
		{
			prev->next = temp->next;
			temp->next = NULL;
			delete temp;
		}
		else
		{
			head[a] = temp->next;
			temp->next = NULL;
			delete temp;
		}
	}

}

void Graph::removeedge_directed(int a, int b)
{
	Node*temp;
	Node*prev;
	if(head[a]==NULL)
		return;
	else
	{
		temp = head[a];
		prev = NULL;
		while(temp->data!=b)
		{
			prev = temp;
			temp = temp->next;
		}
		if(prev)
		{
			prev->next = temp->next;
			temp->next = NULL;
			delete temp;
		}
		else
		{
			head[a] = temp->next;
			temp->next = NULL;
			delete temp;
		}
	}

}

void Graph::printgraph()
{
	for(int i = 0;i<n;i++)
	{
		cout<<"Node "<<i<<": ";
		if(head[i])
		{
			Node * temp = head[i];
			while(temp)
			{
				cout<<temp->data<<" ";
				temp = temp->next;
			}
		}
		cout<<endl;
	}
}

void Graph::BFS(int starting)
{
	char color[n];
	int label[n];
	int parent[n];
	for(int i = 0;i<n;i++)
	{
		color[i] = 'W';

	}
	queue<int> q;
	color[starting] = 'G';
	label[starting] = 0;
	parent[starting] = 0;
	q.push(starting);
	int temp;
	while(!q.empty())
	{
		temp = q.front();
		cout<<"front element: "<<temp<<endl;
		Node * t = head[temp];
		while(t)
		{
			if(color[t->data]=='W')
			{
				color[t->data] = 'G';
				label[t->data] = label[temp]+1;
				parent[t->data] = temp;
				q.push(t->data);
			}
			t = t->next;
		}
		q.pop();
	}

}

void Graph::DFS(int starting)
{
	int * state = new int[n];
	for(int i = 0;i<n;i++)
	{
		state[i] = 0;
	}
	DFShelper(starting, state);
	delete [] state;
}

void Graph::DFShelper(int starting, int *state)
{
	state[starting] = 1;
	cout<<"Vertex finished is:"<<starting+1<<endl;
	Node *temp = head[starting];
	while(temp)
	{
		if(state[temp->data]==0)
		{
			DFShelper(temp->data, state);
		}
		temp = temp->next;
	}
}



