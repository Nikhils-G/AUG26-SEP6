#include <stdio.h>

int maxConsecutiveOnes(int arr[], int n) {
    int maxCount = 0;
    int currentCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            currentCount++;
        } else {
            currentCount = 1;
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
        }
    }

    return maxCount;
}

int main() {
    int arr[] = {1, 2, 3,4, 44,5, 77,8, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = maxConsecutiveOnes(arr, n);
    printf("Maximum consecutive count: %d\n", result);

    return 0;
}
