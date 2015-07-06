#include <iostream>
#include <stdio.h>
#include <limits.h>
using namespace std;

void merge(int *A, int p, int q, int r);

void mergesort(int * A, int p, int r)
{
	if(p < r)
	{
		int q = (p + r)/2;
		mergesort(A, p ,q);
		mergesort(A, q+1, r);
		merge(A, p, q ,r);
	}

}

void merge(int *A, int p, int q, int r)
{
	int n1 = q-p+1;
	int n2 = r-q;
	int L[n1+1], R[n2+1];
	for (int i=0; i<n1; i++)
	{
		L[i] = A[p+i];
	}
	L[n1] = INT_MAX;
	for (int i=0; i<n2; i++)
		{
			R[i] = A[q+1+i];
		}
	R[n2] = INT_MAX;

	int i, j;
	i = j = 0;
	for(int k = p; k<=r; k++)
	{
		if(L[i]>= R[j])
		{
			A[k] = R[j];
			j++;
		}
		else
		{
			A[k] = L[i];
			i++;
		}
	}
}


void printarray(int *A, int size)
{
	for(int i = 0; i<size; i++)
	{
		cout<<A[i]<<" ";
	}
}


int main()
{
	int A[10]= {14, 22, 1, 23, 56, 9, 12, 3, 22, 34};
	mergesort(A,0,9);
	printarray(A, 10);
	return 0;

}
