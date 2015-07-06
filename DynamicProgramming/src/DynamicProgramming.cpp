//============================================================================
// Name        : DynamicProgramming.cpp
// Author      : Ashish
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "functions.h"
#include "functionsrecurisve.h"


int main() {
	for(int i = 0;i<=10;i++)
		cout<<"Catalan Number is "<<catalannumberdp(i)<<endl;


	int p[10] = {1, 5, 8, 9, 10, 17, 17, 20, 24, 30};


	for(int i = 1;i<=10;i++)
	{
		cout<<"Maximum Value is "<<rodcutting(p,i)<<endl;
	}

	char *x = "abc";
	char *y = "ac";
	int m = strlen(x);
	int n = strlen(y);
	cout<<"The longest common subsequence is: "<<lcsrecursive(x,y,m,n);
	int cost[size][size] = { {0, 15, 80, 90},
	                      {INF, 0, 40, 50},
	                      {INF, INF, 0, 70},
	                      {INF, INF, INF, 0}
	                    };
	cout<<endl<<"The minimum distance from source to destination is "<<mindistance(cost, 0, size-1)<<endl;

	return 0;
}
