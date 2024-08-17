#include <stdio.h>
#define r 4
#define c 4

void spiral(int arr[r][c]) {
    int top = 0, left = 0, bottom = r - 1, right = c - 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            printf("%d ", arr[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            printf("%d ", arr[i][right]);
        }
        right--;
        
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d ", arr[bottom][i]);
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", arr[i][left]);
            }
            left++;
        }
    }
}

int main() {
    int arr[r][c] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    printf("Spiral:\n");
    spiral(arr);
    return 0;
}
