#include <stdio.h>
void findMinAndMax(int arr[], int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}
int main() {
    int arr[] = {4, 2, 8, 5, 2, 7, 6, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int minValue, maxValue;
    
    findMinAndMax(arr, size, &minValue, &maxValue);
    
    printf("Minimum value: %d\n", minValue);
    printf("Maximum value: %d\n", maxValue);

    return 0;
}

