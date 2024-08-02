#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* DectoNBase(int n, int num) {
    if (n < 2 || n > 36 || num < 0) {
        return NULL; // Invalid input
    }

    char* notation = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char buffer[50]; // Buffer to store the result in reverse order
    int index = 0;

    // Edge case for 0
    if (num == 0) {
        buffer[index++] = '0';
    } else {
        while (num > 0) {
            int remainder = num % n;
            buffer[index++] = notation[remainder];
            num /= n;
        }
    }

    buffer[index] = '\0';

    // Reverse the buffer to get the correct n-base notation
    int length = strlen(buffer);
    char* result = (char*)malloc((length + 1) * sizeof(char));
    for (int i = 0; i < length; i++) {
        result[i] = buffer[length - i - 1];
    }
    result[length] = '\0';

    return result;
}

int main() {
    int n, num;
    printf("Enter base (n): ");
    scanf("%d", &n);
    printf("Enter number (num): ");
    scanf("%d", &num);

    char* result = DectoNBase(n, num);
    if (result) {
        printf("The %d-base notation of %d is: %s\n", n, num, result);
        free(result);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
