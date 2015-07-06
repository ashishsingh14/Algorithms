/*
 * functions.cpp
 *
 *  Created on: Jun 24, 2015
 *      Author: ashissi3
 */

#include "functions.h"


Graph::Graph(int v, int e)
{
	this->vertices = v;
	this->edges = e;
	this->edge = new Edge[e];
}

int myComp(const void *a,const void *b){

	return (((Edge *)a)->source) > (((Edge *)b)->source);
}

void Graph::addedge()
{
	int s,d;

	for(int i = 0;i<edges;i++)
	{
		cin>>s>>d;
		edge[i].source = s;
		edge[i].destination = d;
	}

	qsort(edge,edges,sizeof(edges[0]),myComp);

	for (int i = 0;i<edges;i++)
	{
		cout<<edge[i].source<<endl;
	}

}

int Graph::findvertices(int *parent, int s)
{
	if(parent[s]==-1)
		return s;
	return findvertices(parent, parent[s]);
}


void Graph::unionofvertices(int * parent, int x, int y)
{
	int x1 = findvertices(parent, x);
	int y1 = findvertices(parent, y);
	parent[x1] = y1;
}


bool Graph::detectcycle()
{
	int * parent = new int[vertices];
	for(int i = 0;i<vertices;i++)
		parent[i]=-1;

	for(int i = 0;i<edges;i++)
	{
		int x = findvertices(parent, edge[i].source);
		int y = findvertices(parent, edge[i].destination);

		if(x==y)
			return true;
		unionofvertices(parent,x,y);
	}

	return false;

}
