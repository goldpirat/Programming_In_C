/*
CH-230-A
a5 p8.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Function to read a matrix from standard input.
void readMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            /*
            Read an integer from standard input 
            and store it in the matrix.
            */
            scanf("%d", &matrix[i * cols + j]);
        }
    }
}

// Function to print a matrix to standard output
void stored_Matrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            //Print the matrix element at position (i, j).
            printf("%d ", matrix[i * cols + j]);
        }
        // Move to next row.
        printf("\n");
    }
}

// Function to multiply two matrices
void multiplyMatrices(int *A, int *B, int *result, int n, int m, int p) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            result[i * p + j] = 0;
            for (int k = 0; k < m; k++) {
                /*
                Calculate the result element at position (i, j) by summing
                the products of corresponding elements of A and B.
                */
                result[i * p + j] += A[i * m + k] * B[k * p + j];
            }
        }
    }
}

int main() {
    // Declare the variables for the dimensions of the matrices.
    int n;
    int m;
    int p;

    // Read matrix dimensions.
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);

    // Allocate memory for matrix A.
    int *A = (int *)malloc(n * m * sizeof(int));
    // Allocate memory for matrix B.
    int *B = (int *)malloc(m * p * sizeof(int));
    // Allocate memory for the result of the expression.
    int *result = (int *)malloc(n * p * sizeof(int));

    // Call the function above to read A.
    readMatrix(A, n, m);
    // Call the function above to read B.
    readMatrix(B, m, p);

    // Call the function above.
    multiplyMatrices(A, B, result, n, m, p);

    // Print matrix A by calling the function above.
    printf("Matrix A:\n");
    stored_Matrix(A, n, m);

    // Print matrix B by calling the function above.
    printf("Matrix B:\n");
    stored_Matrix(B, m, p);

    // Print the multiplication result for A*B by calling the function above.
    printf("The multiplication result AxB:\n");
    stored_Matrix(result, n, p);

    // Free all allocated memory.
    free(A);
    free(B);
    free(result);

    return 0;
}