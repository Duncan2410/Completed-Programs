// Character Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main() {
    char x[10];
    int i;
    for(i=0; i<1000; i++ ) x[i] = '*';
    printf("%s\n", x);
}
/* if you add characters beyond the array bounds it will blow up*/
/* why you don't use see often to write programs*/

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
