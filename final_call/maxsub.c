#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000  // Define the maximum length of the input string

int longest_substring_count(const char *input_string) {
    int max_length = 0;
    int current_length = 0;
    
    // Iterate through each character in the input string
    for (int i = 0; i < strlen(input_string); i++) {
        if (input_string[i] == '.') {
            // If a period is found, check if the current substring is the longest
            if (current_length > max_length) {
                max_length = current_length;
            }
            // Reset the current substring length
            current_length = 0;
        } else {
            // Increment the current substring length
            current_length++;
        }
    }
    
    // Final check for the last substring (if no period at the end)
    if (current_length > max_length) {
        max_length = current_length;
    }
    
    return max_length;
}

int main() {
    char input_string[MAX_LEN];
    
    printf("Enter the input string: ");
    fgets(input_string, sizeof(input_string), stdin);
    
    // Remove newline character if present
    input_string[strcspn(input_string, "\n")] = '\0';
    
    int result = longest_substring_count(input_string);
    printf("Length of the longest substring: %d\n", result);
    
    return 0;
}
