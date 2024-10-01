/*
CH-230-A
a1 p3.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h> // We add the "#" because without it the code does not function.

int main() {
    float result; // The result of the division
    int a = 5;
    float b = 13.5; // Changed from 'int' to 'float' for 'b'

    result = a / b;
    printf("The result is %f\n", result); // We use '%f' for float

    return 0; 
}
