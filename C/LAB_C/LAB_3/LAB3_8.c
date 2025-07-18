#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    printf("%d s = %d d %d h %d m %d s\n", n, n / 86400, (n % 86400) / 3600, (n % 3600) / 60, n % 60);

    return 0;
}