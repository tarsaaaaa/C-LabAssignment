/*
    Write a program to read three sides of a 
    triangle and calculate the area
*/

#include <stdio.h>
#include <cmath>

int main() {
    float a, b, c, s, area;
    printf("Enter the three sides of the triangle\na ");
    scanf("%f", &a);
    printf("b ");
    scanf("%f", &b);
    printf("c ");
    scanf("%f", &c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle=%.2f", area);
    return 0;
}