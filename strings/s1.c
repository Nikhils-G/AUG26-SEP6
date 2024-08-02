
#include <stdio.h>
#include <string.h>

int passwordcheck(char str[], int n) {
    if (n == 0 || n < 4) {
        return 0;
    }
    if (str[0] >= '0' && str[0] <= '9') {
        return 0;
    }
    int has_upper = 0, has_digit = 0, has_invalid = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            has_upper = 1;
        } else if (str[i] >= '0' && str[i] <= '9') {
            has_digit = 1;
        } else if (str[i] == ' ' || str[i] == '/') {
            has_invalid = 1;
        }
    }
    if (has_invalid) {
        return 0;
    }
    if (has_upper && has_digit) {
        return 1;
    }
    return 0;
}

int main() {
    char str[] = "aA1_67";
    int n = strlen(str);
    if (passwordcheck(str, n)) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    return 0;
}
