/*
CH-230-A
a7 p6.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

// Define the structure for a person
struct person {
    char name[30];
    int age;
};

// Function to swap two persons
void swap(struct person *a, struct person *b) {
    struct person temp = *a;
    *a = *b;
    *b = temp;
}

/* Function to perform the bubble sort based 
on the criteria specified by the function pointer*/
void bubbleSort(struct person *arr, int n, 
                int (*cmp)(struct person, struct person)) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (cmp(arr[j], arr[j + 1])) {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}

// Function to compare two persons based on age and name
int compareAge(struct person a, struct person b) {
    if (a.age == b.age) {
        return strcmp(a.name, b.name) > 0;
    }
    return a.age > b.age;
}

// Function to compare two persons based on name and age
int compareName(struct person a, struct person b) {
    if (strcmp(a.name, b.name) == 0) {
        return a.age > b.age;
    }
    return strcmp(a.name, b.name) > 0;
}

int main() {
    int n; // Number of persons
    scanf("%d", &n);

    struct person people[n];

    for (int i = 0; i < n; i++) {
        // Read name and age for each person
        scanf("%s", people[i].name);
        scanf("%d", &people[i].age);
    }

    // Sort based on age and name
    bubbleSort(people, n, compareAge);
    for (int i = 0; i < n; i++) {
        printf("{%s, %d}; ", people[i].name, people[i].age);
    }
    printf("\n");

    // Sort based on name and age
    bubbleSort(people, n, compareName);
    for (int i = 0; i < n; i++) {
        printf("{%s, %d}; ", people[i].name, people[i].age);
    }
    printf("\n");

    return 0;
}
