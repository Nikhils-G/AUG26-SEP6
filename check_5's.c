#include <stdio.h>

void div90(int arr[], int n) {
    int count0 = 0;
    int count5 = 0;

    // Count the number of 0s and 5s in the array
    for(int i = 0; i < n; i++) {
        if(arr[i] == 5) {
            count5++;
        } else if(arr[i] == 0) {
            count0++;
        }
    }

    // If there are no 0s, it's not possible to form a number ending in 0
    if(count0 == 0) {
        printf("0\n");
        return;
    }

    // Calculate the largest multiple of 9 using the 5s available
    int term = count5 - (count5 % 9); // This should be 10 for count5 = 11

    // If no multiple of 9 can be formed, print 0
    if(term == 0) {
        printf("0\n");
        return;
    }

    // Print '5' term times
    for(int i = 0; i < term; i++) {
        printf("5");
    }

    // Print '0' count0 times
    for(int i = 0; i < count0; i++) {
        printf("0");
    }

    printf("\n");
}

int main() {
    int arr[] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 5, 5};
    int n = sizeof(arr) / sizeof(int);
    div90(arr, n);
    return 0;
}
