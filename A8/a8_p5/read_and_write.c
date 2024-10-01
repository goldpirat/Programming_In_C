/*
CH-230-A
a8 p5.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
 
int main() {
    FILE *fptr1;
    fptr1 = fopen("chars.txt","r");
    // File chars.txt is opened in read mode
 
    if(fptr1 == NULL) {
        printf (" Cannot open file !\n");
        exit (1);
    }
    int a = getc(fptr1);
    /*Integer a is declared and initialized with
    the ASCII value of the first character in chars.txt*/
 
    int b = getc(fptr1);
    /* Integer a is declared and initialized with
    the ASCII value of the second character in chars.txt.*/
 
    int sum = a + b;
    /* Integer sum is declared and initialized with
    the value of the sum of a and b*/
 
    FILE *fptr2;
    fptr2 = fopen("codesum.txt", "w");
    // File codesum.txt is created/opened in write mode
 
    if (fptr2 == NULL) {
        printf (" Cannot open file !\n");
        exit (1);
    }
    fprintf(fptr2, "%d", sum);
    // Value of sum is printed on codesum.txt
    fclose(fptr1);
    fclose(fptr2);
    // Streams are closed
    return 0;
}