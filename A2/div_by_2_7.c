/*
CH-230-A
a2 p8.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

int main() {
    // We create the int variable 'input'.
    int input;

    //We use scanf to read the number from the keyboard.
    scanf("%d", &input);

    /*
    To check if it is divisible we use the "%" operator 
    which gives the remainder of a division. If the operator gives
    '0' for both 2 and 7, then the number is divisible by 2 and 7
    if not then it is not divisible by 2 and 7.
    */
    if (input % 2 == 0 && input % 7 == 0) {
        printf("The number is divisible by 2 and 7\n");
        // If the condition is filled, then this is printed.
    } else {
        printf("The number is NOT divisible by 2 and 7\n");
        // If the condition is not filled, then this is printed.
    }

    return 0;
}