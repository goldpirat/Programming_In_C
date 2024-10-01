/*
CH-230-A
a6 p5.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

// Macro to check the least significant bit (LSB) of a number
#define BINARY(x) x & 1

// Function to count the number of bits in a binary representation
unsigned int counting(unsigned int num) {
    unsigned int counter = 0;
    while (num) {
        counter++;
        num >>= 1; // Right shift to check each bit
    }
    return counter;
}

int main() {
    // Create an unsigned char variable c and read its value from the input.
    unsigned char c;
    scanf("%c", &c);

    // Print the decimal representation of the character.
    printf("The decimal representation is: %d\n", c);

    // Create the reverse variable to be used further down.
    int reverse;

    printf("The backwards binary representation is: ");
    // Loop to print the binary representation in reverse order.
    for (int i = 0; i < counting(c); i++) {
        reverse = c >> i; 
        //Print Least Significant Bit.
        printf("%d", BINARY(reverse)); 
    }
    printf("\n");

    return 0;
}
