/*
CH-230-A
a3 p7.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

// Function to print the shape using the input for n m and c.
void print_form(int n, int m, char c) {
    for (int i = 0; i < n; i++) {
        // Print character line using the selected character.
        for (int j = 0; j < m + i; j++) {
            printf("%c", c);
        }
        
        // Print nextline so that we can continue printing the shape.
        printf("\n");
    }
}

int main() {
    //Create all needed variables.
    int n;
    int m; 
    char c;

    // Read and save all inputs for the variables n, m, and c.
    scanf("%d", &n);
    scanf("%d", &m);
    scanf(" %c", &c);

    //Call the above-defined function using the inputs n, m, and c.
    print_form(n, m, c);

    return 0;
}
