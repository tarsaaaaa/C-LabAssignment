/*
    Write a program that asks three coefficients of a
    quadraic equation and calculate its roots
*/

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float d, r1, r2;

    printf("Enter the three coefficients\na: "); scanf("%d", &a);
    printf("b: "); scanf("%d", &b);
    printf("c: "); scanf("%d", &c);

    d = (b*b - 4*a*c);

    r1 = (-b+sqrt(d)) / (2 * a);
    r2 = (-b-sqrt(d)) / (2 * a);

    printf("\nRoots of entered quadratic equation are: %.2f, %.2f", r1, r2);

    return 0;
}