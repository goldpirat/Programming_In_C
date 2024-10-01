/*
CH-230-A
a4 p7.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

// Function to print the matrix.
void printMatrix(int mat[][30], int rows, int cols) {
    printf("The entered matrix is:\n");
    // Loop through rows.
    for (int i = 0; i < rows; i++) {
        // Loop through columns.
        for (int j = 0; j < cols; j++) {
            // Print the value of the matrix element.
            printf("%d ", mat[i][j]);
        }
        // Move to the next row.
        printf("\n");
    }
}

// Function to print elements under the main diagonal.
void printUnderMainDiagonal(int mat[][30], int rows, int cols) {
    printf("Under the main diagonal:\n");
    // Loop through rows from second row.
    for (int i = 1; i < rows; i++) {
        // Loop through columns up to the diagonal position.
        for (int j = 0; j < i; j++) {
            // Print the value of the matrix element.
            printf("%d ", mat[i][j]);
        }
    }
    // Move to the next row.
    printf("\n");
}

int main() {
    // Create necessaru variables.
    int mat[30][30];
    int rows, cols;

    // Read the number of rows and columns.
    scanf("%d", &rows);
    cols = rows; 

    // Read the matrix values.
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Call the functions.
    printMatrix(mat, rows, cols);
    printUnderMainDiagonal(mat, rows, cols);

    return 0;
}
