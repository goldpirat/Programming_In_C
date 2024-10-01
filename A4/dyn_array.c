/*
CH-230-A
a4 p9.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Function for the product of min and max elements
int prodminmax(int arr[], int n) {
    if (n <= 0) {
        //If the array is empty or contains no elements, print:
        printf("Array is empty.\n");
        return 0;
    }

    int min = arr[0];
    int max = arr[0];

    // Find the minimum and the maximum 
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Return the product of min and max
    return min * max;
}

int main() {
    // Create the n variable and read its value from the keyboard.
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // n cannot be less than 1.
    if (n <= 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Allocate dynamic memory for the array
    int* arr = (int*)malloc(n * sizeof(int));

    printf("Enter %d integer(s):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the above-defineed function.
    int result = prodminmax(arr, n);

    printf("Product of the smallest and largest is %d\n", result);

    // Free up the dynamic memory
    free(arr);

    return 0;
}