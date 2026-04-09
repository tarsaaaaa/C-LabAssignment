/*
    Write a program that accepts the string and display it in reverse order using and without using strrev() function.
*/

#include <stdio.h>
#include <string.h>

void reverseStringWithoutLib(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    char reversedStr[100];
    for (int i = 0; i < length; i++) {
        reversedStr[i] = str[length - 1 - i];
    }
    reversedStr[length] = '\0';

    printf("Reversed string (without using library function): %s\n", reversedStr);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    char reversedStr[100];
    strcpy(reversedStr, str);
    strrev(reversedStr);
    printf("Reversed string (using library function): %s\n", reversedStr);

    reverseStringWithoutLib(str);

    return 0;
}
