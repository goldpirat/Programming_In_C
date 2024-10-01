/*
CH-230-A
a2 p5.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

int main() {
    // We create the int variable 'a'.
    int a;

    // Read the input for integer variable "a".
    printf("Enter an integer value for 'a': ");
    scanf("%d", &a);

    // Print the "Original" value of 'a'.
    printf("Original value of 'a': %d\n", a);
    // Print the "Original" adress of 'a'.
    printf("Address of 'a': %p\n", (void*)&a);
    // We use (void*) to fit the expected argument type.

    // We create the pointer ptr_a to 'a'
    int *ptr_a = &a;

    // Increase the value of 'a' by 5 using the "+=" operator.
    *ptr_a += 5;

    // Print the "Modified" value of 'a'
    printf("Modified value of 'a': %d\n", a);
    // Print the "Modified" address of 'a'
    printf("Address of 'a': %p\n", (void*)&a);
    // We use (void*) to fit the expected argument type.
    
    return 0;
}
