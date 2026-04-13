/*
    Write a program to give the square of the given number
    if it is odd and cube if it is even
*/

#include <stdio.h>

int main() {
    int n, r;
    printf("Enter a number ");
    scanf("%d", &n);
    r = n%2==0 ? n*n*n: n*n;
    printf("Result=%d", r);
    return 0;
}