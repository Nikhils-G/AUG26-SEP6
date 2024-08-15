// Online C compiler to run C program online
#include <stdio.h>
// Recursive function to calculate factorial
long double fac(long double n) {
    if (n <= 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return n * fac(n - 1); // Recursive case
}
int main() {
    long double n = 100;
    printf("%Lf", fac(n)); // "%.0Lf" ensures no decimal point is printed
    return 0;
}
