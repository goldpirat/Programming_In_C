/*
CH-230-A
a2 p3.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

int main() {
    /* create the variables needed this way to not have to
    do it individually for all of them.*/
    int weeks, days, hours;

    /* Read input values for weeks, days, and hours individually.
    We do this to avoid confusion from the person who inputs the 
    specific values.*/
    printf("Number of weeks: ");
    scanf("%d", &weeks);

    printf("Number of days: ");
    scanf("%d", &days);

    printf("Number of hours: ");
    scanf("%d", &hours);

    /* Calculate the total number of hours by converting all
    of the inputs into hours and then adding them together to give
    the desired value in Hours.*/
    int totalHours = (weeks * 7 * 24) + (days * 24) + hours;

    // Print the result
    printf("Total hours: %d\n", totalHours);

    return 0;
}
