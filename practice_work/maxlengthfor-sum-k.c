#include <stdio.h>

// Function to find the length of the longest subarray having sum K
int lenOfLongSubarr(int arr[], int N, int K) {
    // Variable to store the answer
    int maxlength = 0;

    for (int i = 0; i < N; i++) {
        // Variable to store sum of subarrays
        int Sum = 0;
      
        // if maximum possible subarray length from i is equal to maxLength
        if (maxlength == N - i)
            break;
      
        for (int j = i; j < N; j++) {
            // Storing sum of subarrays
            Sum += arr[j];

            // if Sum equals K
            if (Sum == K) {
                // Update maxLength
                if (maxlength < j - i + 1)
                    maxlength = j - i + 1;
            }
        }
    }

    // Return the maximum length
    return maxlength;
}

// Driver Code
int main() {
    // Given input
    int arr[] = { 9, -3, 3, -1, 6, -5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;

    // Function Call
    printf("Length = %d\n", lenOfLongSubarr(arr, n, k));

    return 0;
}
