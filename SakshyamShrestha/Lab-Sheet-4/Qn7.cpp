/*
    Write a program to display factorial of a given number using recursive function.
*/

#include <stdio.h>

long int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

int main() {
    int number;
    long int result;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    result = factorial(number);
    printf("Factorial of %d is: %ld\n", number, result);

    return 0;
}