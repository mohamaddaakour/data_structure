#include <stdio.h>
#include <stdlib.h>

int *move_zero_to_end(int *arr, int size) {
    // we allocated a memory for this array
    int *newArray = malloc(sizeof(int) * size);

    // if the allocation failed return NULL
    if (!newArray) {
        return NULL;
    }

    int start = 0;
    int end = size - 1;

    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            newArray[start] = arr[i];
            start++;
        } else if (arr[i] == 0) {
            newArray[end] = arr[i];
            end--;
        }
    }

    return newArray;
}

int main() {
    int arr[] = {0, 1, 3, 0, 5};
    int size = 5;

    int *result = move_zero_to_end(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }

    free(result);

    return 0;
}