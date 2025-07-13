#include <stdio.h>

int main() {
    int i, a, n, min, max;
    scanf("%d", &a);

    scanf("%d", &n);
    min = n;
    max = n;

    for (i = 1; i < a; i++ ) {
        scanf("%d", &n);
        if (n < min) {
            min = n;
        }
        if (n > max) {
            max = n;
        }
    }

    printf("%d\n", min);
    printf("%d", max);

    return 0;
}