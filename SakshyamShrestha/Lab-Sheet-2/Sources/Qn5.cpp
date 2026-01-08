/*
    Write a program to print all numbers from 10 to 1 and find
    their sum using while loop 
*/

#include <stdio.h>

int main() {
    int i=10, sum=0;
    while(i>0) {
        printf("%d\t", i);
        sum+=i;
        i--;
    }
    printf("\nSum=%d", sum);
    return 0;
}