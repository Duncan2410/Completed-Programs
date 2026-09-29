// Character Sets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main() {
    printf("%c %d\n", 'A', 'A');
}

/* the C char type is just a number - character representations depend on the character set */
/* Modern characters including (smileys, emojis) are represented in multi-byte sequencesusing Unicode and UTF-8 - but in 1978 we used ASCII and other character sets*/
/* char in C is 8-bits long and can go from 0-255 which was the backround range (white to black) for javascript */
/* ASCII chart explains the items and is similar to a keyboard*/
/* the ASCII chart shows the ord function of A*/
/* emojis are not supported because they are 32-bit characters */
/* anytime you see a characterin single qoutes, think of it as a number*/
/* ASCII stands for American Standard Code for Information Interchange */

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
