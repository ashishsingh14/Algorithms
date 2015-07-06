/*
 * functionsrecursive.cpp
 *
 *  Created on: Mar 30, 2015
 *      Author: ashissi3
 */
#include "functionsrecurisve.h"

int catalannumber(int n)
{
	int count = 0;
	if(n==1 || n==0)
		return 1;
	for(int i=1;i<=n;i++)
	{
		count+= catalannumber(i-1)*catalannumber(n-i);
	}
	return count;
}

int rodcutting(int *p, int n)
{
	if(n==0)
		return 0;
	int q = INT_MIN;
	for(int i = 1;i<=n;i++)			//remember this point
	{
		q = max(q, p[i-1]+rodcutting(p,n-i));
	}
	return q;

}

int lcsrecursive(char *x, char*y, int m, int n)
{
	if(m==0||n==0)
		return 0;
	else if(x[m-1]==y[n-1])
	{
		return 1+ lcsrecursive(x,y,m-1,n-1);
	}
	else
	{
		return max(lcsrecursive(x,y,m,n-1),lcsrecursive(x,y,m-1,n));
	}
}


int mindistance(int cost[][size], int s, int d)
{
	if(s==d || s+1==d)
		return cost[s][d];

	int min = cost[s][d];
	for(int i = s+1;i<d;i++)
	{
		int c = cost[s][i] + cost[i][d];
		if(c<min)
			min = c;
	}

	return min;

}



