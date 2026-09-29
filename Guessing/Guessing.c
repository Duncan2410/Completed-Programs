// Guessing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int guess;
	while (scanf("%d", &guess) != EOF) {
		if (guess == 42) {
			printf("Nice work!\n");
			break;
		}
		else if (guess < 42)
			printf("Too low - guess again\n");
		else
			printf("Too high - guess again\n");
	}
}

/* you could use braces ({}) to group the else and else if statements but you don't need to */ 
/* the first if contains the block with the braces but the else if contains both the next if and else in the block */

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
