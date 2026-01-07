/*
    Write a program to input three digit numbers
    and reverse the number
*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, rev = 0;
    printf("Enter a 3 digit number: ");
    scanf("%d", &num);
    while (num > 0) {
        rev = rev*10 + num%10;
        num/=10;
    }
    printf("Reverse of number=%d", rev);
    return 0;
}