/*
CH-230-A
a4 p2.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main(){
    // Create a char variable.
    char input[50];
    // Read a string.
    fgets(input, sizeof(input), stdin);
    int string_length = strlen(input);

    // Iterate through the characters.
    for (int i = 0; i < string_length -1; i++) {
        if(i % 2 != 0) {
            // Print a space character if remainder is not 0.
            printf(" ");
        }
        // Print the character on a new line.
        printf("%c\n", input[i]);
    }
    return 0;
}