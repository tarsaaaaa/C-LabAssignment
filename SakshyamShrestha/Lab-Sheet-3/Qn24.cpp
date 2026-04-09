/*
    Write a program to concatenate two strings without using string handling built in function.
*/

#include <stdio.h>

int main() {
    char str1[100], str2[100], concatenatedStr[200];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    int i = 0, j = 0;

    while (str1[i] != '\0') {
        concatenatedStr[j++] = str1[i++];
    }

    i = 0;
    while (str2[i] != '\0') {
        concatenatedStr[j++] = str2[i++];
    }
    concatenatedStr[j] = '\0';

    printf("Concatenated string: %s\n", concatenatedStr);

    return 0;
}