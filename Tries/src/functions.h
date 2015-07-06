/*
 * functions.h
 *
 *  Created on: Jun 25, 2015
 *      Author: ashissi3
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_
#include <iostream>
#define ALPHASIZE 26
using namespace std;

class TrieNode{
	int value;
	TrieNode*child[ALPHASIZE];
	friend class Trie;
};

class Trie{
	TrieNode*root;
	int count;
public:
	Trie();
	TrieNode * getnode();
	void inserttrie(char key[]);
	int search(char key[]);

};

#endif /* FUNCTIONS_H_ */
