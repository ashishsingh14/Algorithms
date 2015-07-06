//============================================================================
// Name        : Codechef.cpp
// Author      : Ashish
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <assert.h>
using namespace std;

void payingup(int *a, int m, int n)
{
	int total = pow(2,m);
	int temp,sum,flag;
	flag=0;
	for(int i = 0; i<total;i++)
	{
		sum = 0;
		for(int j = 0; j<m;j++)
		{
			temp = i;
			temp = temp>>j;
			if(temp&1)
			{
				sum+=a[j];
			}
		}
		if(sum==n)
		{
			flag=1;
			break;
		}
		else
			continue;

	}
	if(flag==1)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;

}

void sieveforprimes(int a, int b)
{
   int size = b-a+2;
   bool prime[size];
   memset(prime, true, sizeof(prime));
   prime[0] = false;
   prime[1] = false;

   for(int i =2; i<size; i++)
   {
       if(prime[i])
       {
           for(int j = 2; (j*i)<size;j++)
           {
               prime[j*i] = false;
           }
       }
   }

   for(int k = 0;k<size;k++)
   {
       if(prime[k]==true)
       cout<<k<<" ";
   }
    cout<<endl;
}


int main() {

	return 0;
}
