/*
CH-230-A
a1 p4.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

int main() {
    int x = 17; // Creating "x"
    int y = 4; // Creating "y"
    int sum = x + y; // Creating a variable that is equal to their sum
    int product = x * y; // Creating a variable that is equal to their product
    int difference = x - y; // Creating a variable that is equal to their difference
    float division = (float)x / y; // Creating a variable that is equal to their division
    // we also use the (float) so that the division gives us the real number (4.25) and not just 4.0
    int remainder = x % y; // Creating a variable that shows the remainder after the numbers divide

    printf("x=%d\n", x); //Prints 'x'
    printf("y=%d\n", y); //Prints 'y'
    printf("sum=%d\n", sum); //Prints the result of their sum
    printf("product=%d\n", product); //Prints the result of their product
    printf("difference=%d\n", difference); //Prints the result of their difference
    printf("division=%.6f\n", division); //Prints the result of their division
    printf("remainder of division=%d\n", remainder); //Prints the remainder.

    return 0;      
}