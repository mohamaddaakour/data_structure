#include <stdio.h>
#include <limits.h>

int findSecondMax(int *arr, int size) {
    if (size < 2)
        return -1;

    int max = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    for (int i = 0; i < size; i++) {
        if ((arr[i] > secondMax) && (arr[i] < max)) {
            secondMax = arr[i];
        }
    }

    // no second maximum
    if (secondMax == INT_MIN) {
        return -1;
    }

    return secondMax;
}

int main() {
    int arr[] = {-1, -1 , -1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("%d\n", findSecondMax(arr, size));
    return 0;
}