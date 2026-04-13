/*
    Two number are entered through keyboard and if the first
    number is greater than second number than print the sum of
    number otherwise print the difference of number
*/

#include <stdio.h>

int main() {
    int a, b, r;
    printf("Enter two numbers ");
    scanf("%d%d", &a, &b);
    r = a>b? a+b : a-b;
    printf("Result=%d", r);
    return 0;
}