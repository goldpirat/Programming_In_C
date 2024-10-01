/*
CH-230-A
a2 p1.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

int main() {
    // Create two doubles at once.
    double number_1, number_2;
    // Create two int variables at once.
    int int_1, int_2;
    // Create two char variables at once.
    char char_1, char_2;

    // The following code reads the input for the doubles from the keyboard.
    scanf("%lf", &number_1);
    scanf("%lf", &number_2);

    // The following code reads the input for the int variables from the keyboard.
    scanf("%d", &int_1);
    scanf("%d", &int_2);

    // The following code reads the input for the char variables from the keyboard.
    scanf(" %c", &char_1);
    scanf(" %c", &char_2);

    /*The code below calculates the sum and the product of the char variables that are 
     taken from the input from the keyboard.*/
    int charSum = char_1 + char_2;
    int charProduct = char_1 * char_2;

    /* Print out all the respective variables in the order that they are required to be printed in.
    It does this while also while performing the necessary calculations for the output to match the 
    neccessary output for the code to be accurate.
    */
    printf("sum of doubles=%.6lf\n", number_1 + number_2);
    printf("difference of doubles=%.6lf\n", number_1 - number_2);
    printf("square=%.6lf\n", number_1 * number_1);
    printf("sum of integers=%d\n", int_1 + int_2);
    printf("product of integers=%d\n", int_1 * int_2);
    printf("sum of chars=%d\n", charSum);
    printf("product of chars=%d\n", charProduct);
    printf("sum of chars=%c\n", (char)charSum);
    printf("product of chars=%c\n", (char)charProduct);

    return 0;
}
