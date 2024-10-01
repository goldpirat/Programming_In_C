/*
CH-230-A
a3 p6.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

float to_pounds(int kg, int g) {
    // We convert kilograms to pounds and then grams.
    // We have to do the conversion for each to make it easier.
    float kg2pounds = kg * 2.2;
    float g2pounds = g * 0.0022;
    // Value for grams is different since the conversion rate changes.

    //We return the sum of the who which is the real expression.
    return kg2pounds + g2pounds;
}

int main() {
    //We create two int variables which will store the values that are input.
    int kg;
    int g;

    //Get the value from the input and store it in the variables kg and g.
    scanf("%d", &kg);
    scanf("%d", &g);

    //We call the above-defined function and set its value to varible pounds.
    float pounds = to_pounds(kg, g);

    //Print the result.
    printf("Result of conversion: %.6f\n", pounds);

    return 0;
}
