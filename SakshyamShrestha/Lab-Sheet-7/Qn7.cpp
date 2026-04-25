/*
    Write a program to store string to the data file "new1.dat" and display the same content on the monitor reading from the data file.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char str[100], ch;

    fp = fopen("new1.dat", "w");
    if (fp == NULL) {
        printf("Error creating file.");
        return 1;
    }

    printf("Enter a string: "); scanf("%s", str);

    fprintf(fp, "%s", str);

    fclose(fp);

    fp = fopen("new1.dat", "r");
    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }
    
    printf("Data read from file: ");
    while ((ch = getc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}