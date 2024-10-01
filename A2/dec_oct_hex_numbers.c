/*
CH-230-A
a2 p2.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

int main() {
    char character;

    // Read a character from the keyboard
    scanf(" %c", &character);

    /* Get the decimal, octal, and hexadecimal of the character. We do this
    easily with the decimal as you can see in the following code, However,
    with the octal and hexadecimal we use unsigned int so that it gives
    the correct output and not an error.*/
    int decimal = (int)character;
    unsigned int octal = (unsigned int)character;
    unsigned int hexadecimal = (unsigned int)character;

    // Print the results for each required output.
    printf("character=%c\n", character);
    printf("decimal=%d\n", decimal);
    printf("octal=%o\n", octal);
    printf("hexadecimal=%x\n", hexadecimal);

    return 0;
}