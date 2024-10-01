/*
CH-230-A
a1 p6.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

int main() {
    char c = 'F';
    //First we create the char variable c and store 'F' in it.
    char nextLetter = c + 3;
    //We create a new char variable to calculate the third letter after 'F'.
    int ASCIICode = c + 3;
    /* We create an int variable to calculate and store the ASCII Code of the third letter after 'F' 
    which is the letter 'I'*/
    printf("Third character after 'F' is: %c\n", nextLetter);
    //This prints out the third letter after 'F' which is 'I'.
    printf("ASCII code: %d\n", ASCIICode);
    //This prints out the ASCII Code of the letter 'I' which is 73

    return 0;
}