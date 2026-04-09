/*
    Write a program to accept two numbers perform addition, subtraction,
    multiplication and division between them using user defined functions.
*/

#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0; 
    }
}

int main() {
    float num1, num2;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Addition: %.2f\n", add(num1, num2));
    printf("Subtraction: %.2f\n", subtract(num1, num2));
    printf("Multiplication: %.2f\n", multiply(num1, num2));
    printf("Division: %.2f\n", divide(num1, num2));

    return 0;
}