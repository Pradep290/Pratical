#include <stdio.h>
void calculateRowSums(int matrix[][3], int rows, int cols, int rowSums[]) {
    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0;
        for (int j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j];
        }
    }
}
void calculateColumnSums(int matrix[][3], int rows, int cols, int colSums[]) {
    for (int j = 0; j < cols; j++) {
        colSums[j] = 0;
        for (int i = 0; i < rows; i++) {
            colSums[j] += matrix[i][j];
        }
    }
}
int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3, cols = 3;
    int rowSums[3], colSums[3];

    calculateRowSums(matrix, rows, cols, rowSums);
    calculateColumnSums(matrix, rows, cols, colSums);

    printf("Row sums:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSums[i]);
    }

    printf("Column sums:\n");
    for (int j = 0; j < cols; j++) {
        printf("Column %d: %d\n", j + 1, colSums[j]);
    }

    return 0;
}

