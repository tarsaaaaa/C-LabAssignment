/*
    Twenty five numbers are entered through the keyboard into an array. 
    Write a program to find out how many of them are positive, how many are negative, how many are even and how many are odd.
*/

#include <stdio.h>

int main() {
    int arr[25];
    int positiveCount = 0, negativeCount = 0, evenCount = 0, oddCount = 0;

    printf("Enter 25 numbers:\n");
    for (int i = 0; i < 25; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 25; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        }

        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("\nPositive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Even numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);

    return 0;
}