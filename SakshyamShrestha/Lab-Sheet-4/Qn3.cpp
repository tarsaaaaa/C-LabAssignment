/*
    Write a function which receives a float and int from main(), 
    finds the produst of these two and returns which is printed in main().
*/

#include <stdio.h>

float product(float a, int b) {
    return a * b;
}

int main() {
    float num1;
    int num2;

    printf("Enter a float and an integer: ");
    scanf("%f %d", &num1, &num2);

    float result = product(num1, num2);
    printf("The product of %.2f and %d is: %.2f\n", num1, num2, result);

    return 0;
}

