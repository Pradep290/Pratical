#include <stdio.h>

int findElementIndex(int array[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return i; 
        }
    }
    return -1;  
}

int main() {
    int array[] = {5, 10, 15, 20, 25, 30};
    int size = sizeonf(array) / sizeof(array[0]);
    int target = 20;
    
    int index = findElementIndex(array, size, target);
    
    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    
    return 0;
}

