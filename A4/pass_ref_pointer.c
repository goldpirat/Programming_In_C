/*
CH-230-A
a4 p10.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

// Function to compute product, division, a^b, and 1/b
/*
I called the function pdpi because with the original name it didn't fit
in the 80 characters per line limit.
*/
void pdpi(float a, float b, float *prod, float *div, float *pwr, float *invb) {
    // Product of a and b
    *prod = a * b;
    // Division of a by b
    *div = a / b;
    // a^b using the pow function
    *pwr = pow(a, b);
    
    // Inverse of b
    *invb = 1.0 / b;
}

int main() {
    // Create a and b float variables.
    float a, b;
    // Create variables for their operations
    float product, division, power, inverse;

    // Read two float values
    printf("Enter two float values: \n");
    scanf("%f", &a);
    scanf("%f", &b);

    // Call the pdpi function to compute the operations.
    pdpi(a, b, &product, &division, &power, &inverse);

    // Print the results
    printf("Product: %.2f\n", product);
    printf("Division: %.2f\n", division);
    printf("a^b: %.2f\n", power);
    printf("1/b: %.2f\n", inverse);

    return 0;
}
