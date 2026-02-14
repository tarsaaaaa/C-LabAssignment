/*
    Write a program to divide one integer by another integer
    and find the quotient and remainder
*/

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers ");
    scanf("%d%d", &a, &b);
    printf("Quotient=%d\nRemainder=%d", a/b, a%b);
    return 0;
}