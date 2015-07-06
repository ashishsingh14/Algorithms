/*
 * functions.h
 *
 *  Created on: Jan 29, 2015
 *      Author: ashissi3
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class Node
{
public:
	int data;
	Node *left;
	Node * right;
};


class BST{
private:
	Node * root;
	void inserthelper(Node * root, int data);
	void inorderhelper(Node * root);
	void insertHelper(Node **node,int data);
	int hasPathSumHelper(Node* node,int sum);
	void printlevelorderhelper(Node*node);
	void printAllPossiblePathsHelper(Node* node,int paths[],int len);
	void deleteBSTHelper(Node *node);
	void BSTdeletesimpleHelper(Node *node);
	void bstdeletegeekshelper(Node *node);
	void deleteusingdoublehelper(Node ** node);
	void deletenodehelper(Node **, Node *);
	Node* searchnodehelper(Node *, int);
	Node* findparenthelper(Node *, Node*);
	Node* findparent(Node *);
public:
	~BST();
	BST();
	void insert(int data);
	void inorder();
	void Insert(int data);
	int hasPathSum(int sum);
	void printlevelorder();
	void printAllPossiblePaths();
	void printPath(int paths[],int len);
	void deleteBST();
	void checkempty();
	void BSTdeletesimple();
	void bstdeletegeeks();
	void deleteusingdouble();
	void deletenode(int);
	void inordersuccessor(Node *);
	Node* searchnode(int a);
};

#endif /* FUNCTIONS_H_ */
