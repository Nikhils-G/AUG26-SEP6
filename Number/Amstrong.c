#include<stdio.h>
#include<math.h>

int isArmstrong(int n)
{
    int originalNum = n;
    int sum = 0;
    int numDigits = 0;
    int temp = n;

    while (temp != 0) {
        temp /= 10;
        numDigits++;
    }

    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, numDigits);
        temp /= 10;
    }

    if (sum == originalNum) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int n = 153;
    if (isArmstrong(n)) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}
