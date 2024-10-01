#include <stdio.h>

#define SWAP(type, a, b) do { type temp = a; a = b; b = temp; } while (0)

int main() {
    int first_int, second_int;
    double first_double, second_double;

    // Get the values for the two integers and two doubles from user input.
    scanf("%d", &first_int);
    scanf("%d", &second_int);
    scanf("%lf", &first_double);
    scanf("%lf", &second_double);

    //SWAP macro: Swap the Int Variables.
    SWAP(int, first_int, second_int);

    //SWAP macro: Swap the Double Variables.
    SWAP(double, first_double, second_double);

    // Print the result in the format required in testcases.
    printf("After Sswapping:\n");
    printf("%d\n", first_int);
    printf("%d\n", second_int);
    printf("%.6lf\n", first_double);
    printf("%.6lf\n", second_double);

    return 0;
}
