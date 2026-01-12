#include <stdio.h>

int** allocate2DArray(int rows, int cols) {
    int** arr = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int*)malloc(cols * sizeof(int));
    }
    return arr;
}

int main() {
    int rows = 3, cols = 4;
    int** array2D = allocate2DArray(rows, cols);

    // Initialize and print the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array2D[i][j] = i * cols + j;
            printf("%d ", array2D[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(array2D[i]);
    }
    free(array2D);

    return 0;
}