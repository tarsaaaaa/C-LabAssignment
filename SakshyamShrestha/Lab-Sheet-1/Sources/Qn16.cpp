/*
    Two number are entered through keyboard and if the first
    number is greater than second number than print the sum of
    number otherwise print the difference of number
*/

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers ");
    scanf("%d%d", &a, &b);
    a>b?printf("Sum=%d", a+b) : printf("Difference=%d", a-b);
    return 0;
}