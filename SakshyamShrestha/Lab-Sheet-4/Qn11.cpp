/*
    Write a program to find the sum of first twenty natural numbers using function.
*/

#include <stdio.h>

int sumOfNaturalNumbers() {
    int sum = 0;
    for (int i = 1; i <= 20; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int result = sumOfNaturalNumbers();
    printf("The sum of the first 20 natural numbers is: %d\n", result);
    return 0;
}