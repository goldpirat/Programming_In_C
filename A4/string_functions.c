/*
CH-230-A
a4 p12.c
Flori Kusari
fkusari@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

// Function to replace all character c with character e in the string.
void replaceAll(char *str, char c, char e) {
    int len = strlen(str);
    // Iterate through each character in the string.
    for (int i = 0; i < len; i++) {
        //if character is equal to 'c' replace with 'e'.
        if (str[i] == c) {
            str[i] = e;
        }
    }
}

int main() {
    // Array to store the input string (80 characters +'\0').
    char str[81]; 
    //Character to be replaced and the replacement character variables.
    char c;
    char e;

    //while true loop that repeats until broken by 'STOP'
    while (1) {
        printf("Enter a string (or 'stop' to exit): ");
        scanf("%80s", str);

        // If the input is "stop" , then BREAK.
        if (strcmp(str, "stop") == 0) {
            break;
        }

        // Get the character to be replaced and store it in c.
        printf("Enter the character to be replaced: ");
        scanf(" %c", &c);

        // get the replacing character  and store it in e.
        printf("Enter the replacing character: ");
        scanf(" %c", &e);

        // Print the information before replacement.
        printf("Character to be replaced: %c\n", c);
        printf("Replacing character: %c\n", e);
        printf("Original string: %s\n", str);

        // Call the above-defined function.
        replaceAll(str, c, e);


        //Print the after replacement information/modified string.
        printf("Modified string: %s\n", str);
    }

    return 0;
}