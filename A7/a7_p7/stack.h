/*
CH-230-A
a7 p7.h
Flori Kusari
fkusari@jacobs-university.de
*/

#ifndef STACK_H
#define STACK_H
 
// Define the structure for the stack
typedef struct stack {
    unsigned int count; 
    int array[12];
} Stack;

// Function declarations for stack operations
void push(int, Stack*);
int pop(Stack*);
void empty(Stack*);
int isEmpty(Stack*);
 
#endif