// get_line get.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int main() /* find longest line*/
{
	int len; /* current line length */
	int max; /* maximum length seen so far */
	char line[MAXLINE]; /* current input line */
	char save[MAXLINE]; /* longest line, saved */

	max = 0;
	while ((len = get_line(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(line, save);
		}
	if (max > 0) /* there was a line */
		printf("%s", save);
}

get_line(s, lim) /* get line into s, return length */
char s[];
int lim;
{
	int c, i;
	
	for (i=0; i<lim-1 && (c = getchar())!= EOF && c !='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

copy(s1, s2) /* copy s1 to s2; assume s2 big enough */
char s1[], s2[];
{
	int i;

	i = 0;
	while ((s2[i] = s1[i]) != '\0')
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
