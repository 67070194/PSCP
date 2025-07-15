#include <stdio.h>

int main() {
    char first[31], last[31];
    int id, date, month, year;
    float gpa;

    scanf("%s", first);
    scanf("%s", last);
    scanf("%d", &id);
    scanf("%d/%d/%d", &date, &month, &year);
    scanf("%f", &gpa);

    printf("Fullname: %s %s\n", first, last);
    printf("ID: %d\n", id);
    printf("DOB: %02d-%02d-%04d\n", date, month, year);
    printf("GPA: %.2f\n", gpa);

    return 0;
}