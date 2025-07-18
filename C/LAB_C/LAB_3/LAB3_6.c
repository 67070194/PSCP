#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    printf("Volume : %.2fml\n", c * 3.14159265359 * pow(b / 2, 2));
    printf("Baht/ml : %.4f\n", a / (c * 3.14159265359 * pow(b / 2, 2)));

    return 0;
}