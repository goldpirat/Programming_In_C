/*
CH-230-A
a5 p1.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char ch;
    
    // Read the value of n
    scanf("%d", &n);
    // Consume the newline character left in the input buffer
    getchar();
    // Read the character ch
    scanf("%c", &ch);
    getchar();
    
    // Nested loop to print the character ch in a triangle form
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
