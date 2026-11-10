#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <assert.h>


#define CUT 10

int main(void) {

	int line = 0;

	char word[CUT+1];

	bool found_blank = false;

	int blank_index;

	int c;
	
	/* Read the input */
	while ((c = getchar()) != EOF) { 

        //if we encounter the end of the line, flush the
        //buffer and start a new line
        if (c == '\n')
        {
            word[line] = '\0';
            puts(word);
            line = 0;
            found_blank = false;
            continue;
        }

        //check if new character is blank and, if it is, then
        //remember the index
        if (isblank(c))
        {
            blank_index = line;
            found_blank = true;
        }

        //write new character into array
        word[line] = c;

        if (line == CUT - 1)
        {
            if (!found_blank)
            {
                //flush buffer
                word[CUT] = '\0';
                puts(word);

                //reset line
                line = 0;
                found_blank = false;
                continue;
            }
            else // found_blank == true
            {
                //remember character that is going to be overwritten
                char temp = word[blank_index + 1];

                //output everything up to and including the last blank
                word[blank_index + 1] = '\0';
                puts(word);

                //move unwritten characters to start of next line
                /* Question 3 in check in */
                line = CUT - 1 - blank_index;
                word[0] = temp;
                memmove(word + 1, word + blank_index + 2, line);

                found_blank = false;
                continue;
            }
        }

        line++;
    }

    //check stream for error
    if (ferror(stdin))
    {
        fputchar(stderr, "error reading input!\n");
        exit(EXIT_FAILURE);
    }

    //if we reach this, then we must have encountered
    //end-of-file
    assert(feof(stdin));

    //flush buffer
    word[line] = '\0';
    puts(word);
}