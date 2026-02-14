/*
    Write a program to generate Fibonacci series
*/

#include <stdio.h>

int main() {
    int n, term_before = 0, current_term = 1, temp;
    printf("Enter how many terms you want ");
    scanf("%d", &n);
    printf("0\t");
    for (int i = 0; i < n; i++) {
        printf("%d\t", current_term);
        temp = term_before + current_term;
        term_before = current_term;
        current_term = temp; 
    }
    return 0;
}