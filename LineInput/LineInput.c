// LineInput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    char line[1000];
    printf("Enter line\n");
    scanf("%[^\n]1000s", line);
    /* fgets(line, 1000, stdin); also works for this code */
    printf("Line: %s\n", line);
}

/* tools for things like Zork*/
/* in c there are 3 basic files being: standard input stdin read through up to eof, standard output stdout where printf is used, and standard error stderr*/
/* %[^\n]1000s means read a string until a newline character is encountered but stop at 1000 characters*/

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
