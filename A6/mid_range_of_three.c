/*
CH-230-A
a6 p3.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

// The macro to find the maximum value 
#define MAX(a, b, c) ((a > b && a > c) ? a : ((b > c) ? b : c))
// The macro to find the minimum value 
#define MIN(a, b, c) ((a < b && a < c) ? a : ((b < c) ? b : c))
// The macro to find the mid-range 
#define MIDRANGE(a, b, c) ((MIN(a, b, c) + MAX(a, b, c)) / 2.0)

int main() {
    //Create all variables needed.
    int x;
    int y;
    int z;
    double middleRange;

    // Read the values for the variables.
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    // Call the Macro MIDRANGE and store the calculation in middleRange.
    middleRange = MIDRANGE(x, y, z);

    // Print the stored mid-range value.
    printf("The mid-range is: %.6f\n", middleRange);

    return 0;
}
