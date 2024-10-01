/*
CH-230-A
a3 p8.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

// Function to calculate the sum of values that are input
float calculateSum(float values[], int count) {
    //Create the float variable sum to store the sum of all variable input.
    float sum = 0.0;
    for (int i = 0; i < count; i++) {

        sum += values[i];
    }
    return sum;
}

// Function to calculate the average of values that are input
float calculateAverage(float sum, int count) {
    if (count == 0) {
        return 0.0; 
        // We write this to avoid division by zero giving us an issue.
    }
    return sum / count;
    //return the sum divided by the count which is the average.
}

int main() {
    float values[10];
    int count = 0;
    float input;

    printf("Enter a float (or -99.0 to stop)");
    
    // Input up to 10 floats or until -99.0 is entered.
    while (count < 10) {
        printf("Input: ");
        scanf("%f", &input);

    // Break the loop if -99.0 is inputted.
        if (input == -99.0) {
            break;
        }

        //makes the current item in the values array into the input.
        values[count] = input;
        // iterates the loop once.
        count++;
    }

    // We call the above-defined function that calculates the Sum.
    float sum = calculateSum(values, count);

    // We call the above-defined function that calculates the Average.
    float average = calculateAverage(sum, count);

    // We print the results for the Sum and the Average
    printf("Sum of values: %.2f\n", sum);
    printf("Average of values: %.2f\n", average);

    return 0;
}
