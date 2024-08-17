#include <stdio.h>
#include <string.h>
#include <math.h>
int decimal(int a)
{
    int sum=0;
    int i=0;
    while(a != 0)
    {
        int digit=a%10;
        sum += digit*pow(2,i);
        a /= 10;
        i++;
    }
    return sum;
}

int binary_operation(int a, int b, char* operator)
{
    a=decimal(a);
    b=decimal(b);
    if (strcmp(operator, "OR") == 0) {
        return a | b;
    } else if (strcmp(operator, "AND") == 0) {
        return a & b;
    } else if (strcmp(operator, "XOR") == 0) {
        return a ^ b;
    } else {
        return -1;
    }
}

int main() {
    int a = 1001;  // Example values
    int b = 1010;  // Example values
    char operator[] = "AND";
    int result = binary_operation(a, b, operator);
    if (result != -1) {
        printf("Result: %d\n", result);
    } else {
        printf("Invalid operator\n");
    }
    return 0;
}
