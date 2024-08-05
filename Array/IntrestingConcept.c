#include <stdio.h>

int dublicate(int arr[], int n) {
    int uniq[256] = {0}; // Array to track occurrences of elements
    int result[n], re = 0;

    for (int i = 0; i < n; i++) {
        if (uniq[arr[i]] == 0) { // Correct condition to check for the first occurrence
            result[re++] = arr[i]; // Store unique element
            uniq[arr[i]] = 1; // Mark element as seen
        }
    }

    return re; // Return the count of unique elements
}

int main() {
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 5, 5, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int a = dublicate(arr, n);
    printf("%d", a); // This should print the count of unique elements
    return 0;
}
