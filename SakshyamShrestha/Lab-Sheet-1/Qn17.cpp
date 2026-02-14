/*
    Enter a number in decimal and print it
    in octal and hexadecimal
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number ");
    scanf("%d", &num);
    printf("Octal=%o", num);
    printf("Hexadecimal=%X", num);
    return 0;
}