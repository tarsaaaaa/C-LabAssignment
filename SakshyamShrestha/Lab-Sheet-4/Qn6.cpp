/*
    Write a program to calculate a  raised to power b using user defined function.
*/

#include <stdio.h>

int pawer(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exponent;

    printf("Enter the base and exponent: ");
    scanf("%d %d", &base, &exponent);

    int result = pawer(base, exponent);
    printf("%d raised to the power of %d is: %d\n", base, exponent, result);

    return 0;
}