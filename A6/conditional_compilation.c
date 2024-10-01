/*
CH-230-A
a6 p4.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

// MACRO: Find the intermediate results
#define INTERMEDIATE(vector1, vector2, vector12, n) { \
    int i; \
    for (i = 0; i < n; i++) { \
        vector12[i] = (vector1[i] * vector2[i]); \
    } \
}

// MACRO: Find the scalar product
#define S_PRODUCT(vector1, vector2, sp, n) { \
    int i; \
    for (i = 0; i < n; i++) { \
        sp += (vector1[i] * vector2[i]); \
    } \
}

int main() {
    // Create the variable n and read its value from input.
    int n;
    scanf("%d", &n);

    int i;
    // Vector I
    int vector1[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &vector1[i]);
    }
    // Vector II
    int vector2[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &vector2[i]);
    }

    int vector12[n];

    // Conditional compilation.
    // If INTERMEDIATE is undefined, intermediate values will not be printed.
    // If it is defined it will print the intermediate values.
#ifdef INTERMEDIATE

    INTERMEDIATE(vector1, vector2, vector12, n);
    printf("The intermediate product values are:\n");

    for (i = 0; i < n; i++) {
        printf("%d\n", vector12[i]);
    }
#endif

    int sp = 0;

    // Calculate Scalar product.
    S_PRODUCT(vector1, vector2, sp, n);
    printf("The scalar product is: %d\n", sp);

    return 0;
}
