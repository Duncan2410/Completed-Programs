// define and declare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size*/

char line[MAXLINE]; /* input line */
char save[MAXLINE]; /* longest line saved here */
int max; /* length of longest line seen so far*/

int main() /* find longest line; specialized version */
{
	int len; 
	extern int max;
	extern char save[];
	max = 0;
	while ((len = get_line()) > 0)
		if (len > max) {
			max = len;
			copy();
		}
	if (max > 0) /* there was a line */
		printf("%s", save);
}

get_line() /* specialized version */
{
	int c, i;
	extern char line[];

	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

copy() /* specialized version */
{
	int i;
	extern char line[], save[];

	i = 0;
	while ((save[i] = line[i]) != '\0')
		++i;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
