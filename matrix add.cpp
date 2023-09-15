#include <stdio.h>

void matrixAddition(int A[][3], int B[][3], int result[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int A[2][3] = {{2, 3, 4}, {5, 6, 7}};
    int B[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int result[2][3];

    matrixAddition(A, B, result, 2, 3);

    printf("Matrix Addition Result:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

