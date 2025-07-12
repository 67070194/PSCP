//Lab 02-07 IT Registrar
#include <stdio.h>

int main() {
    char first[31], last[31];
    int id, day, month, year;
    float gpa;

    scanf("%s", first);
    scanf("%s", last);
    scanf("%d", &id);
    scanf("%d/%d/%d", &day, &month, &year);
    scanf("%f", &gpa);

    printf("Fullname: %s %s\n", first, last);
    printf("ID: %08d\n", id);
    printf("DOB: %02d-%02d-%04d\n", day, month, year);
    printf("GPA: %.2f\n", gpa);

    return 0;
}