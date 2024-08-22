#include <stdio.h>
#include <limits.h>

// Function to calculate the minimum number of jumps to reach the end
int minJumps(int arr[], int n) {
    if (n <= 1)
        return 0;

    if (arr[0] == 0)
        return -1;

    int maxReach = arr[0];
    int steps = arr[0];
    int jumps = 1;

    for (int i = 1; i < n; i++) {
        if (i == n - 1)
            return jumps;
            
        if (i + arr[i] > maxReach)
        {
            maxReach = i + arr[i];
        }
        
        
        
        steps--;

        if (steps == 0) {
            jumps++;
            if (i >= maxReach)
                return -1;

            steps = maxReach - i;
        }
    }

    return -1;
}

int main() {
    int arr[] = {2, 3, 1, 1, 4} ;  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = minJumps(arr, n);
    
    printf("Minimum number of jumps to reach the end: %d\n", result);
    
    return 0;
}
