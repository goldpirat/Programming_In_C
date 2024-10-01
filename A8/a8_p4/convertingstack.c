/*
CH-230-A
a8 p4.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
 
int main () {
 
    Stack s;
    s.count = 0;
 
    unsigned int elem;
    scanf ("%d", &elem);
 
    convert (&s, elem);
    printf ("The binary representation of %d is ", elem);
 
    while (s.count > 0) {
        printf ("%d", pop (&s));
    }
    printf (".\n");
 
    return 0;
 
}