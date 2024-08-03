#include <stdio.h>

// Function to print all prime factors of a given number
void primeFactors(int n) {
    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }

    // n must be odd at this point, so we can skip even numbers
    for (int i = 3; i <= n / 2; i += 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    // This condition is to handle the case when n is a prime number
    // greater than 2
    if (n > 2)
        printf("%d ", n);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime factors of %d are: ", n);
    primeFactors(n);
    return 0;
}
