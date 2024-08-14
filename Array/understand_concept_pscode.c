#include <stdio.h>

int main() {
    int w = 1, x = 1, y, z;

    for (y = 11; y <= 20; y++) {
        for (z = -3; z <= 0; z++) {
            w = w + 5;
            if (w > y)
                continue;
            w = 1;
            if (w > z)
                break; // Jump out of the inner loop
        }
    }

    printf("%d\n", w + x);
    return 0;
}
#include <stdio.h>

int main() {
    int a = 1, b = 1, c, d;

    for (c = 1; c <= 2; c++) {
        for (d = -2; d <= 0; d++) {
            a = a + 2;
            if (a > c)
                continue;
            a = 1;
            if (a > d)
                break; // Jump out of the inner loop
        }
    }

    printf("%d\n", a + b);
    return 0;
}
