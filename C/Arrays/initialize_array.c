#include <stdio.h>

int main() {
    // first method
    int arr[] = {1, 2, 3};

    // second method
    int arr1[2];

    // we put values in the array
    // each slot in the array is indexed and first element the index of it is 0
    arr1[0] = 1;
    arr1[1] = 2;

    // print the first array
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // print the second array
    for (int i = 0; i < 2; i++) {
        printf("%d ", arr1[i]);
    }

    return 0;
}