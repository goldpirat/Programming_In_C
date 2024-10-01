/*
CH-230-A
a5 p4.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Function that divides by elements of array by 5.
void divby5(float arr[], int n) {
    printf("Before:\n");
    for(int i = 0; i < n; i++) {
        printf("%.3f ", arr[i]);
    }
    printf("\n");

    printf("After:\n");
    for(int i = 0; i < n; i++) {
        printf("%.3f ", arr[i] / 5);
    }
    printf("\n");
}

int main () {
    // Create variable n
    int n;
    
    // Read the number of components from the user.
    printf("Enter number of elements for array: \n");
    scanf("%d", &n);

    // Allocate array.
    float *arr = (float *)malloc(n * sizeof(float));

    // Was memory allocation successful?
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        // If not print the above message.
        return 1;
    }

    // Get the elements for the array.
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    // Call the function above.
    divby5(arr, n);

    // Free the memory.
    free(arr);

    return 0;
}
