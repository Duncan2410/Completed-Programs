// String Length.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main(){
    char x[] = "Hello";
    int py_len();
    printf("%s %d\n",x, py_len(x));
}
int py_len(self)
    char self[];

{
    int i;
    for (i = 0; self[i]; i++);
    return i;
}

/* in C string "length" must be computed in a loop that scans for a zero character */
/* there the strlen() function in string.h computes string length */
/* in C there is an array and it has a zero position but to ask how log is it? you need to loop through all the characters looking for the zero marker */
/* In C you need a for loop to determin the length of the string */

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
