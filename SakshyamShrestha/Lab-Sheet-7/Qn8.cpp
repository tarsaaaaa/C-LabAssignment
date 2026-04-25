/*
    Write a program to write adn read even numbers between 10 and 50 to a file named evennumbers.txt
*/

#include <stdio.h>

int main() {
    FILE *fp; int i;

    fp = fopen("evennumbers.txt", "w");
    if (fp == NULL) {
        printf("Error creating file.");
        return 1;
    }

    for (i = 10; i <= 50; i++) {
        if (i%2 == 0) {
            fprintf(fp, "%d\n", i);
        }
    }

    fclose(fp);

    fp = fopen("evennumbers.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }

    printf("Even numbers read from file: \n");

    while ((fscanf(fp, "%d", &i)) != EOF) {
        printf("%d\n", i);
    }

    fclose(fp);
    return 0;
}