/*
 * functions.h
 *
 *  Created on: Dec 11, 2014
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
	struct node * prev;
};

typedef struct node Node;

void insert_linkedlist(int a);
bool search_linkedlist(int a);
void print_linkedlist();
void initialize_linkedlist();
void reverse_linkedlist();
void delete_linkedlist();
bool find_delete_element(int a);
void insertbeginning_linkedlist(int a);
int countelements();
int getnthelement();
void sortedinsert();
void printusing_recursion();
void reverseusing_recursion();
void lengthusing_recursion();
void insertusing_recursion();
void deleteusing_recursion();


void debugging(int *a);

#endif /* FUNCTIONS_H_ */
