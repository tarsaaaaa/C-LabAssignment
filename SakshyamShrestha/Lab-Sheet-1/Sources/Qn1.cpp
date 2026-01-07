/*
    Write a program to find addition, subtraction, multiplication
    and division of two numbers entered by the user 
*/

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers ");
    scanf("%d%d", &a, &b);
    printf("Sum=%d\n", a+b);
    printf("Difference=%d\n", a-b);
    printf("Product=%d\n", a*b);
    printf("Division=%.2f", (float) a/b);
    return 0;
}