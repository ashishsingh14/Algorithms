/*
 * main.cpp
 *
 *  Created on: Mar 18, 2015
 *      Author: ashissi3
 */
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{



	 int b = 9999;
	 int *c = &b;
	 int **d = &c;
	 int ***e = &d;
	 int ****f = &e;
	 int *****g = &f;

	 /*cout<<b<<endl;
	 cout<<c<<endl;
	 cout<<d<<endl;
	 cout<<e<<endl;
	 cout<<f<<endl;
	 cout<<g<<endl;*/

	 //int p [] = {1,2,3};
	 int q[2][3] = {{34,67,89},{99,11,14}};
	 int **r;
	 int (*s)[3];
	// s = q;



	 //r = &p;



	 int *t = new int[4];
	 //cout<<"value assign"<<**s<<endl;  //even if I use int (*s)[3]; I will get 8 bytes


	 cout<<"Array addresses"<<endl;
	// cout<<p<<endl;
	// cout<<(&p)<<endl;		//cout<<&(&p)<<endl; not legal this one
	 cout<<q<<endl;
	 cout<<(&q)<<endl;
	 /*
	 while(true)
	 {
		 for(int i =0;i<10;i++)
			 cout<<i<<endl;
		 break;
	 }*/

	 int a[5];
	 int *p = a;
	 int (*ap)[5] = &a;

	 printf("p = %p, ap = %p\n", (void *) p, (void *) ap);
	 p++;
	 ap++;
	 printf("p = %p, ap = %p\n", (void *) p, (void *) ap);

	return 0;

}
