/*
    Write a program to give the square of the given number
    if it is odd and cube if it is even
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    n%2==0 ? printf("Cube of no.=%d", n*n*n) : printf("Square of no.=%d", n*n);
    return 0;
}