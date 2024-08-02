#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* MoveHyphen(char str[], int n) {
    if (str == NULL) {
        return NULL;
    }

    char* result = (char*)malloc((n + 1) * sizeof(char));
    if (result == NULL) {
        return NULL; // Handle memory allocation failure
    }

    int h = 0, w = 0;

    // First, count the hyphens
    for (int i = 0; i < n; i++) {
        if (str[i] == '-') {
            h++;
        }
    }

    // Fill the result array
    for (int i = 0; i < h; i++) {
        result[i] = '-';
    }

    for (int i = 0; i < n; i++) {
        if (str[i] != '-') {
            result[h++] = str[i];
        }
    }

    result[h] = '\0'; // Null-terminate the string

    return result;
}

int main() {
    char str[] = "Move-Hyphens-to-Front";
    int n = strlen(str);
    char* result = MoveHyphen(str, n);

    if (result != NULL) {
        printf("%s\n", result);
        free(result); // Free the allocated memory
    }

    return 0;
}
