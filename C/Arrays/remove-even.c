#include <stdio.h>
#include <stdlib.h>

int countOdd(int *arr, int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int *removeEven(int *arr, int size) {

    int newSize = countOdd(arr, size);

    int *result = (int *)malloc(sizeof(int) * newSize);
    if (!result) {
        return NULL;
    }
    
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            result[count] = arr[i];
            count++;
        }
    }
    return result;
}

int main() {
    int arr[] = {1 , 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int newSize = countOdd(arr, size);

    int *result = removeEven(arr, size);

    for (int i = 0; i < newSize; i++) {
        printf("%d ", result[i]);
    }

    free(result);

    return 0;
}