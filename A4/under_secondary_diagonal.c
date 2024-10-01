/*
CH-230-A
a4 p8.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

// Function to print the matrix.
void printMatrix(int n, int mat[][n]) {
    printf("The entered matrix is:\n");
    
    // Loop through rows.
    for (int i = 0; i < n; i++) {
        // Loop through columns.
        for (int j = 0; j < n; j++) {
            // Print the elements.
            printf("%d ", mat[i][j]);
        }
        // Move to the next row.
        printf("\n");
    }
}

// Function to print elements under the secondary diagonal
void printUnderSecondaryDiagonal(int n, int mat[n][n]) {
    // Loop through rows (except the first row)
    for (int i = 1; i < n; i++) {
        for (int j = n - i; j < n; j++) {
            // Print elements under the secondary diagonal
            printf("%d ", mat[i][j]);
        }
    }
    // Print a newline character to separate the output
    printf("\n");
}

int main() {
    // Create n variable and read its input.
    int n;
    scanf("%d", &n);

    // Create the matrix.
    int matrix[n][n];

    // Read the matrix values
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Call the functions defined above.
    printMatrix(n, matrix);
    printf("Under the secondary diagonal:\n");
    printUnderSecondaryDiagonal(n, matrix);

    return 0;
}
