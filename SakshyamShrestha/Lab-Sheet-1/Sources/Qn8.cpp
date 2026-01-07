/*
    Write a peogram to convert length from mm to
    km, m, cm and mm
*/

#include <stdio.h>

int main() {
    long mm, cm, m, km;
    printf("Enter your length in mm: ");
    scanf("%ld", &mm);
    km = mm / 1000000;
    m = (mm - (km * 1000000))/1000;
    cm = (mm - (km * 1000000) - (m * 1000))/10;
    mm = mm - (km * 1000000) - (m * 1000) - (cm * 10);
    printf("km=%ld\nm=%ld\ncm=%ld\nmm=%ld", km, m, cm, mm);
    return 0;
}