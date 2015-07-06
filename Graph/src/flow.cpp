/*
 * flow.cpp
 *
 *  Created on: Mar 11, 2015
 *      Author: ashissi3
 */
#include "flow.h"

AdjacencyMatrix::AdjacencyMatrix(int n){
	vertices=n;
	adj = new int*[vertices];  //Dynamic memory allocation
	for(int i=0;i<vertices;i++){
		adj[i]=new int[vertices];    //Dynamic memory allocation
			for(int j=0;j<vertices;j++){
				adj[i][j]=0;
			}
	}
}

void AdjacencyMatrix::addEdge(int origin,int dest){
	if(origin>=vertices||origin<0||dest>=vertices||dest<0){
		cout<<endl<<"Invalid entry"<<endl;
		return;
	}
	else{
		adj[origin][dest]=1;
	}
}

void AdjacencyMatrix::printAdjacencyMatrix(){
	for(int i=0;i<vertices;i++){
		cout<<endl;
		for(int j=0;j<vertices;j++){
			cout<<adj[i][j]<<" ";
		}
		cout<<endl;
	}
}
