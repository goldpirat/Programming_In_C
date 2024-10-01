/*
CH-230-A
a4 p3.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

#define MAX_SIZE 15

// Function to compute the geometric mean
float geometric_mean(float arr[], int num) {
    float product = 1.0;
    
    // Calculate the product of all elements in the array
    for (int i = 0; i < num; i++) {
        product *= arr[i];
    }
    
    // Calculate and return the geometric mean
    return pow(product, 1.0 / num);
}

// Function to find the highest number
float find_highest(float arr[], int num) {
    float highest = arr[0];
    
    // Loop through the array for highest number
    for (int i = 1; i < num; i++) {
        if (arr[i] > highest) {
            highest = arr[i];
        }
    }
    
    return highest;
}

// Function to find the lowest/smallest number
float find_lowest(float arr[], int num) {
    float lowest = arr[0];
    
    // Loop through the array for lowest number
    for (int i = 1; i < num; i++) {
        if (arr[i] < lowest) {
            lowest = arr[i];
        }
    }
    
    return lowest;
}

// Function to calculate the sum of elements
float calculate_sum(float arr[], int num) {
    float sum = 0.0;
    
    //Calculates the sum
    for (int i = 0; i < num; i++) {
        sum += arr[i];
    }
    
    return sum;
}

int main() {
    float arr[MAX_SIZE];
    int num = 0;
    char option;

    printf("Enter up to 15 floats. Enter negative value to end input.): \n");

    //reads floats until array has 15 or until negative number is read.
    while (num < MAX_SIZE) {
        scanf("%f", &arr[num]);
        if (arr[num] < 0) {
            break;
        }
        num++;
    }

    printf("Enter an operation to be executed(m, h, l, s): \n");
    scanf(" %c", &option);

    //Use switch case to select the needed function.
    // If the array is not empty or filled with invalid inputs
    // Then all of the cases will have a correct input.
    switch (option) {
        case 'm':
            if (num > 0) {
                float mean = geometric_mean(arr, num);
                printf("Geometric mean: %f\n", mean);
            } else {
                printf("Array is empty.\n");
            }
            break;
        case 'h':
            if (num > 0) {
                float highest = find_highest(arr, num);
                printf("Highest number: %f\n", highest);
            } else {
                printf("Array is empty.\n");
            }
            break;
        case 'l':
            if (num > 0) {
                float lowest = find_lowest(arr, num);
                printf("Smallest number: %f\n", lowest);
            } else {
                printf("Array is empty.\n");
            }
            break;
        case 's':
            if (num > 0) {
                float sum = calculate_sum(arr, num);
                printf("Sum of elements: %f\n", sum);
            } else {
                printf("Array is empty.\n");
            }
            break;
        default:
            printf("Invalid option.\n");
            break;
    }

    //End of Code.
    return 0;
}
