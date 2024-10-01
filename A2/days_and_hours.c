/*
CH-230-A
a2 p10.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

/*
The only way I could think of solving this assignment was through
using the bool return type function which will return either 
'true' or 'false' and nothing else. I am unsure if we have 
learned this concept in class but I am familiar with it from 
previous experience in coding in C. In general, the isInteger 
function takes a string as an input and checks if it is a 
valid integer if not, it returns false.
*/

bool isInteger(const char* input) {
    int i = 0;

    // We check: Is the input empty?
    if (input[0] == '\0') {
        return false;
    }

    // If not, is it a negative? or does it contain '+'?
    if (input[i] == '-' || input[i] == '+') {
        i++;
    }

    // Checks for each character in the input and checks if it's a number.
    while (input[i] != '\0') {
        if (input[i] < '0' || input[i] > '9') {
            return false; 
        // If a non-digit character found the expression returns false.
        }
        i++;
    }

    return true; 
    //returns true if and ONLY if the input is an integer.
}

int main() {
    char input[100];
    int number;
    int i = 1;

    /*
    We use while(true) so that the loop keeps asking infinitely 
    for an integer if one is not provided. This loop will end
    if the input is an integer.
    */
    while (true) {
        printf("Enter a positive non-zero integer: ");
        if (fgets(input, sizeof(input), stdin)) {
            /* We need to remove the /n new line from the input so that
            we don't get an error.
            */
            if (input[strlen(input) - 1] == '\n') {
                input[strlen(input) - 1] = '\0';
            }

            if (isInteger(input)) {
                // We call 'isInteger' after defining it beforehand.
                sscanf(input, "%d", &number);
                if (number > 0) {
                    break; 
                    // If a valid integer is entered this breaks the loop.
                }
            }
            printf("Invalid input. Enter a positive non-zero integer.\n");
            /* If input is invalid, then the request is repeated until it
            is valid.*/
        }
    }
    /* 
    The following while loop prints the conversion table for the number 
    from 1 all the way to the number entered.
    */
    while (i <= number) {
        printf("%d day(s) = %d hour(s)\n", i, i * 24);
        i++;
    }

    return 0;
}
