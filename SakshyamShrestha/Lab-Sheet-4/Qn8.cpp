/*
    Write a program to  calculate the sum of series 1+2+3+...+n using recursive function.
*/

#include <stdio.h>

int sumOfSeries(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sumOfSeries(n - 1);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = sumOfSeries(number);
    printf("The sum of the series 1 + 2 + ... + %d is: %d\n", number, result);

    return 0;
}