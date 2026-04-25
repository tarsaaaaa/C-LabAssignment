/*
    Define a structure called date with three elements day, month and year.
    Write a program to enter two dates and print the difference.
*/

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date date1, date2;

    printf("Enter first date:\n");
    printf("Day: ");
    scanf("%d", &date1.day);
    printf("Month: ");
    scanf("%d", &date1.month);
    printf("Year: ");
    scanf("%d", &date1.year);

    printf("Enter second date:\n");
    printf("Day: ");
    scanf("%d", &date2.day);
    printf("Month: ");
    scanf("%d", &date2.month);
    printf("Year: ");
    scanf("%d", &date2.year);

    int dayDiff = date2.day - date1.day;
    int monthDiff = date2.month - date1.month;
    int yearDiff = date2.year - date1.year;

    if (dayDiff < 0) {
        dayDiff += 30;
        monthDiff--;
    }
    if (monthDiff < 0) {
        monthDiff += 12;
        yearDiff--;
    }

    printf("Difference: %d years, %d months, %d days\n", yearDiff, monthDiff, dayDiff);

    return 0;
}