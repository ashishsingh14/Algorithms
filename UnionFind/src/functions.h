/*
 * functions.h
 *
 *  Created on: Jun 24, 2015
 *      Author: ashissi3
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class Edge{
	int source;
	int destination;
	friend class Graph;
};


class Graph
{
	private:
		int vertices;
		int edges;
		Edge *edge;
	public:
		Graph(int , int);
		void addedge();
		void unionofvertices(int *, int, int);
		int findvertices(int * , int);
		bool detectcycle();
		static int myComp(const void *a,const void *b);
};


#endif /* FUNCTIONS_H_ */
