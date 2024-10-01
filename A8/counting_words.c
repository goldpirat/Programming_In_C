/*
CH-230-A
a8 p8.c
Flori Kusari
fkusari@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
 
int main() {
    // Word count variable
    int count=0;
    // Character for code simplicity
    char c; 
 
    FILE *fptr1;
    fptr1=fopen("words2.txt", "r");
    // File words.txt is opened in read mode
 
    while((c=getc(fptr1))!=EOF) {
    // While the end of file hasn't been reached
 
        if((c!=' ')&&(c!=',')&&
        (c!='?')&&(c!='!')&&(c!='.')&&
        (c!='\t')&&(c!='\r')&&(c!='\n')) {
            count++;
            /*If one of the specific characters are encountered
            add 1 to the count*/
 
            while((c!=' ')&&(c!=',')&&
            (c!='?')&&(c!='!')&&(c!='.')&&
            (c!='\t')&&(c!='\r')&&(c!='\n')&&(c!=EOF)) {
                
                c=getc(fptr1);
            }
            /* Advances the character pointer until a word 
            delimiter is found, ensuring that a value of 1 
            is added to the word count for each word. */
        }
        // Goes back to the outer loop.
    }
    printf("The file contains %d words.\n", count);
    // Word count is printed.
    fclose(fptr1);
    // Stream is closed
    return 0;
}