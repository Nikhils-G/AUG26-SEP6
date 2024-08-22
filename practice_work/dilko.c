#include <stdio.h>
#include <string.h>

int check(int arr[], char str[], int n) {
    int max = 0;
    int current = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'P') {
            current += arr[i];
        } else if (str[i] == 'N') {
            current -= arr[i];
        }
        if (current > max) {
            max = current;
        }
    }
    return max * 100;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    char str[] = "PPNNP";
    
    int result = check(arr, str, n);  // Corrected function call
    printf("%d\n", result);
    
    return 0;
}
