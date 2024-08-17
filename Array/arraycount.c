#include <stdio.h>

int check(int arr[], int n) {
    int sum = 0;
    
    int total = (n+1) / 2 * (arr[0] * 2 + (n));

    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int element = 0;
    if (sum == total) {
        printf("Everything is Correct!!\n");
    } else {
        element = total - sum;
    }

    return element;
}

int main() {
    int arr[] = {89,90,91,92,94};//only for sorted arrays 
    int n = sizeof(arr) / sizeof(arr[0]);
    int a = check(arr, n);
    printf("%d\n", a);

    return 0;
}
