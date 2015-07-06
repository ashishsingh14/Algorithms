//============================================================================
// Name        : unionfind.cpp
// Author      : Ashish
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "functions.h"
using namespace std;

int main() {
	Graph * g = new Graph(8,6);
	g->addedge();
	if(g->detectcycle())
		cout<<"There is cycle in the graph"<<endl;
	else
		cout<<"There is no cycle in the graph"<<endl;
	return 0;
}
