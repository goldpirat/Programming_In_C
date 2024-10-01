/*
CH-230-A
a4 p1.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

int main() {
    // Create the doubles.
    float lower_limit, upper_limit, step_size;
    // Save the input from the keyboard for each measurement respectively.
    scanf("%f %f %f", &lower_limit, &upper_limit, &step_size);

    /*
    It loops the values of x from the lower limit to the upper limit with
    a specific step size.
    */
    for (float x = lower_limit; x <= upper_limit; x += step_size) {
        printf("%f %f %f\n", x, x * x * M_PI, 2 * x * M_PI);
    }

    return 0;
}
