/*
    Write a program that asks the radius of sphere
    and print the volume of sphere
*/

#include <stdio.h>

int main() {
    int r;
    printf("Enter radius ");
    scanf("%d", &r);
    printf("Volume=%.2f", (float) 4 * 3.14 * r * r * r / 3);
    return 0;
}