/*
 * functions.cpp
 *
 *  Created on: Feb 24, 2015
 *      Author: ashissi3
 */

#include "functions.h"
int store[SIZE];

int minsteps(int a){
	int r;
	if(a==1)
		return 0;
	else
	{
		r = 1 + minsteps(a-1);
		if(a%2==0)
			r = min(r, 1 + minsteps(a/2));
		else if(a%3==0)
			r = min(r, 1 + minsteps(a/3));
	}
	return r;

}

int minstepsbu(int a)
{
	int DP[a+1];
	memset(DP, 0, sizeof(int)*(a+1));
	DP[1] = 0;
	for(int i=2; i<=a; i++)
	{
		DP[i] = 1 + DP[i-1];
		if(i%2==0) DP[i] = min(DP[i],1 + DP[i/2]);
		else if(i%3==0) DP[i] = min(DP[i],1 + DP[i/3]);
	}
	return DP[a];
}


int minstepstd(int a)
{
	if(a==1) return 0;
	if(store[a]!=-1)
		return store[a];
	int r = 1 + minstepstd(a-1);
	if(a%2==0)
		r = min(r, 1 + minstepstd(a/2));
	else if(a%3==0)
		r = min(r, 1 + minstepstd(a/3));
	store[a] = r;
	return r;
}


void initialize()
{
	memset(store, -1, sizeof(int)*(SIZE));
}

int movesgame(int n, int*inp, int size)
{
	if(n==0)
		return 1;
	if(n<0)
		return 0;
	if(size<=0 && n>=1)
		return 0;
	return movesgame(n,inp,size-1) + movesgame(n-inp[size-1], inp, size);

}

int movesgamedp(int n, int*inp, int m)
{
	int dp [n+1][m];
	for(int j = 0;j<m;j++)
		dp[0][j] = 0;
	for(int i = 1;i<=n;i++)
	{
		for(int j = 0;j<m;j++)
		{



		}
	}

	return dp[n][m-1];
}

int catalannumberdp(int n)
{
	int cp[n+1];
	cp[0]=1;
	cp[1]=1;
	for(int i=2;i<=n;i++)
	{
		cp[i] = 0;
		for(int j=1;j<=i;j++)
		{
			cp[i]+= cp[j-1]*cp[i-j];
		}
	}
	return cp[n];
}


int rodcuttingbu(int*p, int n)
{
	int sol[n+1];
	sol[0] = 0;
	int q;
	for(int i = 1;i<=n;i++)
	{
		q = INT_MIN;
		for(int j = 1;j<=i;j++)
		{

			q = max(q,p[j-1]+sol[i-j]);
		}
		sol[i] = q;
	}
	return sol[n];
}
