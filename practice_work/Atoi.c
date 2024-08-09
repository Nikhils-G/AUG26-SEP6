#include <stdio.h>
#include <limits.h>

int myAtoi(const char *str) {
    int i = 0;
    int sign = 1;
    long long result = 0;

    // Step 1: Ignore leading whitespace
    while (str[i] == ' ') {
        i++;
    }

    // Step 2: Determine the sign
    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-') {
            sign = -1;
        }
        i++;
    }

    // Step 3: Convert the number
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');

        // Step 4: Handle overflow
        if (sign * result <= INT_MIN) {
            return INT_MIN;
        }
        if (sign * result >= INT_MAX) {
            return INT_MAX;
        }

        i++;
    }

    return (int)(sign * result);
}

int main() {
    const char *str1 = "42";
    const char *str2 = "   -042";
    const char *str3 = "1337c0d3";
    const char *str4 = "0-1";
    const char *str5 = "words and 987";

    printf("%d\n", myAtoi(str1)); // Output: 42
    printf("%d\n", myAtoi(str2)); // Output: -42
    printf("%d\n", myAtoi(str3)); // Output: 1337
    printf("%d\n", myAtoi(str4)); // Output: 0
    printf("%d\n", myAtoi(str5)); // Output: 0

    return 0;
}
