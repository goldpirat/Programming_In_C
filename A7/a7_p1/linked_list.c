/*
CH-230-A
a7 p1.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

// Element added at the beginning of the list
struct list* push_front(struct list* my_list, int value) {
    struct list* newel;
    newel = (struct list*)malloc(sizeof(struct list));

    // Check for memory allocation.
    if (newel == NULL) {
        printf("Error allocating memory\n");
        return my_list;
    }

    newel->info = value;
    newel->next = my_list;
    return newel;
}

// Element added at the end of the list
struct list* push_back(struct list* my_list, int value) {
    struct list* cursor, *newel;
    cursor = my_list;
    newel = (struct list*)malloc(sizeof(struct list));

    // Check for memory allocation.
    if (newel == NULL) {
        printf("Error allocating memory\n");
        return my_list;
    }

    newel->info = value;
    newel->next = NULL;

    if (my_list == NULL)
        return newel;

    while (cursor->next != NULL)
        cursor = cursor->next;
    cursor->next = newel;
    return my_list;
}

// First element removed
struct list* remove_first(struct list* my_list) {
    // If the list is empty, it does not remove any element
    if (my_list == NULL) {
        return my_list;
    }

    struct list* new_list;
    new_list = (my_list->next);
    free(my_list);
    my_list = new_list;
    return my_list;
}

// The list printed
void print_list(struct list* my_list) {
    struct list* p;
    for (p = my_list; p; p = p->next) {
        printf("%d ", p->info);
    }
    printf("\n");
}

// The execution is stopped
void dispose_list(struct list* my_list) {
    struct list* nextelem;
    while (my_list != NULL) {
        nextelem = my_list->next;
        free(my_list);
        my_list = nextelem;
    }
}