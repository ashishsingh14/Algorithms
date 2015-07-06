/*
 * functions.h
 *
 *  Created on: Jan 28, 2015
 *      Author: ashissi3
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <queue>
using namespace std;

class Node{
public:				//it has to be public else you can't access the data member
	int data;
	Node*next;
};

class Graph{
	private:
		int n;//n is the total number of vertices
		Node**head;
		void DFShelper(int starting, int *);
	public:
		Graph(int x);
		void addedge_directed(int a, int b);
		void addedge_undirected(int a, int b);
		void removeedge_undirected(int a, int b);
		void removeedge_directed(int a, int b);
		bool checkcyclic();
		void printgraph();
		void BFS(int starting);
		void DFS(int starting);

};

#endif /* FUNCTIONS_H_ */
