/*
    Create a file named test.txt and write some text "Welcome to my college" in the file.
*/

#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "Welcome to my college");
    fclose(fp);
    return 0;
}