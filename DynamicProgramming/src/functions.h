/*
 * functions.h
 *
 *  Created on: Feb 24, 2015
 *      Author: ashissi3
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int minsteps(int a);
int minstepsbu(int a);
int minstepstd(int a);
void initialize();
#define SIZE 100
#define min(a, b) ((a)<(b)? (a):(b))
#define max(a, b) ((a)>(b)? (a):(b))

int movesgame(int n, int*inp, int size);
int movesgamedp(int n, int*inp, int size);
int catalannumberdp(int);
int rodcuttingbu(int*, int);

#endif /* FUNCTIONS_H_ */
