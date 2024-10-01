/*
CH-230-A
a8 p4.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
 
// Function definitions
 
// This function is to push an element into the stack
void push (int elem, Stack *s) {
    s -> array[s -> count++] = elem;
}
 
// This function is to pop an element out of the stack
int pop (Stack *s) {
    int elem;
    elem = s -> array[(s -> count) - 1];
    s -> array[s -> count - 1] = 0;
    (s -> count)--;
 
    return elem;
}
 
// This function is to check if the stack is empty 
int isEmpty (Stack *s) {
    return s -> count == 0;
}
 
// This function is to empty the stack
void empty (Stack *s) {
    printf ("Emptying Stack ");
 
    while (!isEmpty(s)) {
        printf("%d ", pop(s));
    }
    printf("\n");
}
 
// This function is to convert a number into the binary representation
void convert (Stack *s, unsigned int elem) {
 
    // Array for storing the binary number
    unsigned int binary[1000];
 
    int i = 0;
    while (elem > 0) {
 
 
        binary[i] = elem % 2;
        push (binary[i], s);
        elem = elem / 2;
        i++;
    }
}