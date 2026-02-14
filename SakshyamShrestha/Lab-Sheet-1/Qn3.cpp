/*
    Write a program to calculate the area and curcumference 
    of the circle
*/

#include <stdio.h>

int main() {
    int r;
    printf("Enter radius of circle ");
    scanf("%d", &r);
    printf("Area=%.2f\ncircumference=%.2f", (float) 3.14*r*r, (float) 2*3.14*r);
    return 0;
}