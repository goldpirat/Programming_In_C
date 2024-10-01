/*
CH-230-A
a5 p5.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
 
 // Function to calculate the scalar product.
double scalar_prod(double *v, double *w, int len) {
    double product = 0;
    for(int i = 0; i < len; i++)
    {
        product += v[i] * w[i];
    }
    return product;
}
// Function to find the largest element.
double largest(double *v, int len) {
    double max = v[0];
    for(int i = 0; i < len; i++)
        if(v[i] > max)
            max = v[i];
    return max;
}
// Function to find the smallest element.
double smallest(double *v, int len) {
    double min = v[0];
    for(int i = 0; i < len; i++)
        if(v[i] < min)
            min = v[i];
    return min;
}
// Function to find the position of a specific element.
int posOf(double *v, double pos) {
    // Iterate through every element
    for(int i = 0; ; i++){ 
        if(v[i] == pos)
            return i;
    }
}

int main() {
    // Create n and scan its value from the keyboard.
    int n;
    scanf("%d", &n);

    // Allocate memory for v.
    double *v;
    v = (double*) malloc(sizeof(double) * n);

    //Check if allocated correctly.
    if(!v) {
        printf("Memory allocation failed");
        return(1);
    }

    // Allocate memory for w.
    double *w;
    w = (double*) malloc(sizeof(double) * n);

    //Check if allocated correctly.
    if(!w) {
        printf("Memory allocation failed");
        return(1);
    }
    // Enter doubles for the first array.
    for(int i = 0; i < n; i++){
        scanf("%lf", &v[i]);
    }
    // Enter doubles for the second array
    for(int i = 0; i < n; i++){
        scanf("%lf", &w[i]);
    }
 
    printf("Scalar product=%lf\n", scalar_prod(v, w, n));
 
    printf("The smallest = %lf\n", smallest(v, n));
    printf("Position of smallest = %d\n", posOf(v, smallest(v, n)));
    printf("The largest = %lf\n", largest(v, n));
    printf("Position of largest = %d\n", posOf(v, largest(v, n)));
 
    printf("The smallest = %lf\n", smallest(w, n));
    printf("Position of smallest = %d\n", posOf(w, smallest(w, n)));
    printf("The largest = %lf\n", largest(w, n));
    printf("Position of largest = %d\n", posOf(w, largest(w, n)));
 
    return 0;
}