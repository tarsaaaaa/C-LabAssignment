/*
    Write a program that determines how many lower case, uppercase and spaces are in a string.
*/

#include <stdio.h>

int main() {
    char str[100];
    int lowerCaseCount = 0, upperCaseCount = 0, spaceCount = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            lowerCaseCount++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            upperCaseCount++;
        } else if (str[i] == ' ') {
            spaceCount++;
        }
    }

    printf("Lowercase letters: %d\n", lowerCaseCount);
    printf("Uppercase letters: %d\n", upperCaseCount);
    printf("Spaces: %d\n", spaceCount);

    return 0;
}