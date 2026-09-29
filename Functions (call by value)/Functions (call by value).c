// Functions (call by value).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main() {
    int mymult();
    int retval;

    retval = mymult(6, 7);
    printf("Answer: %d\n", retval);
}

int mymult(a, b)
int a, b;
{
    int c = a * b;
    return c;
}

/* int a,b; is the type of parameter not the type of variables in the function */
/* in c programming a and b and c are numbers that you have to tell what to be */
/* if you put a number like 6.0 in for a the program will blow up or have a very unexpected result*/
/* any variable you declare inside of a function exists only inside that function */

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
