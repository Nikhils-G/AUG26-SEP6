#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_CHARS 256

// Function to check if two strings are isomorphic
bool areIsomorphic(const char *str1, const char *str2) {
    int m = strlen(str1);
    int n = strlen(str2);
    if (m != n) {
        return false;
    }
    char map1[MAX_CHARS];
    char map2[MAX_CHARS];
    memset(map1, -1, sizeof(map1));
    memset(map2, -1, sizeof(map2));
    for (int i = 0; i < n; i++) {
        char c1 = str1[i];
        char c2 = str2[i];
        if (map1[(unsigned char)c1] == -1) {
            if (map2[(unsigned char)c2] != -1) {
                return false;
            }
            map1[(unsigned char)c1] = c2;
            map2[(unsigned char)c2] = c1;
        }
        else if (map1[(unsigned char)c1] != c2) {
            return false;
        }
    }

    return true;
}
int main() {
    const char *str1 = "aab";
    const char *str2 = "xxy";
    printf("%s\n", areIsomorphic(str1, str2) ? "True" : "False");
    return 0;
}
