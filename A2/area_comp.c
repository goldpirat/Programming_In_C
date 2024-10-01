/*
CH-230-A
a2 p4.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

int main() {
    // Create all float variables at once for convenience.
    float a, b, h;

    // Read inputs for said variables using scanf.
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);

    /* Performing the necessary calculations for all needed measurements.
    We perform these calculations using the formulas for calculating 
    the area of a square, rectangle, triangle, and trapezoid. */
    float square_area = a * a;
    float rectangle_area = a * b;
    float triangle_area = 0.5 * a * h;
    float trapezoid_area = 0.5 * (a + b) * h;

    /* Print the results and making sure that they follow a certain 
    amount of decimals after the period in order to match 
    the required number of decimals which is 6. */
    printf("square area=%.6f\n", square_area);
    printf("rectangle area=%.6f\n", rectangle_area);
    printf("triangle area=%.6f\n", triangle_area);
    printf("trapezoid area=%.6f\n", trapezoid_area);

    return 0;
}
