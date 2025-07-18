#include <stdio.h>

int main() {
    double a, b;

    scanf("%lf %lf", &a, &b);

    printf("Perimeter of rectangle = %.4f units\n", (a * 2) + (b * 2));

    return 0;
}