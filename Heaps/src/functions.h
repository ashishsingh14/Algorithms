/*
 * functions.h
 *
 *  Created on: Mar 13, 2015
 *      Author: ashissi3
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <iostream>
#include <stdio.h>

using namespace std;

class heap
{
	int size;
	int *inp;
public:
	heap(int);
	~heap();
	void insertelements();
	void maxheapify(int,int);
	void build_max_heap();
	void minheapify(int,int);
	void build_min_heap();
	void heapsort();
	void swap(int &, int &);
	void print();
	int extractmin();
	int extractmax();
};



#endif /* FUNCTIONS_H_ */
