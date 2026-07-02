#include <stdio.h>

int find_missing_number(int *arr, int size) {
    // because we are missing one number so the size will be less by 1
    int n = size + 1;

    // we apply this mathematical formula to find the sum of the numbers from 1 to n
    int sum = (n * (n + 1)) / 2;

    for (int i = 0; i < size; i++) {
        sum -= arr[i];
    }

    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int size = 5;

    printf("%d\n", find_missing_number(arr, size));
    return 0;
}