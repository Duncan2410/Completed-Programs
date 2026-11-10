// detab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

#define TAB_STOP	    8 /* Number of columns to reach a tab stop 3 then number of spaces */

int main(void) {

	unsigned int num_spaces = 0;/* Number of spaces read so far and unsigned int means it's a positive integer */

	int c;

	/* Read the input */
	while ((c = getchar()) != EOF) { /* while repeats directive until EndOfFile is encountered */

		if (c == '\t') {
			/* If there are spaces to be printed, calculate the number of spaces to print to reach the next tab stop. */
			int n_spaces = TAB_STOP - (num_spaces % TAB_STOP)/* % is divide */;
			for (int i = 0; i < n_spaces; i++)
				putchar(' '); /* The program enters this section when it encounters a non-space character after a series of spaces. So it stops counting and prints the appropriate number of spaces to reach the next tab stop. */
			num_spaces += n_spaces; /* Update the number of spaces read so far */
			 
		}
		else if (c == '\n') {
					putchar('\n'); /* output the characters */
					num_spaces = 0; /* reset the number of spaces to 0 */
		}
			else {
				putchar(c);
				num_spaces++;
			}
	}

	return 0;
}
/* detab replaces tabs with spaces where as entab is the opposite*/

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
