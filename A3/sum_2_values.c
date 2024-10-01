/*
CH-230-A
a3 p9.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

// Function to compute the sum of elements at index 2 and 5.
double sum25(double v[], int n) {
    // We check if index 2 and 5 are valid
   if (n <= 5) {
        printf("One or both positions are invalid\n");
        return -111.0;
    }
    
    // Return the sum of the elements.
    double sum = v[2] + v[5];
    return sum;
}

int main() {
    //Create the int variable n.
    int n;

    // Input the number of elements by reading from the keyboard.
    scanf("%d", &n);

    // Check if n is within the valid range
    if (n <= 0 || n > 20) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    //We define an array to store the inputs.
    double v[20];

    // Add the elements to the array
    for (int i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
    }

    // We call the above-defined function to compute the sum.
    double result = sum25(v, n);

    if (result == -111.0) {
        return 1; // Exit with an error code
    }
    else if (result != -111.0) {
        // Print the result only if it's not an error
        printf("sum=%.6lf\n", result);
    }

    return 0;
}
