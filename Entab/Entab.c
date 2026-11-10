#include <stdio.h>

#define TAB_STOP	    8 /* Number of columns to reach a tab stop 3 then number of spaces */

int main(void) {

	unsigned int num_tabs = 0;/* Number of tabs read so far and unsigned int means it's a positive integer */

	int c;

	/* Read the input */
	while ((c = getchar()) != EOF) { /* while repeats directive until EndOfFile is encountered */

		if (c == ' ') { //if 0 spaces no tab else if spaces 8 put another tab and else put tab.
			num_tabs++;
			if (num_tabs == TAB_STOP) {
				putchar('\t'); /* output the tab character */
				num_tabs = 0; /* reset the number of tabs to 0 */
			}
			else {
				putchar(' '); /* output the space character */
			}
		}
		else if (c == '\n') {
					putchar('\n'); /* output the characters */
					num_tabs = 0; /* reset the number of tabs to 0 */
		}
			else {
				putchar(c);
				num_tabs++;
			}
	}

	return 0;
}
/* detab replaces tabs with spaces where as entab is the opposite*/
