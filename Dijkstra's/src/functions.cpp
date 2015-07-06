/*
 * functions.cpp
 *
 *  Created on: Mar 7, 2015
 *      Author: ashissi3
 */


Graph::Graph(int x)
{
	n = x;
	head = new Node*[n];
	for(int i = 0; i<n;i++)
	{
		head[i] = NULL;
	}
}

void Graph::addedge_directed(int a, int b, int weight)
{
	Node * newnode = new Node();
	newnode->data = b;
	newnode->weight = weight;

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


void Graph::Dijkstras(int s)
{
	int parent[n];
	int dist[n];
	int set[n];
	for(int i =0;i<n;i++)
	{
		dist[i] = INT_MAX;
		parent[i] = INT_MAX;
		set[i] = 0;
	}
	dist[s] = 0;
	parent[s] = s;



}
