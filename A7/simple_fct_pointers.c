/*
CH-230-A
a7 p4.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// Function to convert the string to uppercase
char* toUpperC(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}

// Function to convert the string to lowercase
char* toLowerC(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

// Function to reverse the case of characters in the string
char* reverseCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

// Function to exit the program
void exitProgram() {
    exit(0);
}

int main() {
    int command; // Command to be read
    char inputString[100]; // Input string
    char tempString[100];
    
    // Read the input string
    fgets(inputString, sizeof(inputString), stdin);
    
    // Remove the newline character if present
    for (int i = 0; inputString[i] != '\0'; i++) {
        if (inputString[i] == '\n') {
            inputString[i] = '\0';
        }
    }
    
    // Create a temporary copy of the input string
    strcpy(tempString, inputString);
    
    // Function pointer array
    char* (*functions[])(char[]) = {toUpperC, toLowerC, reverseCase, NULL};
    
    while (1) {
        scanf("%d", &command);
        
        if (command == 4) {
            exitProgram();
        } else if (functions[command - 1]) {
            strcpy(inputString, tempString);
            printf("%s\n", functions[command - 1](inputString));
        }
    }
    
    return 0;
}
