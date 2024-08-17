#include <stdio.h>

void printSpiral(int n, int m, int mat[n][m]) {
    int top = 0, left = 0, bottom = n - 1, right = m - 1;

    while (top <= bottom && left <= right) {
        // Move left to right
        for (int i = left; i <= right; i++)
            printf("%d ", mat[top][i]);
        top++;

        // Move top to bottom
        for (int i = top; i <= bottom; i++)
            printf("%d ", mat[i][right]);
        right--;

        // Move right to left
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                printf("%d ", mat[bottom][i]);
            bottom--;
        }

        // Move bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                printf("%d ", mat[i][left]);
            left++;
        }
    }
}

int main() {
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    printf("Spiral order of the matrix:\n");
    printSpiral(4, 4, mat);

    printf("\n");

    return 0;
}
