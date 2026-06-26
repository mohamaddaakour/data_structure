#include <stdio.h>

int findMissingNumber(int *arr, int size) {
    int n = size + 1;
    int sum = (n * (n + 1)) / 2;

    for (int i = 0; i < size; i++) {
        sum -= arr[i];
    }

    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int size = 5;

    printf("%d\n", findMissingNumber(arr, size));
    return 0;
}