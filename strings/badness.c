#include <stdio.h>
#include <string.h>

int badness(char str[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] == 'W') {
            if (i > 0 && str[i-1] != 'W') {
                str[i] = str[i-1];
            } else if (i < n-1 && str[i+1] != 'W') {
                str[i] = str[i+1]; 
            }
        }
    }

    for (int i = 0; i < n-1; i++) {
        if (str[i] != str[i+1]) {
            count++;
        }
    }

    return count;
}

int main() {
    char str[] = "RRWWWWBRBRBR";
    int n = strlen(str);
    printf("%d\n", badness(str, n));
    return 0;
}
