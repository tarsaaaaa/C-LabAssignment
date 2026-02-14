/*
    Write a program to calculate factorial of a given number
*/

#include <stdio.h>

int main() {
    int n, f=1;
    printf("Enter a number ");
    scanf("%d", &n);
    for(int i=n; i>0; i--) {
        f*=i;
    }
    printf("Factorial=%d", f);
    return 0;
}