#include <stdio.h>

// Function to map Roman numeral characters to their integer values
int romanToInt(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0; // Just a safeguard, should never be triggered for valid input
    }
}

// Function to convert a Roman numeral to an integer
int romanToInteger(const char *s) {
    int total = 0;
    int i = 0;

    while (s[i] != '\0') {
        int current = romanToInt(s[i]);
        int next = romanToInt(s[i + 1]);

        // If current value is less than the next, subtract it, otherwise add it
        if (current < next) {
            total -= current;
        } else {
            total += current;
        }
        i++;
    }

    return total;
}

int main() {
    const char *s1 = "III";
    const char *s2 = "LVIII";
    const char *s3 = "MCMXCIV";

    printf("The integer value of %s is %d\n", s1, romanToInteger(s1));
    printf("The integer value of %s is %d\n", s2, romanToInteger(s2));
    printf("The integer value of %s is %d\n", s3, romanToInteger(s3));

    return 0;
}
