/*
CH-230-A
a6 p7.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

// The macro to get the least significant bit(LSB)
#define BINARY(x) x & 1

// Function to set three bits in an unsigned char
void set3bits(unsigned char *ch, int a, int b, int c) {
    // Set the bits at positions a, b, and c to 1 using bitwise OR
    *ch |= 1 << a;
    *ch |= 1 << b;
    *ch |= 1 << c;
}

int main() {
    // Create the unsigned char variable c and read its value from the input.
    unsigned char c;
    scanf("%c", &c);

    // Positions of bits that will change to 1
    int bit1;
    scanf("%d", &bit1);
    int bit2;
    scanf("%d", &bit2);
    int bit3;
    scanf("%d", &bit3);

    // Print the decimal representation of the character
    printf("The decimal representation is: %d\n", c);

    // Variable to be used in the for loop below.
    int n;

    // Print the binary representation of the character
    printf("The binary representation is: ");
    for (int i = 7; i >= 0; --i) {
        n = c >> i;
        printf("%d", BINARY(n));
    }
    printf("\n");

    // Call the function defined above.
    set3bits(&c, bit1, bit2, bit3);

    // Print the binary representation after setting the bits
    printf("After setting the bits: ");
    for (int i = 7; i >= 0; --i) {
        n = c >> i;
        printf("%d", BINARY(n));
    }
    printf("\n");

    return 0;
}
