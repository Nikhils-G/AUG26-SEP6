#include <stdio.h>
#include <string.h>
#include <limits.h>

#define ALPHABET_SIZE 26
int beautySum(const char *s) {
    int sum = 0; 
    int n = strlen(s);
    int charCounts[ALPHABET_SIZE];
    for (int start = 0; start < n; ++start) {
        memset(charCounts, 0, sizeof(charCounts));
        for (int end = start; end < n; ++end) {
            ++charCounts[s[end] - 'a'];
            int minFreq = INT_MAX, maxFreq = 0;
            for (int i = 0; i < ALPHABET_SIZE; ++i) {
                if (charCounts[i] > 0) {
                    if (charCounts[i] < minFreq) {
                        minFreq = charCounts[i];
                    }
                    if (charCounts[i] > maxFreq) {
                        maxFreq = charCounts[i];
                    }
                }
            }
            sum += maxFreq - minFreq;
        }
    }
    return sum;
}

int main() {
    char s1[] = "aabcb";
    char s2[] = "aabcbaa";
    
    printf("Output for '%s': %d\n", s1, beautySum(s1));
    printf("Output for '%s': %d\n", s2, beautySum(s2));
    
    return 0;
}
