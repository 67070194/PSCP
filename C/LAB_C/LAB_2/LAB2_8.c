//Lab 02-08 3 Person
#include <stdio.h>

int main() {
    char fname[31], sname[31], person2[31], person3[31];

    scanf("%s", fname);
    scanf("%s", sname);
    scanf(" %[^\n]", person2);
    scanf(" %[^\n]", person3);

    printf("Person 1: %s %s\n", fname, sname);
    printf("Person 2: %s\n", person2);
    printf("Person 3: %s\n", person3);

    return 0;
}