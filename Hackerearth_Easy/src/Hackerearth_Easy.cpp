//============================================================================
// Name        : Hackerearth_Easy.cpp
// Author      : Ashish
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <string.h>
#define MOD 1000000007
using namespace std;

#define size 201

void jhools_browser(char * input)
{
	int count = 4;
	int length = strlen(input);

	for(int i = 4; i<(length-4);i++)
	{
		if(input[i]=='a'|| input[i]=='e' || input[i]=='i' || input[i]=='o' || input[i]=='u')
		{

		}

		else
		{
			count++;
		}

	}

	cout<<count<<"/"<<length<<endl;
}


void karan(long long int t)
{
	if(t%2==0)
		cout<<t<<endl;
}



int totalsteps(int cur,int k)
{
	int count = 0;
	if(cur==0)
		return 1;
	else if(cur<0)
		return 0;
	count = (count + totalsteps(cur-k,k) + totalsteps(cur-2,k) + totalsteps(cur-5,k)) % MOD;
	return count;
}

int main() {
	int t;
	int n;
	cin>>t>>n;
	while(t--)
	{
		int long long cur;
		int long long k;
		cin>>cur>>k;
		int ans = totalsteps(cur,k)%MOD;
		cout<<ans<<endl;
	}
	return 0;
}
