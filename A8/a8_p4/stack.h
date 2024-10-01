/*
CH-230-A
a8 p4.h
Flori Kusari
fkusari@jacobs-university.de
*/

#ifndef STACK_H
#define STACK_H
 
 
typedef struct stack {
   unsigned int count;
   int array[12];
} Stack;
 
void push (int, Stack*);
 
int pop (Stack*);
 
void empty (Stack*);
 
int isEmpty (Stack*);
 
void convert (Stack*, unsigned int);
 
#endif