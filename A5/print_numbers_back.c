/*
CH-230-A
a5 p10.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

// Function to print numbers from n to 1 recursively.
void printNumbers(int n) {
    if (n == 0) {
        return ;
        //This ends the function when n == 0.
    }
    printf("%d\n", n);
    // Recursive call with n-1
    printNumbers(n - 1);
    // This makes the code repeat as long as n is not 0.
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    printf("Countdown from %d:\n", n);
    printNumbers(n);

    return 0;
}