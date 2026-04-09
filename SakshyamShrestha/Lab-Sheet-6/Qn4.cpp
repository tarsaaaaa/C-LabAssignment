/*
    Write a program to print the size of pointers that holds the address of three different type variables int, float, char.
*/

#include <stdio.h>

int main() {
    int *intPtr;
    float *floatPtr;
    char *charPtr;

    printf("Size of pointer to int: %zu bytes\n", sizeof(intPtr));
    printf("Size of pointer to float: %zu bytes\n", sizeof(floatPtr));
    printf("Size of pointer to char: %zu bytes\n", sizeof(charPtr));

    return 0;
}