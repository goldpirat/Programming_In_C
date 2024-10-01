/*
CH-230-A
a8 p6.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    double a, b;
    // Double values to be read from files
    FILE *fptr1;
    fptr1 = fopen("Double1.txt", "r");
    // Double1.txt is opened in read mode
    if (fptr1 == NULL) {
        printf (" Cannot open file !\n");
        exit(1);
    }
    fscanf(fptr1, "%lf", &a);
    //Double value is scanned from Double1.txt into a
    FILE *fptr2;
    fptr2 = fopen("Double2.txt", "r");
    // Double2.txt is opened in read mode
    if (fptr2 == NULL) {
        printf (" Cannot open file !\n");
        exit(1);
    }
    fscanf(fptr2, "%lf", &b);
    // Double value is scanned from Double2.txt into a
    FILE *fptr3;
    fptr3 = fopen("result.txt", "w");
    // File result.txt is created/opened in write mode
    if (fptr3 == NULL) {
        printf (" Cannot open file !\n");
        exit(1);
    }
    fprintf(fptr3, "sum = %lf\n", a+b);
    fprintf(fptr3, "difference = %lf\n", a-b);
    fprintf(fptr3, "product = %lf\n", a*b);
    fprintf(fptr3, "division = %lf\n", a/b);
    /*The sum, difference, product and division
    of a and b are printed into result.txt*/
 
    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
    // Streams are closed
 
    return 0;
 
}