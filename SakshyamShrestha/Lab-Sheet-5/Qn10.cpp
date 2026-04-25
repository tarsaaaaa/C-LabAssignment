/*
    Define a structure called date with three elements day, month and year. 
    Write a program to enter the date and print it.
*/

#include <stdio.h>

struct Date {
    int day;
    char month[10];
    int year;
};

int main() {
    struct Date date;

    printf("Enter day: ");
    scanf("%d", &date.day);
    printf("Enter month: ");
    scanf("%s", date.month);
    printf("Enter year: ");
    scanf("%d", &date.year);

    printf("Date: %d %s %d\n", date.day, date.month, date.year);

    return 0;
}