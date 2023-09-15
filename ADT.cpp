#include <stdio.h>

#define MAX_SIZE 100

struct Array {
    int arr[MAX_SIZE];
    int length;
};

void initArray(struct Array *array) {
    array->length = 0;
}

void insert(struct Array *array, int index, int value) {
    if (index < 0 || index > array->length) {
        printf("Invalid index for insertion\n");
        return;
    }

    if (array->length >= MAX_SIZE) {
        printf("Array is full, cannot insert\n");
        return;
    }

    for (int i = array->length; i > index; i--) {
        array->arr[i] = array->arr[i - 1];
    }

    array->arr[index] = value;
    array->length++;
}
void delete(struct Array *array, int index) {
    if (index < 0 || index >= array->length) {
        printf("Invalid index for deletion\n");
        return;
    }

    for (int i = index; i < array->length - 1; i++) {
        array->arr[i] = array->arr[i + 1];
    }

    array->length--;
}
void traverse(struct Array *array) {
    printf("Array elements: ");
    for (int i = 0; i < array->length; i++) {
        printf("%d ", array->arr[i]);
    }
    printf("\n");
}

int main() {
    struct Array myArray;
    initArray(&myArray);

    insert(&myArray, 0, 10);
    insert(&myArray, 1, 20);
    insert(&myArray, 2, 30);
    insert(&myArray, 1, 15);

    traverse(&myArray);

    delete(&myArray, 1);

    traverse(&myArray);

    return 0;
}

