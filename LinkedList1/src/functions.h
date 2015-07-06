/*
 * functions.h
 *
 *  Created on: Dec 9, 2014
 *      Author: ashissi3
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_


#include <iostream>
#include <string.h>
#include <stdio.h>
#include <limits.h>


using namespace std;

struct node
{
	int data;
	struct node * next;

};

typedef struct node Node;

void insert_linkedlist(int a);
bool search_linkedlist(int a);
void print_linkedlist();
void initialize_linkedlist();
void reverse_linkedlist();
bool detectloop();
void delete_linkedlist();
bool find_delete_element(int a);
void insertbeginning_linkedlist(int a);
int countelements();
int getnthelement();
void sortedinsert();

 /* FUNCTIONS_H_ */
#endif
