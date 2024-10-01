/*
CH-230-A
a3 p10.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

// Function: Return the product
float product(float a, float b) {
    return a * b;
}

// Function: Return the product of a&b by reference.
void productbyref(float a, float b, float *p) {
    *p = a * b;
}

// Function: Modify the float values by reference
void modifybyref(float *a, float *b) {
    *a += 3;
    //add 3 to a
    *b += 11;
     //add 11 to a
}

int main() {
    //Create a&b floats.
    float a;
    float b;

    // Read the two float values and input them into the a and b floats
    printf("Enter value for a: ");
    scanf("%f", &a);
    printf("Enter value for b: ");
    scanf("%f", &b);
    //The printf(s) in this case are just to make it look better.

    // Call the product function and store the returned value
    float result_initial = product(a, b);

    // Call the productbyref function and store the returned value
    float result_modified;
    productbyref(a, b, &result_modified);

    // Display the results
    printf("Product using function: %f\n", result_initial);
    printf("Product using function by reference: %f\n", result_modified);

    // Call the modifybyref function.
    modifybyref(&a, &b);

    // Print the modified values
    printf("Modified a: %f\n", a);
    printf("Modified b: %f\n", b);

    return 0;
}
