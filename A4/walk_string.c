/*
CH-230-A
a4 p11.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Function to count the occurrences of the specific characters.
int count_insensitive(char *str, char c) {
    int count = 0;

    // Convert the character c to lowercase
    char lowercase_c = tolower(c);

    // Iterate through each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Convert the current character to lowercase
        char lowercase_str_char = tolower(str[i]);
        
        // Check if the current character matches the lowercase character c
        if (lowercase_str_char == lowercase_c) {
            count++;
        }
    }

    return count;
}

int main() {
    // Dynamically allocate memory for the input
    char *input = (char *)malloc(51 * sizeof(char));
    
    if (input == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    // Read the input string from the keyboard
    printf("Enter a string (max 50 characters):\n");
    fgets(input, 51, stdin);

    // Allocate memory for a new string of the correct size
    char *new_string = (char *)malloc((strlen(input) + 1) * sizeof(char));
    
    if (new_string == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        free(input);
        return 1;
    }

    // Copy the original string
    strcpy(new_string, input);

    // Free the memory occupied by the first string
    free(input);

    // Characters to count
    char chars[] = {'b', 'H', '8', 'u', '$'};

    // Iterate through the characters and count their occurrences
    for (int i = 0; i < sizeof(chars) / sizeof(char); i++) {
        int char_count = count_insensitive(new_string, chars[i]);
        printf("The character '%c' occurs %d times.\n", chars[i], char_count);
    }

    // Free the memory
    free(new_string);

    return 0;
}
