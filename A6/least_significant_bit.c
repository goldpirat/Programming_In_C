/*
CH-230-A
a6 p2.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

// The macro for the least significant bit 
#define DETERMINE(c) c & 1
 
int main () {
    //Create unsigned char variable c and read its value from input.
    unsigned char c;
    scanf ("%c", &c);
 
    // Print using "%d" to print the decimal representation.
    printf ("The decimal representation is: %d\n", c);
    printf("The least significant bit is: %d\n", DETERMINE(c));
 
    return 0;
}