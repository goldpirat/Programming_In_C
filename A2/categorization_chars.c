/*
CH-230-A
a2 p9.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <ctype.h>
/* 
We 'include' <ctype.h> because it has functions
that will be used in the code.
*/

int main() {
    // We create the char variable 'character'.
    char character;

    //We use scanf to read the character from the keyboard.
    scanf("%c", &character);

    /*
    To make this code work we need to use if, elsee if, and else 
    in a specific manner to compare the character in order to find
    out in which category it belongs. 
    */

    /*
    'isdigit' function is used to check whether 
    a character is a digit. We are able to use this function
    because we imported <ctype.h> in the beginning.
    */
   
    /*
    'isalpha' function is used to check whether a character is 
    an alphabet letter. We are able to use this function
    because we imported <ctype.h> in the beginning.
    */
    if (isdigit(character)) {
        printf("%c is a digit\n", character);
    }
    else if (isalpha(character)) {
        printf("%c is a letter\n", character);
    }
   
    else {
        printf("%c is some other symbol\n", character);
    }
    // If it isnt't a digit or a letter, it is some other symbol.

    return 0;
}
