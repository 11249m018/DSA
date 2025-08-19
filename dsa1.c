#include <stdio.h>

// Linear Search Function
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; // Found at index i
    }
    return -1; // Not found
}

// Binary Search Function (array must be sorted)
int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid; // Found at index mid
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // Not found
}

int main() {
    int arr[] = {2, 4, 7, 10, 15, 18, 21};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;

    // Linear Search Example
    printf("Linear Search:\n");
    printf("Enter element to search: ");
    scanf("%d", &key);
    int result = linearSearch(arr, n, key);
    if (result != -1)
        printf("%d found at index %d\n", key, result);
    else
        printf("%d not found in array\n", key);

    // Binary Search Example
    printf("\nBinary Search (array must be sorted):\n");
    printf("Enter element to search: ");
    scanf("%d", &key);
    result = binarySearch(arr, n, key);
    if (result != -1)
        printf("%d found at index %d\n", key, result);
    else
        printf("%d not found in array\n", key);

    return 0;
}
