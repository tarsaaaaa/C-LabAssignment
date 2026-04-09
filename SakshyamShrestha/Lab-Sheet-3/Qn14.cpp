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
    fgets(str, sizeof(str), stdin);

    int lengthWithLib = strlen(str);

    int lengthWithoutLib = stringLengthWithoutLib(str);

    printf("Length of the string (using library function): %d\n", lengthWithLib - 1); 
    printf("Length of the string (without using library function): %d\n", lengthWithoutLib - 1); 

    return 0;
}
