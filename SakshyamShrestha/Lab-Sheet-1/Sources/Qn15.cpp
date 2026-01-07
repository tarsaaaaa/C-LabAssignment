/*
    If a five digit number is entered through the keyboard.
    Write a program to calculate the sum of its digits
*/

#include <stdio.h>

int main() {
    int num, sum=0;
    printf("Enter a 5 digit number ");
    scanf("%d", &num);
    while(num>0) {
        sum = sum + num % 10;
        num/=10;
    }
    printf("Sum=%d", sum);
    return 0;
}