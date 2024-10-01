/*
CH-230-A
a3 p5.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

int main() {
    char c;
    int n;

    // Reads the input for both characters.
    printf("Enter s for sum, t for list in Fahrenheit, p for list in Celsius");
    printf(". Enter a random letter for the mean. \n");
    scanf(" %c", &c);
    printf("Now enter the amount of temperatures you will input. \n");
    scanf("%d", &n);

    //Now we declare an array to store temperatures.
    double temperatures[100];
    //Create the double variable called sum.
    double sum = 0.0;

    /*
    The for loop runs for as long as i<n and as long as that is true
    it calculates all the temperatures that are input and stores their sum.
    */
    for (int i = 0; i < n; i++) {
        // Asks for an input for n amount of times.
        printf("Enter a Temperature: \n");
        scanf("%lf", &temperatures[i]);
        sum += temperatures[i];
    }
    // We use the required 'switch' as instructed.
    switch (c) {
        case 's':
        // If case s is true then the sum is printed.
            printf("Sum of temperatures: %.2lf\n", sum);
            break;
        case 'p':
        // If the case p is true then the list of temperatures is printed.
            printf("List of temperatures:\n");
        //for loop that iterates over the list and prints all elements in it.
            for (int i = 0; i < n; i++) {
                printf("%.2lf\n", temperatures[i]);
            }
            break;
        case 't':
        // If case t is true the list of temperatures is given in Fahrenheit.
            printf("List of temperatures in Fahrenheit:\n");
        //for loop that iterates over the list and prints all elements in it.
        //It does this while turning them into Fahrenheit from Celsius.
            for (int i = 0; i < n; i++) {
                double fahrenheit = (9.0 / 5.0) * temperatures[i] + 32.0;
                printf("%.2lf\n", fahrenheit);
            }
            break;
        /*
        The default case is one in which it gives the Arithmetic mean of
        all temperatures that have been input. This occurs as a default if
        none of the other cases are called.
        */
        default:
            double mean = sum / n;
            printf("Arithmetic mean of temperatures: %.2lf\n", mean);
            break;
    }

    return 0;
}
