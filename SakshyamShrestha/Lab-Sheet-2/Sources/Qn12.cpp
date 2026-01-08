/*
    Write a program to find the products of digits of a number
*/

#include <stdio.h>

int main() {
    int n, prod=1;
    printf("Enter a number ");
    scanf("%d", &n);
    while(n>0) {
        prod*=n%10;
        n/=10;
    }
    printf("Product=%d", prod);
    return 0;
}