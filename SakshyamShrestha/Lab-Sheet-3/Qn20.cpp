/*
    Write a program tha t accepts a string and displays it ascii values.
*/

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("ASCII values of the characters in the string:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("Character: '%c', ASCII Value: %d\n", str[i], str[i]);
    }

    return 0;
}