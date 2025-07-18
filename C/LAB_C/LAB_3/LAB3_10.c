#include <stdio.h>
#include <math.h>

int main() {
    float a, b;

    scanf("%f %f", &a, &b);

    float BMI = b / ((a / 100) * (a / 100));

    printf("%f\n", BMI);

    return 0;
}