#include <stdio.h>
#include <stdlib.h>

int *reverseArray(int *arr, int size) {
    int j = 0;
    int *newArray = (int *)malloc(sizeof(int) * size);
    if (!newArray) {
        return NULL;
    }

    for (int i = size - 1; i >= 0; i--) {
        newArray[j] = arr[i];
        j++;
    }

    return newArray;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int size = 4;

    int *result = reverseArray(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }

    free(result);

    return 0;
}