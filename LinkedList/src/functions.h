/*
 * functions.h
 *
 *  Created on: May 16, 2015
 *      Author: ashissi3
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stack>
using namespace std;
class Node
{
	int data;
	Node * next;
public:
	friend class LinkedList;
};

class LinkedList{
	Node * head;
	void reverselinkedlistrecursionhelper(Node *);
public:
	LinkedList();
	void insertlinkedlist(int a);
	void printlinkedlist();
	void reverselinkedlistrecursion();
	bool checkpalindrome();
	void reverselinkedlist();
	int lengthlinkedlist();
	void insertsortedorder(int a);
	void printnthefromlast(int n);
	void deletealternativenodes();
	void mergetwosorted();
	void deletenodesgreatervalueright();
};



#endif /* FUNCTIONS_H_ */
