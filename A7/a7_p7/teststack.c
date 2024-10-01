/*
CH-230-A
a7 p7.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {
    Stack s;
    s.count = 0;
    char char1;
    int elem;
    int x = 1;

    while (((char1 = getchar()) != EOF) && (x == 1)) {
        switch (char1) {
            case 's':
                // Push an element into the stack
                if (s.count < 12) {
                    scanf("%d", &elem);
                    getchar();
                    push(elem, &s);
                    printf("Pushing %d\n", elem);
                } else {
                    printf("Pushing Stack Overflow\n");
                }
                break;
            case 'p':
                // Pop an element from the stack
                if (s.count > 0) {
                    printf("Popping %d\n", pop(&s));
                } else {
                    printf("Popping Stack Underflow\n");
                }
                break;
            case 'e':
                // Empty the stack
                empty(&s);
                break;
            case 'q':
                // Quit the execution of the program
                printf("Quit\n");
                x = 0;
                break;
        }
    }

    return 0;
}