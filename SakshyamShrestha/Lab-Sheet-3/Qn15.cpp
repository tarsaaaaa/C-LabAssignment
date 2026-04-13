/*
    Write a program that accepts a string from user and display the content in upper case.
*/

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("String in uppercase: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}