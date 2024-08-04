#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE 26

void printCommonCharacters(char str1[], char str2[]) {
    int count1[ALPHABET_SIZE] = {0}; // To keep track of characters in str1
    int count2[ALPHABET_SIZE] = {0}; // To keep track of characters in str2

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Count occurrences of each character in str1
    for (int i = 0; i < len1; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            count1[str1[i] - 'a']++;
        }
    }

    // Count occurrences of each character in str2
    for (int i = 0; i < len2; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            count2[str2[i] - 'a']++;
        }
    }

    // Print common characters
    printf("Common characters: ");
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (count1[i] > 0 && count2[i] > 0) {
            printf("%c ", i + 'a');
        }
    }
    printf("\n");
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline character

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline character

    printCommonCharacters(str1, str2);

    return 0;
}
