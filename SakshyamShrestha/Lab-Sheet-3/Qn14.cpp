/*
    Write a program to find the length of string input from user using and without using library function.
*/

#include <stdio.h>
#include <string.h>

int stringLengthWithoutLib(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int lengthWithLib = strlen(str);

    int lengthWithoutLib = stringLengthWithoutLib(str);

    printf("Length of string:\nWithout library function: %d\nWith library function: %d\n", lengthWithoutLib - 1, lengthWithLib - 1);
    return 0;
}
