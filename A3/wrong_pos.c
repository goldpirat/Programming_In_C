/*
CH-230-A
a3 p4.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

int position(char str[], char c) {
    int idx;

    /*
    Fixed the loop so that it gives the index when it runs into g
    and made it so that it returns -1 when no instance of g is found
    anywhere in the code. 
    */
    for (idx = 0; str[idx] != '\0'; ++idx) {
        if (str[idx] == c) {
            return idx;  
            // If g is found then return its index.
        }
    }

    // If 'g' not found return -1
    return -1;
}

int main() {
    char line[80];
    /* While true loop is created to work until 
    it is broken which happens when the g is found.
    */
    while (1) {
        // Asks the user for an input ans gets the input.
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        
        // We call position function to find the first occurrence of 'g'.
        int pos = position(line, 'g');

        if (pos != -1) {
            /*
            If it is found it prints the first occurance of g
            and then breaks the while loop, thus ending the code.
            */
            printf("The first occurrence of 'g' is: %d\n", pos);
             break;
        } else {
            /*If it is not fount it prints that it was not found
            and it waits for an input to be written again.*/
            printf("'g' was not found in the string.\n");
        }
    }

    return 0;
}