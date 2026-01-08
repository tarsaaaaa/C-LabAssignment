/*
    Write a program to display multiplication table from 1-10
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    for(int i=1; i<=10; i++) {
        printf("%dx%d=%d\n", n, i, i*n);
    }
    return 0;
}