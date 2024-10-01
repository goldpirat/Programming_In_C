/*
CH-230-A
a1 p5.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

int main() {
    int x = 2138;
    // We create an x variable to hold the number 2138.
    float y = -52.358925;
    // We create a y float variable to hold the number -52.358925.
    char z = 'G';
    // We create a y character variable to hold the character 'G'.
    double u = 61.295339687;
    // We create a double variable to hold the number seen above.
    printf("x=%9d\n", x);
    /* We print the number using this expression %9d\n so that it prints it,
     over 9 places and not 4.*/
    printf("y=%11.5f\n", y);
    /* We print the number using this expression %11.5d\n so that it prints it,
     over 11 places and so that we set a precision of 5. */
    printf("z=%c\n", z);
    // Print the character z using %c\n.
    printf("u=%.7f\n", u);
    /* We print the variable 'u' using %.7f\n so that we cans et a precision of 7
     and print the double*/
    return 0;
}