#include <stdio.h>

// Function to calculate the minimum number of boxes needed
int minimumBoxes(int N, int E, int D) {
    int total_sweets_needed = E * D;  // Total sweets needed to survive for D days
    int total_sundays = D / 7;        // Number of Sundays in the given days
    int purchasable_days = D - total_sundays; // Days you can actually buy sweets
    int max_sweets_purchasable = purchasable_days * N; // Maximum sweets you can buy

    // If you can't buy enough sweets to survive
    if (max_sweets_purchasable < total_sweets_needed) {
        return -1;
    }

    // Minimum boxes needed to purchase
    int min_boxes_needed = total_sweets_needed / N;
    if (total_sweets_needed % N != 0) {
        min_boxes_needed++;  // Add an extra box if there's a remainder
    }

    return min_boxes_needed;
}

// Driver Code
int main() {
    int N = 10; // Number of sweets per box
    int E = 5;  // Number of sweets needed per day
    int D = 5;  // Number of days to survive

    int result = minimumBoxes(N, E, D);

    if (result == -1) {
        printf("Not possible to survive.\n");
    } else {
        printf("Minimum number of boxes needed: %d\n", result);
    }

    return 0;
}
