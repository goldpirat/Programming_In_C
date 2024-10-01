/*
CH-230-A
a5 p6.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

int main() {
    // We declare the count variable and set it to 0.
    int count = 0;
    // Declare n and read its value from the keyboard.
    int n;
    scanf("%d", &n);

    // Declare an array with an amount of elements equal to the input for n.
    float arr[n];

    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]); 
    }
    
    // Create a pointer in the array.
    float *ptr = arr; 

    // Iterate the pointer to the next element using the while loop.
    while (1) {
        if (*ptr < 0) {
            break; // Exit the loop when a negative value is encountered
        }
        count++;
        ptr++; // Move the pointer to the next element
    }

    // Print the result in the format required.
    printf("Before the first negative value: %d elements\n", count);

    return 0;
}
