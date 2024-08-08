#include <stdio.h>
#include <string.h>

// Function to find the longest common prefix
char *longestCommonPrefix(char arr[][200], int n) {
    static char result[200];
    int len = strlen(arr[0]);
    
    for (int i = 0; i < len; i++) {
        char c = arr[0][i];  // Character to match in all strings
        
        for (int j = 1; j < n; j++) {
            if (arr[j][i] != c) {
                result[i] = '\0';  // Null-terminate and return
                return result;
            }
        }
        
        result[i] = c;
    }
    
    result[len] = '\0';
    return result;
}

// Driver function
int main() {
    char arr[4][200] = {"geeksforgeeks", "geeks", "geek", "geezer"};
    int n = 4;
    
    printf("The longest common prefix is: %s\n", longestCommonPrefix(arr, n));
    
    return 0;
}
