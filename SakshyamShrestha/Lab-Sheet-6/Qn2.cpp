/*
    Write a program to find the sum of all the elements of an array using pointer.
*/

#include <stdio.h>

int main() {
    int arr[10], sum = 0;
    int *ptr = arr;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        sum += *ptr;
        ptr++;
    }

    printf("The sum of all the elements in the array is: %d\n", sum);
    return 0;
}