/*
CH-230-A
a8 p9.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; // Number of files to be opened
    char file_str[50]; // String to store the name of the file

    FILE *ofptr;
    ofptr = fopen("output.txt", "wb");
    if (ofptr == NULL) {
        printf("Cannot open file!\n");
        exit(1);
    }
    // output.txt is opened in binary write mode

    scanf("%d", &n);
    // Number of files to be opened is read from the keyboard

    getchar();
    // Gets newline after entering the number

    FILE *array[n]; // Declare an array of file pointers

    printf("Concating the content of %d files ...\n", n);

    for (int i = 0; i < n; i++) {
        // Loop is used to repeatedly open a file,
        // read the contents, and concatenate into the output file

        fgets(file_str, sizeof(file_str), stdin);
        // File name is read from the keyboard into file_str
        for (int j = 0; file_str[j] != '\0'; j++) {
            if (file_str[j] == '\n') {
                file_str[j] = '\0';
            } // Removes the newline at the end
        }
        array[i] = fopen(file_str, "rb");
        // Files are opened one by one in binary read mode

        if (array[i] == NULL) {
            printf("Cannot open file!\n");
            exit(1);
        }

        char buffer[64]; // Buffer
        int bytesRead;

        while ((bytesRead = fread(buffer, 1, sizeof(buffer), array[i])) > 0) {
            fwrite(buffer, 1, bytesRead, ofptr);
        }

        fprintf(ofptr, "\n");
        fclose(array[i]);
        // Streams are closed after each iteration
    }

    fclose(ofptr);
    // Stream is closed

    printf("The result was written into output.txt\n");

    return 0;
}