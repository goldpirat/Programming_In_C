/*
CH-230-A
a2 p6.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

int main() {
    // Create both double variables at once for convenience.
    double x, y;

    // Asks for an input for 'x'.
    printf("Enter value of 'x': ");
    // Reads 'x' value from the keyboard.
    scanf("%lf", &x);
    
    // Asks for an input for 'y'.
    printf("Enter value of 'y': ");
    // Reads 'y' value from the keyboard.
    scanf("%lf", &y);

    // Create 3 'double' pointers.
    double *ptr_one = &x;
    double *ptr_two = &x;
    // We set the above mentioned pointers 1 and 2 to the same variable 'x'.
    double *ptr_three = &y;
    // We set the above mentioned pointer 3 to the variable 'y'.

    // Print memory addresses for the pointers.
    printf("memory address of ptr_one: %p\n", (void*)ptr_one);
    printf("memory address of ptr_two: %p\n", (void*)ptr_two);
    //The two printf above will have the same output.
    printf("memory address of ptr_three: %p\n", (void*)ptr_three);
    // We use (void*) to fit the expected argument type.

    return 0;
}
