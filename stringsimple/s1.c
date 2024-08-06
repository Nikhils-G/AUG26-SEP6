#include <stdio.h>
#include <string.h>

// Function to remove the outermost parentheses of every primitive substring from the given string
void removeOuterParentheses(char* S, char* res) {
    int count = 0;
    int index = 0;
    for (int i = 0; i < strlen(S); i++) {
        char c = S[i];
        if (c == '(' && count++ > 0)
            res[index++] = c;
        if (c == ')' && count-- > 1)
            res[index++] = c;
    }
    res[index] = '\0';
}

// Driver Code
int main() {
    char S[] = "(()())(()";
    char res[100]; // Assuming the result will not exceed 100 characters
    
    removeOuterParentheses(S, res);
    
    printf("%s", res);
    
    return 0;
}
