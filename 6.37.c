#include <stdio.h>

int recursiveMaximum(int arr[], int size) {
    if (size == 1) {
        return arr[0]; // 只剩一個
    }

    int maxOfRest = recursiveMaximum(arr, size - 1); // 遞迴處理剩下部分
    return (arr[size - 1] > maxOfRest) ? arr[size - 1] : maxOfRest;
}

int main() {
    int arr[] = {2, 8, 3, 10, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Maximum value: %d\n", recursiveMaximum(arr, n));
    return 0;
}
