#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    //this memory buffer will hold the remembered
    //line contents
    char line[100];

    //current index
    int i = -1;

    //this will store the current character
    int c;

    int previous = 0;

	bool in_comment = false;
    //this loop will read one character per loop iteration
    while ((c = getchar()) != EOF)
    {
        if (in_comment) {
			if (previous == '*' && c == '/') {
				in_comment = false;
			}

            previous = c;
            continue;
        }

		if (previous == '/' && c == '*') {
			in_comment = true;
			previous = c;
			continue;
		}

        if (c == '{' || c == '(' || c == '[') {
			if (i == 99) {
				puts("Syntax Error: Line too long");
				i = 0;
				continue;
			}
            i++;
			line[i] = c;
        }
            else if (c == '}' || c == ')' || c == ']')
            {
					if (i == -1)
					{
						puts("Closing bracket without opening bracket.\n");
						break;
					}

                    if ((line[i] == '{' && c == '}') || (line[i] == '(' && c == ')') || (line[i] == '[' && c == ']'))
                    {

                        i--;
                    }
                    else 
                    {
                        puts("Syntax Error: Mismatched brackets or comments");
                        break;
                    }
            }

		previous = c;
    }

	if (in_comment) {
		puts("Syntax Error: Unclosed comment");
	}
}
