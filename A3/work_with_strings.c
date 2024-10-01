/*
CH-230-A
a3 p11.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
// string.h is also included.

int main() {
    // Create the chars
    char one[100], two[100], three[100], c;
    // Create the int variables.
    int length1, length2, pos = -1;

    // Read the two input strings from the keyboard
    fgets(one, sizeof(one), stdin);
    fgets(two, sizeof(two), stdin);

    // Remove newline characters from input strings
    one[strcspn(one, "\n")] = '\0';
    two[strcspn(two, "\n")] = '\0';

    // Calculate the lengths of both strings
    length1 = strlen(one);
    length2 = strlen(two);

    // Print the lengths of both strings
    printf("length1=%d\n", length1);
    printf("length2=%d\n", length2);

    // Use strcmp for lexicographic comparison and store it in cmp.
    int cmp = strcmp(one, two);

    // Print the concatenation and copy
    printf("concatenation=%s\n", strcat(one, two));
    printf("copy=%s\n", strcpy(three, two));

    //Run the comparison if after printing the copy.
    if (cmp == 0) {
        printf("one is equal to two\n");
    } else if (cmp > 0) {
        printf("one is larger than two\n");
    } else {
        printf("one is smaller than two\n");
    }

    // Read a character for the search
    scanf(" %c", &c);

    // Search for c in two using "if".
    for (int i = 0; two[i] != '\0'; i++) {
        if (two[i] == c) {
            pos = i;
            break;
            //If found break the for loop.
        }
    }

    //If it is found. Send location. If not. Send not found.
    if (pos >= 0) {
        printf("position=%d\n", pos);
    } else {
        printf("The character is not in the string\n");
    }

    return 0;
}
