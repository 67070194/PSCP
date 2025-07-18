#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    printf("%.2f\n", a * (1 - b / 100) * c);

    return 0;
}