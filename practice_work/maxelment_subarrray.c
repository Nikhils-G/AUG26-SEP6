#include<stdio.h>

int findMaxSum(int arr[], int n) {
    int max_element = arr[0];
    int sum = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > max_element) {
            max_element = arr[i];
        }
        sum += arr[i];
    }
    
    if(sum > max_element) {
        return sum;
    } else {
        return max_element;
    }
}

int main() {
    int arr[] = {-3, -1, -2};  // Example input
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = findMaxSum(arr, n);
    printf("Output: %d\n", result);
    
    return 0;
}
