/*
    Two numbers are input through the keyboard.
    Write a program to interchange the contents.
*/

#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("Interchanged\na=%d\nb=%d", a, b);
    return 0;
}