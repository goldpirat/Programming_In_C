/*
CH-230-A
a4 p6.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Function to find the two greatest values in an array.
void find_two_greatest(int arr[], int n) {
    // Initialize variable first_max and second_max.
    int first_max = arr[0];
    int second_max = arr[0];

    // Loop that iterates through the array to find the greatest values.
    for (int i = 1; i < n; i++) {
        if (arr[i] > first_max) {
            /*
            / If the current element is greater than first_max, 
            the update second_max and then update first_max.
            */
            second_max = first_max;
            first_max = arr[i];
        } else if (arr[i] > second_max && arr[i] != first_max) {
            /*
            If the current element is greater than second_max but not equal 
            to first_max, update second_max.
            */
            second_max = arr[i];
        }
    }
    //Print the result.
    printf("Two greatest values: %d and %d\n", first_max, second_max);
}

int main() {
    int n;

    // Save the input to n for the nr. of elements in the array.
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // It needs at least two elements for the code to work
    if (n <= 1) {
        printf("At least two elements are required.\n");
        return 1;
    }

    // Allocate memory for an array of integers.
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Read n integers from the user and store them in the array.
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the above-defineed function.
    find_two_greatest(arr, n);

    // Release allocated memory.
    free(arr);

    return 0;
}
