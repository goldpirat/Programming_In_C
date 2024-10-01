/*
CH-230-A
a6 p6.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

int main() {
    // Create the unsigned char variable.
    unsigned char c; 
    // Read the value from the input.
    scanf("%c", &c); 

    // Print the decimal representation using %d.
    printf("The decimal representation is: %d\n", c);

    // Print the binary representation in the desired method:
    printf("The binary representation is: ");
    
    // Iterate through each bit of the character (left to right).
    for (int i = 7; i >= 0; i--) {
        if (c & (1 << i)) { // Bit mask
            printf("1");
        } else {
            printf("0");
        }
    }
    
    printf("\n");

    return 0;
}
