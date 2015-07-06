/*
 * functions.cpp
 *
 *  Created on: Mar 13, 2015
 *      Author: ashissi3
 */

#include "functions.h"

void heap::swap(int &a, int &b)
{
	a = a^b;
	b = a^b;
	a = a^b;
}

heap::heap(int a)
{
	size = a;
	inp = new int[a];
	for(int i =0;i<size;i++)
	{
		inp[i] = 0;
	}
}

void heap::insertelements()
{
	cout<<"Enter the elements"<<endl;
	for(int i =0;i<size;i++)
	{
		cin>>inp[i];
	}
	//print();
}

void heap::maxheapify(int i, int size)
{
	int l = 2*i+1;
	int r = 2*i+2;
	int largest = i;
	if(l<size && inp[l]>inp[largest])
		largest = l;
	if(r<size && inp[r]>inp[largest])
		largest = r;
	if(largest!=i)
	{	int temp = inp[largest];
		inp[largest] = inp[i];
		inp[i] = temp;
		maxheapify(largest,size);
	}
}

void heap::build_max_heap()
{
	for(int i = (size-1)/2;i>=0;i--)
	{
		maxheapify(i,size);
	}
}

void heap::minheapify(int i, int size)
{
	int l = 2*i + 1;
	int r = 2*i + 2;
	int smallest = i;
	if(l<size && inp[l]<inp[smallest])
		smallest = l;
	if(r<size && inp[r]<inp[smallest])
		smallest = r;
	if(smallest!=i)
	{
		swap(inp[smallest],inp[i]);
		maxheapify(smallest,size);
	}
}

void heap::build_min_heap()
{
	for(int i = (size-1)/2;i>=0;i--)
	{
		minheapify(i,size);
	}
}

void heap::print()
{
	for(int i = 0;i<size;i++)
	{
		cout<<inp[i]<<" ";
	}
	cout<<endl;
}

void heap::heapsort()
{
	build_max_heap();
	int maxsize = size;
	for(int i=size-1;i>0;i--)
	{
		int temp = inp[0];
		inp[0] = inp[i];
		inp[i] = temp;
		maxsize = maxsize-1;
		maxheapify(0,maxsize);
	}
}

int heap::extractmin()
{
	if(size<1)
	{
		cout<<"Underflow"<<endl;
		return -1;
	}
	else{
		int min = inp[0];
		inp[0] = inp[size-1];
		size = size-1;
		maxheapify(0,size);
		return min;
	}
}

heap::~heap()
{
	delete inp;
}

int heap::extractmax()
{

	if(size<1)
	{
		cout<<"Underflow"<<endl;
		return -1;
	}
	else{
		int max = inp[0];
		inp[0] = inp[size-1];
		size = size-1;
		minheapify(0,size);
		return max;
	}
}


