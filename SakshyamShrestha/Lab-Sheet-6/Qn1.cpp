/*
    Write a program which defines three variables of different types: char, float, and int.
    Display the memory address reserved by these variables.
*/

#include <stdio.h>

int main() {
    char c;
    float f;
    int i;

    printf("Memory address of char variable: %p\n", (void*)&c);
    printf("Memory address of float variable: %p\n", (void*)&f);
    printf("Memory address of int variable: %p\n", (void*)&i);

    return 0;
}