// Assaingment Creating a reverse string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main() {
    char x[] = "12345";
    printf("%s\n", x);
    int i;
    for (i = 4; i >= 0; i--) {
        printf("%c", x[i]);
    }
    printf("\n");
}

/* Ask Mr.Steele about if this is what should be written */
/* Anything put into double quotes is  a character string or string constant */

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
