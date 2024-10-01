/*
CH-230-A
a5 p7.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Declare two strings
    char first_String[100];
    char second_String[100];
    
    // Get the two inputs from User-Input.
    fgets(first_String, sizeof(first_String), stdin);
    fgets(second_String, sizeof(second_String), stdin);

    // Remove the newline character from both.
    first_String[strcspn(first_String, "\n")] = '\0'; 
    second_String[strcspn(second_String, "\n")] = '\0'; 

    /*
    Declare Variables to store the length of both strings.
    Calculate the sum of their lengths and store it in a new variable.
    */
    int firstLength = strlen(first_String);
    int secondLength = strlen(second_String);
    int sumLength = firstLength + secondLength;

    // Allocate memory for the concatenated string
    char *concatenatedString = (char *)malloc((sumLength + 1) * sizeof(char));

    // Check if memory allocation was successful
    if (concatenatedString == NULL) {
        // If it wasn't this is printed so it is known why the program failed.
        printf("Memory allocation failed.");
        return 1;
    }

    // Copy the two stings into concatenated string and print the value.
    strcpy(concatenatedString, first_String);
    strcat(concatenatedString, second_String);
    printf("Result of concatenation: %s\n", concatenatedString);

    // Free memory
    free(concatenatedString);

    return 0;
}
