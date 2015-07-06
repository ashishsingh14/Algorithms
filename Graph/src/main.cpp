//============================================================================
// Name        : main.cpp
// Author      : Ashish
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "functions.h"
#include "flow.h"

int main()
{
	Graph*g = new Graph(5);
	/*g->addedge_undirected(0,1);
	g->addedge_undirected(0,4);
	g->addedge_undirected(1,2);
	g->addedge_undirected(1,3);
	g->addedge_undirected(1,4);
	g->addedge_undirected(2,3);
	g->addedge_undirected(3,4);
	g->printgraph();
	//g->removeedge_undirected(1,3);
	cout<<endl;
	g->printgraph();
	cout<<endl;
	g->BFS(0);*/


	g->addedge_undirected(0,3);
	g->addedge_undirected(3,4);
	g->addedge_undirected(3,1);
	g->addedge_undirected(1,4);
	g->addedge_undirected(4,2);
	g->printgraph();
	g->DFS(0);
	return 0;
}
