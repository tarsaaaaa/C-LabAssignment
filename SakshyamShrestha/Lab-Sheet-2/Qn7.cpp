/*
    Write a program to enter the numbers till the user wants
    to and at the end it should display the count of positive,
    negative and zeros entered
*/

#include <stdio.h>

int main() {
    int countZero = 0, countPos = 0, countNeg = 0, n;
    char c = 'y'; bool running = true;

    while (running) {
        printf("Enter a number: "); scanf("%d", &n);

        if (n < 0) countNeg++;
        else if (n > 0) countPos++;
        else countZero++;

        printf("Do you wish to continue? (y/n): "); scanf("%c", &c);
        while (c == '\n') scanf("%c", &c);

        if (c == 'n') running = false;

    }

    printf("Count:\nZeros: %d\nPositive Numbers: %d\nNegative Numbers: %d", countZero, countPos, countNeg);
    return 0;
}