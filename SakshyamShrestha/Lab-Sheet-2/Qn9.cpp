/*
    Write a program to display multiplication table from 1-10
*/

#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%dx%d=%d\n", i, j, i*j);
        }
        printf("\n");
    }
    
    return 0;
}