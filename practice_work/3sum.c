#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

// Comparison function for qsort
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// Function to check if a triplet is already present in the array of triplets
int isUnique(int triplets[][3], int size, int triplet[]) {
    for (int i = 0; i < size; i++) {
        if (triplets[i][0] == triplet[0] && triplets[i][1] == triplet[1] && triplets[i][2] == triplet[2]) {
            return 0; // Not unique
        }
    }
    return 1; // Unique
}

// Function to find all unique triplets that sum up to zero
int triplet(int n, int arr[], int triplets[][3]) {
    int tripletCount = 0;

    // Check all possible triplets
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == 0) {
                    int temp[3] = {arr[i], arr[j], arr[k]};
                    // Sort the triplet
                    qsort(temp, 3, sizeof(int), compare);
                    // Check uniqueness and add if unique
                    if (isUnique(triplets, tripletCount, temp)) {
                        triplets[tripletCount][0] = temp[0];
                        triplets[tripletCount][1] = temp[1];
                        triplets[tripletCount][2] = temp[2];
                        tripletCount++;
                    }
                }
            }
        }
    }

    return tripletCount;
}

int main() {
    int arr[] = {-1, 0, 1, 2, -1, -4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int triplets[MAX_SIZE][3];
    int tripletCount = triplet(n, arr, triplets);

    printf("The unique triplets are:\n");
    for (int i = 0; i < tripletCount; i++) {
        printf("[");
        for (int j = 0; j < 3; j++) {
            printf("%d ", triplets[i][j]);
        }
        printf("]\n");
    }

    return 0;
}
