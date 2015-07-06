//============================================================================
// Name        : practice3.cpp
// Author      : Ashish
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<algorithm>
#include <stdio.h>
using namespace std;


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	int n;
    	scanf("%d",&n);
    	int a[n];
    	for(int i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    	}
    	sort(a,a+n);
    	int max=0,min=300000;
    	int i=0,j=n-1;
    	int sum = 0;
    	while(i<j)
    	{
    		sum=a[i]+a[j];
    		if(sum>max) max=sum;
    		if(sum<min) min=sum;
    		i++;j--;

    	}
    	printf("%d\n",max-min);


    }
    return 0;
}
