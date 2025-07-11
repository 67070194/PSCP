//Lab 02-11 Number
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x = n / 1000;
    int y = n % 1000;

    printf("%d%02d\n", y, x);

    return 0;
}