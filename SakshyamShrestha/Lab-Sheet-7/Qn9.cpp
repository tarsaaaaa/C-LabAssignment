/*
    Write a program to create a data file and write the natural numbers 1 to 20 to this file and then read the numbers from the file to display the twice of the stored numbers
*/

#include <stdio.h>

int main() {
    FILE *fp; int i;

    fp = fopen("natNum.dat", "w");
    if (fp == NULL) {
        printf("Error creating file.");
        return 1;
    }

    for (i = 1; i <= 20; i++) {
        fprintf(fp, "%d\n", i);
    }

    fclose(fp);

    fp = fopen("natNum.dat", "r");
    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }

    printf("Even numbers read from file: \n");

    while ((fscanf(fp, "%d", &i)) != EOF) {
        printf("%d\n", 2 * i);
    }

    fclose(fp);
    return 0;
}