// ReadAFile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char line[10];
    FILE* hand;
	hand = fopen("TextFile1.txt", "r");
    while( fgets(line, 10, hand) != NULL) {
        printf("%s", line);
    }
    fclose(hand);
    return 0;
}

/* int declares the type of method*/
/* lines number being 10 means it will read up to 9 characters plus the null terminator which is 10 lines into terminal*/

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
