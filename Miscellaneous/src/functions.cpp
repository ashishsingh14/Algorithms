/*
 * functions.cpp
 *
 *  Created on: Feb 2, 2015
 *      Author: ashissi3
 */
#include "functions.h"

void multiply_largenumbers(const char *a, const char *b)
{
	int l1 = strlen(a);
	int l2 = strlen(b);
	int l3 = l1 + l2;
	int c[l3];
	memset(c, 0, sizeof(int)*l3);

	for(int i =l1-1;i>=0;i--)
	{
		for(int j =l2-1;j>=0;j--)
		{
			c[i+j+1]+= (a[i] - '0') * (b[j]-'0');
		}
	}

	for(int i = l3-1;i>0;i--)
	{
		if(c[i]>=10)
		{
			c[i-1]+= c[i]/10;
			c[i] = c[i]%10;

		}
	}
	printarray(c, l3);
}

void printarray(int *a, int l)
{
	for(int i=0; i<l; i++)
	{
		cout<<a[i];
	}
	cout<<endl;
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


void generateallsubsets(char *a, int n)
{
	int total = pow(2,n);
	int temp;
	for(int i = 0; i<total;i++)
	{
		for(int j = 0; j<n;j++)
		{
			temp = i;
			temp = temp>>j;
			if(temp&1)
				cout<<a[j]<<" ";
		}
		cout<<endl;
	}
}

int gcd(int a, int b)
{
	if(a<0)
		a = (-1)*a;
	else if(b<0)
		b= (-1)*b;
	if(a%b==0)
		return b;
	else if(a>=b)
		gcd(b,a%b);
	else
		gcd(a,b%a);

return 2;
}

void findallpermutations(char *a, int n)
{

}

void decimaltobinaryrecursion(int a)
{
	if(a>=1)
	{
		decimaltobinaryrecursion(a/2);
		cout<<a%2;
	}
}

void decimaltobinaryiterative(int a)
{
	string s="";

	while(a>=1)
	{
		s+= (a%2 + '0');
		a = a/2;
	}
	reverse(s.begin(), s.end());
	cout<<s<<endl;

}

void swap(char *a, char *b)
{
	*a = *a^*b;
	*b = *b^*a;
	*a = *a^*b;
}

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
int powerusingdivide(int x, int n )
{
	if(n==0) return 1;
	int temp = powerusingdivide(x,n/2);
	if(n%2==0)
		return temp * temp;
	else
		return (x *temp*temp);

}

