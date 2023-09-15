#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100

void findDuplicates(int arr[], int size) {
    bool seen[MAX_SIZE] = {false};

    printf("Duplicate elements: ");
    for (int i = 0; i < size; i++) {
        if (seen[arr[i]]) {
            printf("%d ", arr[i]);
        } else {
            seen[arr[i]] = true;
        }
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[MAX_SIZE];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findDuplicates(arr, size);

    return 0;
}

