/*
CH-230-A
a7 p3.h
Flori Kusari
fkusari@jacobs-university.de
*/

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// Structure definition for a linked list node
struct list {
    int info;
    struct list* next; // Self-reference to the next node
};

// Function to add an element at the beginning of the list
struct list* push_front(struct list *my_list, int value);

// Function to add an element at the end of the list
struct list* push_back(struct list* my_list, int value);

// Function to remove the first element from the list
struct list* remove_first(struct list *my_list);

// Function to print the elements of the list
void print_list(struct list* my_list);

// Function to dispose of the entire list and free memory
void dispose_list(struct list* my_list);

#endif
