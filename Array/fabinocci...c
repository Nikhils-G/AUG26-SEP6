#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid input");
        return 0;
    }

    int f1 = 0, f2 = 1;
    printf("%d %d ", f1, f2);

    for(int i = 2; i < n; i++) {  // Loop should run from 2 to n-1
        int next = f1 + f2;
        printf("%d ", next);
        f1 = f2;
        f2 = next;
    }

    return 0;
}
