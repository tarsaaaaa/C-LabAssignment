/*
    Write a program to calculate the surface area of cube
*/

#include <stdio.h>

int main() {
    int l;
    printf("Enter side length of cube:");
    scanf("%d", &l);
    printf("Surface area=%d", 6*(l*l));
    return 0;
}