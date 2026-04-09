/*
    Write a program to copy contents of one array into another in reverse order.
*/

#include <stdio.h>

int main() {
    int arr[10], reversedArr[10];

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        reversedArr[i] = arr[9 - i];
    }

    printf("\nReversed array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", reversedArr[i]);
    }
    printf("\n");

    return 0;
}