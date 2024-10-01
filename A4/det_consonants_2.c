/*
CH-230-A
a4 p5.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <stdbool.h>

// Function to count consonants in a string
int count_consonants(char str[]) {
    int count = 0;
    
    // Initialize a pointer to the start of the string
    char *ptr = str;

    while (*ptr != '\0') {
        char c = *ptr;
        if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) && 
            (c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U' &&
             c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')) {
            // Check if the character is an alphabet letter and not a vowel.
            count++;
        }
        ptr++; // Move the pointer to the next character
    }
    
    return count;
}

int main() {
    char input[100];
    
    while (true) {
        // Get what is input and store it
        fgets(input, sizeof(input), stdin);
        
        if (input[0] == '\n') {
            break; // If sting is empty "BREAK".
        }
        
        // Call the function and store the returned value.
        int consonant_count = count_consonants(input);
        // Print the result.
        printf("Number of consonants=%d\n", consonant_count);
    }

    return 0;
}
