#include <stdio.h>

int main() {
    char a[31], b[31], c[31], d[31];

    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);
    scanf("%s", d);

    printf("String 1: %.3s\n", a);
    printf("String 2: %.4s\n", b);
    printf("String 3: %.5s\n", c);
    printf("String 4: %.6s\n", d);

    return 0;
}