#include <stdio.h>
#include <stdlib.h>

int *moveZeroEnd(int *arr, int size) {
    int *newArray = (int *)malloc(sizeof(int) * size);
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

    int *result = moveZeroEnd(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }

    free(result);

    return 0;
}