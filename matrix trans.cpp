#include <stdio.h>

void matrixTranspose(int A[][3], int result[][2], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = A[i][j];
        }
    }
}

int main() {
    int A[2][3] = {{2, 3, 4}, {5, 6, 7}};
    int result[3][2];

    matrixTranspose(A, result, 2, 3);

    printf("Matrix Transpose Result:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

