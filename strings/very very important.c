#include <stdio.h>
#include <string.h>

// Function to find the longest common prefix
void longestCommonPrefix(char* ar[], int n, char* result) {
    if (n == 0) {
        result[0] = '\0';
        return;
    }

    // Initialize the prefix to the first string
    strcpy(result, ar[0]);

    // Compare prefix with all other strings
    for (int i = 1; i < n; i++) {
        int j = 0;
        // Update the prefix length by comparing with current string
        while (j < strlen(result) && j < strlen(ar[i]) && result[j] == ar[i][j]) {
            j++;
        }
        result[j] = '\0';  // Update the prefix
    }
}

// Driver Code
int main() {
    char* ar[] = {"geeksforgeeks", "geeks", "geek", "geezer"};
    int n = sizeof(ar) / sizeof(ar[0]);
    char result[100]; // Assuming the result will not exceed 100 characters

    longestCommonPrefix(ar, n, result);

    printf("The longest common prefix is: %s\n", result);
    return 0;
}
