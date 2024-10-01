/*
CH-230-A
a5 p11.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

// Function to check if a number is prime
int is_Prime(int n, int divisor) {
    // Is the number less than or equal to 1.
    if (n <= 1) {
        // If yes, it isn't prime.
        return 0; 
    }
    if (divisor == 1) {
        return 1; // 2 is prime, so return 1.
    }
    // Number is not prime if divisible by a number other than 1 or itself.
    if (n % divisor == 0) {
        return 0;
    }
    // Try the next divisor.
    return is_Prime(n, divisor - 1); 
}

int main() {
    // Create the two variables.
    int x, result;
    // Scan for value of x.
    scanf("%d", &x);

    // Store function return in Result variable.
    // Function is being called with the parameter divisor being set to x-1.
    result = is_Prime(x, x - 1);

    if (result == 1) {
        printf("%d is prime\n", x);
    } else {
        printf("%d is not prime\n", x);
    }

    return 0;
}
