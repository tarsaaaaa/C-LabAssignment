/*
    Write a program to calculate a raised to the power b using recursive function.
*/

#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;

    printf("Enter the base and exponent: ");
    scanf("%d %d", &base, &exponent);

    int result = power(base, exponent);
    printf("%d raised to the power of %d is: %d\n", base, exponent, result);

    return 0;
}