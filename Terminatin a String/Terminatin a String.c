// Terminatin a String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main() {
    char x[6];
    x[0] = 'h';
	x[1] = 'e';
	x[2] = 'l';
	x[3] = 'l';
	x[4] = 'o';
	x[5] = '\0';
    printf("%s\n", x);

	x[2] = 'L';
	printf("%s\n", x);
	
	x[3] = '\0';
	printf("%s\n", x);
}

/* \0 stops the output for that string */
/* The size of a "string" stored in a C array is not the length of the array */
/* C uses a special character '\0' that *marks* the string end by convention */
/* Character arrays need to allocate an extra byte to store the line-end character */

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
