#include <stdio.h>

int main() {
    int n, M;
    scanf("%d", &n);  // Read the number of candies
    int prices[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);  // Read the price of each candy
    }
    scanf("%d", &M);  // Read the amount of money Bob has

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (prices[i] % 5 == 0) {
            // Candy is free
            count++;
        } else {
            // Check if Bob can afford the candy
            if (M >= prices[i]) {
                M -= prices[i];
                count++;
            }
        }
    }
    printf("%d\n", count);  // Print the number of candies Bob can buy

    return 0;
}
