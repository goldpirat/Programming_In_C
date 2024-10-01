/*
CH-230-A
a5 p9.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Function to read the 3D Array.
void read3DArray(int*** array_3D, int rows_y, int columns_x, int depth_z) {
    // Iterates through the rows of the 3D array.
    for (int i = 0; i < rows_y; i++) {
        // Iterates through the columns of the 3D array.
        for (int j = 0; j < columns_x; j++) {
            // Iterates through the depth of the 3D array.
            for (int k = 0; k < depth_z; k++) {
                /* 
                Read an integer from standard input 
                and store it at position [i][j][k]. 
                */
                scanf("%d", &array_3D[i][j][k]);
            }
        }
    }
}

// Function to print the parallel to the "XOY axis".
void print2DSections(int*** array_3D, int rows_y, int columns_x, int depth_z) {
    // Iterates through the depth of the 3D array.
    for (int k = 0; k < depth_z; k++) {
        printf("Section %d:\n", k + 1);
        // Iterates through the rows of the 3D array.
        for (int i = 0; i < rows_y; i++) {
            // Iterates through the columns of the 3D array.
            for (int j = 0; j < columns_x; j++) {
                // Print the integer value at the current position [i][j][k].
                printf("%d ", array_3D[i][j][k]);
            }
            // Move to new line.
            printf("\n");
        }
    }
}

int main() {
    // Create variables for the 3D array using (x,y,z) columns, rows, depth.
    int columns_x;
    int rows_y;
    int depth_z;
    
    // Read matrix dimensions.
    scanf("%d", &rows_y);
    scanf("%d", &columns_x);
    scanf("%d", &depth_z);

    // Dynamically allocating memory.
    int*** array_3D = (int***)malloc(rows_y * sizeof(int**));
    for (int i = 0; i < rows_y; i++) {
        array_3D[i] = (int**)malloc(columns_x * sizeof(int*));
        for (int j = 0; j < columns_x; j++) {
            array_3D[i][j] = (int*)malloc(depth_z * sizeof(int));
        }
    }

    // Call the above defined function.
    read3DArray(array_3D, rows_y, columns_x, depth_z);

    // Call the above defined function.
    print2DSections(array_3D, rows_y, columns_x, depth_z);

    // Free All Memory:

    // Iterate through rows.
    for (int i = 0; i < rows_y; i++) {
        // Iterate through columns
        for (int j = 0; j < columns_x; j++) {
            // Free the memory for each depth element of each column.
            free(array_3D[i][j]);
        }
        // Free the memory allocated for the row itself.
        free(array_3D[i]);
    }
    // Free the memory allocated for the entire 3D array itself.
    free(array_3D);

    return 0;
}