#include <stdio.h>
#include <string.h>

void reverse(char str[], int len) {
    int start = 0;
    int end = len - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

const char* find_rhyme(const char* input1, const char* input2[], int n) {
    static char res[100] = "No Word";
    int max_val = 0;
    char t[100];
    strcpy(t, input1);
    int len_t = strlen(t);
    reverse(t, len_t);

    for (int k = 0; k < n; k++) {
        char word[100];
        strcpy(word, input2[k]);
        if (strcmp(word, input1) != 0) {
            int curr = 0;
            char s[100];
            strcpy(s, word);
            int len_s = strlen(s);
            reverse(s, len_s);

            int i = 0;
            while (i < len_s && i < len_t) {
                if (s[i] == t[i]) {
                    curr++;
                } else {
                    break;
                }
                i++;
            }
            if (curr > max_val) {
                max_val = curr;
                strcpy(res, word);
            }
        }
    }
    return res;
}

int main() {
    const char* S = "example";  // Example string S
    const char* D[] = {"apple", "ample", "sample", "temple"};  // Example dictionary D
    int n = sizeof(D) / sizeof(D[0]);

    const char* result = find_rhyme(S, D, n);
    printf("%s\n", result);
    return 0;
}
