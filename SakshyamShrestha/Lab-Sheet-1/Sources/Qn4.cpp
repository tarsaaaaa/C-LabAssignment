/*
    The length and breadth are inputs through the keyboard.
    Write a program to calculate the area and perimeter of 
    the rectangle
*/

#include <stdio.h>

int main() {
    int l, b;
    printf("Enter length:");
    scanf("%d", &l);
    printf("Breadth:");
    scanf("%d", &b);
    printf("Area=%d\nPerimeter=%d", l*b, 2*(l+b));
    return 0;
}