/*
CH-230-A
a7 p5.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Function to put the numbers in ascending order
int ascending(const void *x, const void *y) {
    const int *n1 = (const int *)x;
    const int *n2 = (const int *)y;

    if (*n1 < *n2) {
        return -1;
    } else if (*n1 > *n2) {
        return 1;
    } else {
        return 0;
    }
}

// Function to put the numbers in descending order
int descending(const void *x, const void *y) {
    const int *n1 = (const int *)x;
    const int *n2 = (const int *)y;

    if (*n1 > *n2) {
        return -1;
    } else if (*n1 < *n2) {
        return 1;
    } else {
        return 0;
    }
}

// Function pointer
int (*fun)(const void *x, const void *y);

// Function to print the sorted elements
void sorted(int *array, int n, int (*fun)(const void *x, const void *y)) {
    int k;
    qsort(array, n, sizeof(array[0]), fun);
    for (k = 0; k < n; k++) {
        printf("%d ", array[k]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    int array[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    while (1) {
        char ch;
        scanf(" %c", &ch); // Added space to skip whitespace (newline)

        switch (ch) {
            case 'a':
                sorted(array, n, ascending);
                break;
            case 'd':
                sorted(array, n, descending);
                break;
            case 'e':
                exit(1);
                break;
        }
    }

    return 0;
}
