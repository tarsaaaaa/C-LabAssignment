/*
    Write a program to enter the numbers till the user wants
    to and at the end it should display the count of positive,
    negative and zeros entered
*/

#include <stdio.h>

int main() {
    int n=0, count_pos=0, count_neg=0, count_zero=0;
    char in;
    printf("Start inputing numbers and enter 'q' to end\n");
    while (true) {
        scanf("%c", &in);
        if (in == 'q') {
            break;
        }
        
        n = in - '0';
        printf("\n%d\t%c", n, in);
        if(n>0) {
            count_pos++;
        } else if(n<0) {
            count_neg++;
        } else {
            count_zero++;
        }
    }
    printf("Positive numbers entered=%d\nNegative numbers entered=%d\nZeros entered=%d", count_pos, count_neg, count_zero);
    return 0;
}