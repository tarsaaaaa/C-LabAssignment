/*
    Write a program to convert entered number of
    seconds into hours, minutes and seconds
*/

#include <stdio.h>

int main() {
    int seconds, minutes, hours;
    printf("Enter your time in seconds");
    scanf("%d", &seconds);
    hours = seconds/3600;
    minutes = (seconds - (hours * 3600)) / 60;
    seconds = seconds - (hours*3600) - (minutes*60);
    printf("hours=%d\nminutes=%d\nseconds=%d", hours, minutes, seconds);
    return 0;
}