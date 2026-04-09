/*
    Write a program to enter 10 different numbers and print them with array variables and their addresses.
*/

#include <stdio.h>

int main() {
    int arr[10];

    printf("Enter 10 different numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nNumbers and their addresses:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number: %d, Address: %p\n", arr[i], (int*) &arr[i]);
    }

    return 0;
}