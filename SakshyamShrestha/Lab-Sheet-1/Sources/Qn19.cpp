/*
    Write a program that asks a number and print the
    remainder after dividing the number by 5
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    printf("Remainder after dividing by 5=%d", num%5);
    return 0;
}