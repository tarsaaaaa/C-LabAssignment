/*
    Write a program to convert entered number of days
    into years, months and days
*/

#include <stdio.h>

int main() {
    int days, months, years;
    printf("Enter no. of days ");
    scanf("%d", &days);
    years = days / 365;
    months = (days - (years*365))/30;
    days = days - (years*365) - (months*30);
    printf("Years=%d\nmonths=%d\ndays=%d", years, months, days);
    return 0; 
}