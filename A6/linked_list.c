/*
CH-230-A
a6 p8.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct list {
    int info;
    struct list* next; // self reference
};

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

int main() {
    struct list* the_list = NULL; //Set to NULL at first.
    char char1;
    int x = 1;

    do {
        scanf("%c", &char1);
        int i;
        int j;


        // Using required switch case.
        switch (char1) {
        case 'a':
            // Add the following number to the end of the list
            scanf("%d", &i);
            getchar();
            the_list = push_back(the_list, i);
            break;
        case 'b':
            // Add the following number at the beginning of the list
            scanf("%d", &j);
            getchar();
            the_list = push_front(the_list, j);
            break;
        case 'r':
            // Remove the first element from the list
            the_list = remove_first(the_list);
            break;
        case 'p':
            // Print the list
            print_list(the_list);
            break;
        case 'q':
            // Quit the execution of the program
            dispose_list(the_list);
            x = 0;
            break;
        }
    } while (x);

    return 0;
}
