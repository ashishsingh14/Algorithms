/*
 * functionsrecurisve.h
 *
 *  Created on: Mar 30, 2015
 *      Author: ashissi3
 */

#ifndef FUNCTIONSRECURISVE_H_
#define FUNCTIONSRECURISVE_H_
#include <limits.h>
#include <algorithm>

#define size 4
#define INF INT_MAX
using namespace std;
int catalannumber(int n);
int rodcutting(int *, int);
int lcsrecursive(char *, char*, int, int);
int mindistance(int cost[][size], int s, int d);


#endif /* FUNCTIONSRECURISVE_H_ */
