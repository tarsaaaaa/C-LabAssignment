/*
    Write a program to compare two strings and display larger one.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    scanf("%s", str2);
    str2[strcspn(str2, "\n")] = '\0';

    if (strlen(str1) > strlen(str2)) {
        printf("The larger string is: %s\n", str1);
    } else if (strlen(str2) > strlen(str1)) {
        printf("The larger string is: %s\n", str2);
    } else {
        printf("Both strings are of equal length.\n");
    }

    return 0;
}