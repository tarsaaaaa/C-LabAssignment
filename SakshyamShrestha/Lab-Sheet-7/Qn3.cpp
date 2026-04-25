/*
    Write a program to write and read string using character I/O.
*/

#include <stdio.h>

int main() {
    char str[100], ch;
    FILE *fp = fopen("test.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        putc(str[i], fp);
    }
    fclose(fp);

    fp = fopen("test.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Content of the file: ");
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}