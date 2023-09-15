#include <stdio.h>

void matrixMultiply(int A[][3], int B[][2], int result[][2], int rowA, int colA, int colB) {
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[2][3] = {{2, 3, 4}, {5, 6, 7}};
    int B[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int result[2][2];

    matrixMultiply(A, B, result, 2, 3, 2);

    printf("Matrix Multiplication Result:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

