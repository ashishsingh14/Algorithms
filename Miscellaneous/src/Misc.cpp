//============================================================================
// Name        : Misc.cpp
// Author      : Ashish
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "functions.h"
#define size 1000000

void chefandstring(char *str, char a, char b, int l, int r)
{

}

char str[size];
int main() {

	char a, b;
	int q,l,r;
	cin>>str;
	cin>>q;
	while(q--)
	{
		scanf("%c %c %d %d",&a,&b,&l,&r );
		chefandstring(str,a,b,l,r);
	}
	return 0;
}
