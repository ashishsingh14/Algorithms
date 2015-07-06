/*
 * functions.cpp
 *
 *  Created on: Jun 25, 2015
 *      Author: ashissi3
 */

#include "functions.h"


Trie::Trie()
{
	this->root = NULL;
	this->count = 0;
}

int chartoindex(char a)
{
	return (int(a)-int('a'));
}

TrieNode * Trie::getnode()
{
	TrieNode * t = new TrieNode();
	t->value = 0;
	for(int i = 0;i<ALPHASIZE;i++)
	{
		t->child[i] = NULL;
	}
	return t;
}

void Trie::inserttrie(char key[])
{
	if(root==NULL)
	{
		TrieNode * t = getnode();
		root = t;
	}
	else
	{

	}
}


int Trie::search(char key[])
{

}
