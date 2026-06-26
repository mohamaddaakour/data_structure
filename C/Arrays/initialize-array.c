#include <stdio.h>

int main() {
    // first method
    int arr[] = {1, 2, 3};

    // second method
    int arr1[2];
    arr1[0] = 1;
    arr1[1] = 2;

    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    for (int i = 0; i < 2; i++) {
        printf("%d ", arr1[i]);
    }
    return 0;
}