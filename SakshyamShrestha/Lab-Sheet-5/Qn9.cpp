/*
    Write a program to define a structure Date and declare its variable called date1 and initialize it to february 25, 1957 int he correct format.
*/

#include <stdio.h>

struct Date {
    int day;
    char month[10];
    int year;
};

int main() {
    struct Date date1 = {25, "February", 1957};

    printf("Date: %d %s %d\n", date1.day, date1.month, date1.year);

    return 0;
}