//============================================================================
// Name        : projecteuler.cpp
// Author      : Ashish
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <cmath>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#define SIZE 1000002
using namespace std;

bool prime[SIZE];

int checkifprime(int n)
{
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else if(n%2==0)
	{
		return 0;
	}
	else
	{
		for(int i = 3;i*i<=n;i=i+2 )
		{
			if(n%i==0)
				return 0;
		}
	}
	return 1;

}

void sieveforprimes()
{
   memset(prime, true, SIZE);
   prime[0] = false;
   prime[1] = false;

   for(int i =2; i*i<=SIZE; i++)
   {
       if(prime[i])
       {
           for(int j = 2; (j*i)<SIZE;j++)
           {
               prime[j*i] = false;
           }
       }
   }



   /*
   for(int i=0; i<100; i++)
   	{
   		cout<<i<<" "<<prime[i]<<endl;
   	}*/


}

void print(int n)
{
	unsigned long long sum = 0;
	for(int k = 2;k<=n;k++)
	   {
	       if(prime[k]==true)
	    	   sum+=k;
	   }
	printf("%llu\n",sum);
}

int collatzsequence()
{

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int t;
	sieveforprimes();
	scanf("%d", &t);

	while(t--)
	{
		int n;
		scanf("%d", &n);
		long long sum = 0;
		for(int i = 2;i<=n;i++)
		{
			if(prime[i])
				sum += i;
		}

		printf("%llu\n",sum);

	}
    return 0;
}
