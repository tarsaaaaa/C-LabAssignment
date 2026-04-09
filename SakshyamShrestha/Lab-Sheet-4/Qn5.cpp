/*
    Write a program to find factorial of a given number using user defined function named 
    long int factorial(int, int);
*/

#include <stdio.h>

long int factorial(int num, int fact) {
    if (num == 0 || num == 1) {
        return fact;
    }
    return factorial(num - 1, fact * num);
}

int main() {
    int number;
    long int result;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }

    result = factorial(number, 1);
    printf("Factorial of %d is: %ld\n", number, result);

    return 0;
}