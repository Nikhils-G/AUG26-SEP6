#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define n 5

int check(int mat[n][n]) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = i + 1; k < n; k++) {
                for (int l = j + 1; l < n; l++) {
                    if ((mat[k][l] - mat[i][j]) > max) {
                        max = (mat[k][l] - mat[i][j]);
                    }
                }
            }
        }
    }

    return max;
}

int main() {
    int arr[n][n] = {
        {1, 2, -1, -4, -20},
        {-8, -3, 4, 2, 1},
        {3, 8, 6, 1, 3},
        {-4, -1, 1, 7, -6},
        {0, -4, 10, -5, 1}
    };

    int a = check(arr);
    printf("%d\n", a);

    return 0;
}
