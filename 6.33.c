#include <stdio.h>

int binarySearch(int arr[], int start, int end, int key) {
    if (start > end) {
        return -1; // 未找到
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == key) {
        return mid; 
    } else if (arr[mid] > key) {
        return binarySearch(arr, start, mid - 1, key); // 在左半部分查找
    } else {
        return binarySearch(arr, mid + 1, end, key); // 在右半部分查找
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 7;

    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1) 
    {
        printf("Found at index: %d\n", result);
    } 
    else 
    {
        printf("Not found\n");
    }
    return 0;
}
