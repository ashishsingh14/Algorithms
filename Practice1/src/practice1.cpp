//============================================================================
// Name        : practice1.cpp
// Author      : Ashish
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

class Node{
public:				//it has to be public else you can't access the data member
	int data;
	Node*next;
};


void printfunction(int **a, int rows, int columns)
{
	for(int i = 0;i<3;i++)
	  {
	      for(int j = 0;j<3;j++)
	      {
	        cout<<"with one star and j "<<*((*(a+i)+j))<<endl;
	      }
	  }
}

int main()
{
  int a[5] = {12,33,43,333,112};
  int b[3][3] = {{22,211,344},{56,666,987},{455,778,6363}};
  for(int i = 0;i<5;i++)
  {
      cout<<*(a+i)<<endl;
  }
  //""<<
  cout<<"value of b "<<b<<endl<<endl;
  cout<<"value of * b "<<*b<<endl;
  cout<<"value of ** b "<<**b<<endl;

  for(int i = 0;i<3;i++)
  {
      //for(int j = 0;j<3;j++)
      {
        cout<<"simple addition "<<(b+i)<<endl;
      }
  }

  for(int i = 0;i<3;i++)
  {
      //for(int j = 0;j<3;j++)
      {
        cout<<"with one star "<<(*(b+i))<<endl; //(*(b+i)) is itself a pointer
      }
  }

  for(int i = 0;i<3;i++)
    {
        //for(int j = 0;j<3;j++)
        {
          cout<<"with square bracket "<<&b[i]<<endl;
        }
    }
  for(int i = 0;i<3;i++)
  {
      for(int j = 0;j<3;j++)
      {
        cout<<"with one star and j "<<*((*(b+i)+j))<<endl;
      }
  }


  for(int i = 0;i<3;i++)
  {
      for(int j = 0;j<3;j++)
      {
        cout<<"address of each element"<<(&b[i][j])<<endl;
      }
  }
cout<<"illegal"<<a[6]<<endl;

int *c[3];
c[0] = (int *)0x7fff57e94c48; //c[0] =99; it will give error
cout<<c[1];
for(int i = 0;i<3;i++)
{
	c[i] = new int [3];
}


//a = &d;  u cant change value of a

cout<<endl;
int ***p = new int **[3];
for(int i = 0;i<3;i++)
{
	p[i] = new int*[3];
}


for(int i = 0;i<3;i++)
{
	for(int j = 0;j<3;j++)
	{
		p[i][j] = new int[3];
	}
}


for(int i = 0;i<3;i++)
{
	for(int j = 0;j<3;j++)
	{
		for(int k = 0;k<3;k++)
		{
			p[i][j][k] = i+j+k;
		}
	}
}

for(int i = 0;i<3;i++)
{
	for(int j = 0;j<3;j++)
	{
		for(int k = 0;k<3;k++)
		{
			cout<<p[i][j][k]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

cout<<"ashish";


cout<<"New Method"<<endl;




   return 0;
}


