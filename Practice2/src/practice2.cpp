//============================================================================
// Name        : practice2.cpp
// Author      : Ashish
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;
int minsteps(int n){
    int sum=0;
    if(n==1||n==0){
        return 1;
    }
    else{
        for(int k=1;k<=n;k++){
        	sum+=minsteps(k-1)*minsteps(n-k);

        }
    }
    return sum;
}

void printSubStr( char* str, int low, int high )
{
    for( int i = low; i <= high; ++i )
        printf("%c", str[i]);
}

int longestPalSubstr( char *str )
{
    int n = strlen( str ); // get length of input string

    // table[i][j] will be false if substring str[i..j]
    // is not palindrome.
    // Else table[i][j] will be true
    bool table[n][n];
    memset(table, 0, sizeof(table));

    // All substrings of length 1 are palindromes
    int maxLength = 1;
    for (int i = 0; i < n; ++i)
        table[i][i] = true;

    // check for sub-string of length 2.
    int start = 0;
    for (int i = 0; i < n-1; ++i)
    {
        if (str[i] == str[i+1])
        {
            table[i][i+1] = true;
            start = i;
            maxLength = 2;
        }
    }

    // Check for lengths greater than 2. k is length
    // of substring
    for (int k = 3; k <= n; ++k)
    {
        // Fix the starting index
        for (int i = 0; i < n-k+1 ; ++i)
        {
            // Get the ending index of substring from
            // starting index i and length k
            int j = i + k - 1;

            // checking for sub-string from ith index to
            // jth index iff str[i+1] to str[j-1] is a
            // palindrome
            if (table[i+1][j-1] && str[i] == str[j])
            {
                table[i][j] = 2+table[i+1][j-1];

                if (k > maxLength)
                {
                    start = i;
                    maxLength = k;
                }
}
		}
	}

	printf("Longest palindrome substring is: ");
	printSubStr( str, start, start + maxLength - 1 );

	return maxLength; // return length of LPS
}

int main()
{
	char str[] = "forgeeksskeegfor";
	printf("\nLength is: %d\n", longestPalSubstr( str ) );
	return 0;
}
