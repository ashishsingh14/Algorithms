/*
 * flow.h
 *
 *  Created on: Mar 11, 2015
 *      Author: ashissi3
 */

#ifndef FLOW_H_
#define FLOW_H_
#include<iostream>
using namespace std;

class AdjacencyMatrix{
	int **adj;
	int vertices;

public:
	AdjacencyMatrix(int nodes);
	void addEdge(int,int);
	void printAdjacencyMatrix();
	void fordfulkerson(int source, int sink,);d
};



#endif /* FLOW_H_ */
