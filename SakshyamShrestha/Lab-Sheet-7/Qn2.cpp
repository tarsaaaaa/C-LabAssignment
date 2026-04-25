/*
    Write a program to open file "test.txt" created in the previous question, read its content and display it on screen.
*/

#include <stdio.h>

int main() {
    char ch;
    FILE *fp = fopen("test.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}