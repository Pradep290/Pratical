#include <stdio.h>

int main() {
    int arr[] = {2, 7, 11, 16, 22, 25, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Even values: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd values: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

