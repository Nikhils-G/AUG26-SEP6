#include <stdio.h>

// Function to calculate the total chocolates student A will have
int chocolatesForStudentA(int A[], int N) {
    int totalChocolatesA = 0;
    
    for (int i = 0; i < N; i++) {
        // Each jar A[i] is split into 3 students
        totalChocolatesA += (A[i] + 2) / 3;
    }
    
    return totalChocolatesA;
}

int main() {
    int N;
    
    // Input the number of jars
    printf("Enter the number of jars: ");
    scanf("%d", &N);
    
    int A[N];
    
    // Input the chocolates in each jar
    printf("Enter the chocolates in each jar: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    // Calculate and output the total chocolates for student A
    int result = chocolatesForStudentA(A, N);
    printf("Total chocolates for student A: %d\n", result);
    
    return 0;
}
