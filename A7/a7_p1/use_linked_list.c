/*
CH-230-A
a7 p1.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include "linked_list.h"

int main() {
    struct list* the_list = NULL;
    char char1;
    int x = 1;

    do {
        scanf(" %c", &char1); 
        int i;
        int j;

        switch (char1) {
            case 'a':
                scanf("%d", &i);
                getchar();
                the_list = push_back(the_list, i);
                break;
            case 'b':
                scanf("%d", &j);
                getchar();
                the_list = push_front(the_list, j);
                break;
            case 'r':
                the_list = remove_first(the_list);
                break;
            case 'p':
                print_list(the_list);
                break;
            case 'q':
                dispose_list(the_list);
                x = 0;
                break;
        }
    } while (x);

    return 0;
}
