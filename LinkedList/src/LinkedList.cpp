//============================================================================
// Name        : LinkedList.cpp
// Author      : Ashish
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "functions.h"

int main() {

	LinkedList * l = new LinkedList();
	//l->insertlinkedlist(5);
	l->insertlinkedlist(13);
	l->insertlinkedlist(5);
	l->insertlinkedlist(6);
	//l->insertlinkedlist(19);
	//l->insertlinkedlist(6);
	//l->insertlinkedlist(631);
	//l->insertlinkedlist(88);
	//l->insertlinkedlist(9000);
	//l->printlinkedlist();
	//l->reverselinkedlistrecursion();
	//l->printlinkedlist();
	//l->deletealternativenodes();
	//l->reverselinkedlistrecursion();
	l->deletenodesgreatervalueright();
	l->printlinkedlist();
	//l->printnthefromlast(4);
	return 0;
}
