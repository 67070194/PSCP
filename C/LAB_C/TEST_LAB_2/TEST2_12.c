#include <stdio.h>
 
int main()
{
    char n[6];

    scanf(" %s", n);

    printf("%.1s%79s", n, " ");
    printf("%3.2s%77s", n, " ");
    printf("%5.3s%75s", n, " ");
    printf("%7.4s%73s", n, " ");
    printf("%9.5s%71s", n, " ");

    return 0;
}