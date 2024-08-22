#include <stdio.h>
#include <math.h>

// Function to calculate the sum of the first n terms of a GP
double geometricSum(double secondTerm, double thirdTerm, int n) {
    // Calculate the common ratio (r)
    double r = thirdTerm / secondTerm;

    // First term (a) of the GP
    double firstTerm = secondTerm / r;

    // Sum of the first n terms of a GP
    double sum;
    if (r == 1)
    {
      sum = n * firstTerm;  // If r is 1, it's just n * a
    } 
    else
    {
        sum = firstTerm * (1 - pow(r, n)) / (1 - r);
    }

    return sum;
}

int main() {
    double secondTerm, thirdTerm;
    int n;
    
    // Example inputs
    secondTerm = 3.0;
    thirdTerm = 9.0;
    n = 4;

    // Calculate and print the sum rounded to 3 decimal places
    double result = geometricSum(secondTerm, thirdTerm, n);
    printf("%.3f\n", result);
    
    return 0;
}
