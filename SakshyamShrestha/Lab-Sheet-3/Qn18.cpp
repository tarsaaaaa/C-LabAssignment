/*
    Write a program that detertmines the string is apalindrome or not.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char reversedStr[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    for (int i = 0; i < length; i++) {
        reversedStr[i] = str[length - 1 - i];
    }
    reversedStr[length] = '\0';

    if (strcmp(str, reversedStr) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}