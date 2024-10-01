/*
CH-230-A
a8 p7.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
 
int main() {
    // The following will be used to print the contents of 2 files
    char c; 
    FILE *fptr1;
    fptr1=fopen("text1.txt", "r");
    // text1.txt is opened in read mode
 
    if(fptr1==NULL) {
        printf(" Cannot open file!\n");
        exit(1);
    }
    FILE *fptr2;
    fptr2=fopen("text2.txt", "r");
    // text2.txt is opened in read mode
 
    if(fptr2==NULL) {
        printf(" Cannot open file!\n");
        exit(1);
    }
    FILE *fptr3;
    fptr3=fopen("merge12.txt", "w");
    // merge12.txt is created/opened in write mode
 
    if(fptr3==NULL) {
        printf(" Cannot open file!\n");
        exit(1);
    }
    while((c=fgetc(fptr1))!=EOF) {
        putc(c, fptr3);
    } // Copy the contents of text1.txt into merge12.txt
 
    while((c=fgetc(fptr2))!=EOF) {
        putc(c, fptr3);
    } // Copy the contents of text2.txt into merge12.txt
 
    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
    // Streams are closed
 
    return 0;
 
}