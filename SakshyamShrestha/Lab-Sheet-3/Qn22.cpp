/*
    Write a program to input a string and count number of vowels present in the string.
*/

#include <stdio.h>

int main() {
    char str[100];
    int vowelCount = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowelCount++;
        }
    }

    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}