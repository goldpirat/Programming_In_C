/*
CH-230-A
a5 p2.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

// Function that divides by 5 all elements of an array.
void divby5(float arr[], int size) {
    
	printf("Before:\n");
    // Iterates for all instances of i smaller than "size".
	for(int i=0; i<size; i++) {
        // Print element with index 'i'.
		printf("%.3f ",arr[i]);
	}
	printf("\n");


	printf("After:\n");
	// Iterates for all instances of i smaller than "size".	
    for(int i=0; i<size; i++) {
        // Print element with index 'i' divided by 5.
		printf("%.3f ",arr[i]/5);
	}
	printf("\n");
}

int main () {
    // Declare the variable and the array.
    int size = 6;
    float arr[6]={5.5,6.5,7.75,8.0,9.6,10.36};

    // Call the function.
    divby5(arr, size);

    return 0;
}

