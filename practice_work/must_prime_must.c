#include <stdio.h>

// Function to find and print all prime factors of a given number n
void findPrimeFactors(int n) {
    // Handle the number of 2s that divide n
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }
    
    // n must be odd at this point, so we can skip even numbers
    for (int i = 3; i * i <= n; i += 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    
    // This condition is to handle the case when n is a prime number
    // greater than 2
    if (n > 2) {
        printf("%d", n);
    }
    
    printf("\n");
}

int main() {
    int n;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Find and print the prime factors
    printf("Prime factors of %d are: ", n);
    findPrimeFactors(n);
    
    return 0;
}


#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n, count = 0;
    
    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("The first %d prime numbers are:\n", n);
    
    // Use a for loop to find the first n prime numbers
    for (int num = 2; count < n; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
    }
    
    printf("\n");
    
    return 0;
}
