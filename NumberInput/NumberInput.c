// NumberInput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main() {
    int usf, euf;
    printf("Enter US Floor\n");
	scanf("%d", &usf);
    euf = usf - 1;
	printf("EU Floor is %d\n", euf);
}

/* you have to institute variables after main is declared */
/* scan detects input and with the use of %d instituted the input into usf */
/* & is the address-of operator, which provides the memory address of the variable usf ( where it is at)*/

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
