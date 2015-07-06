/*
 * functions.h
 *
 *  Created on: Feb 2, 2015
 *      Author: ashissi3
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <string>
#include <algorithm>
#include <assert.h>
using namespace std;
#define MAXSIZE 512

void multiply_largenumbers(const char*, const char*);
void printarray(int *, int);
void sieveforprimes(int a, int b);
void generateallsubsets(char *,int);
void findallpermutations(char*, int);
int gcd(int, int);
void decimaltobinaryrecursion(int);
void decimaltobinaryiterative(int);
void swap(char *, char *);
void payingup(int *, int,int);
int powerusingdivide(int, int );

#endif /* FUNCTIONS_H_ */
