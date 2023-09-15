#include <stdio.h>
int main() {
    int arr[] = {4, 2, 8, 5, 2, 7, 6, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Duplicate values: ");

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
