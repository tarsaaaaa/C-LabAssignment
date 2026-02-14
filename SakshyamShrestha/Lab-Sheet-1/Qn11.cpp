/*
    Write a program that will convert temperature in centigrade
    into fahrenheit
*/

#include <stdio.h>

int main() {
    float c, f;
    printf("Enter your temperature in celcius ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("temperature in fahrenheit=%.2f", f);
    return 0;
}