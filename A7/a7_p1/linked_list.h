/*
CH-230-A
a7 p1.h
Flori Kusari
fkusari@jacobs-university.de
*/

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// Define a structure for a node in the linked list
struct list {
    int info;
    struct list* next;
};

struct list* push_front(struct list* my_list, int value);
struct list* push_back(struct list* my_list, int value);
struct list* remove_first(struct list* my_list);
void print_list(struct list* my_list);
void dispose_list(struct list* my_list);

#endif