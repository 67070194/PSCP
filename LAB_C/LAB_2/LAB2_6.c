//Lab 02-06 Multi Inputs
#include <stdio.h>

int main() {
    char a[31], b[31], c[31], d[31];
    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);
    scanf("%s", d);

    printf("String 1: ");
    for(int i = 0; i < 3; i++) {
        printf("%c", a[i]);
    }
    printf("\n");

    printf("String 2: ");
    for(int i = 0; i < 4; i++) {
        printf("%c", b[i]);
    }
    printf("\n");

    printf("String 3: ");
    for(int i = 0; i < 5; i++) {
        printf("%c", c[i]);
    }
    printf("\n");

    printf("String 4: ");
    for(int i = 0; i < 6; i++) {
        printf("%c", d[i]);
    }
    printf("\n");

    return 0;
}