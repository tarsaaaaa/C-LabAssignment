/*
    Write a progarm that asks user for 10 numbers and stored them in a n array, Write this array to a file and read it to display on the screen
*/

#include <stdio.h>

int main() {
    FILE *fp; int arr[10];

    fp = fopen("arrNo.txt", "w");
    if (fp == NULL) {
        printf("Error creating file.");
        return 1;
    }

    printf("Enter 10 numbers: \n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        fprintf(fp, "%d\n", arr[i]);
    }

    fclose(fp);

    fp = fopen("arrNo.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }

    printf("Numbers read from file: \n");
    while ((fscanf(fp, "%d", &arr[0])) != EOF) {
        printf("%d\n", arr[0]);
    }

    fclose(fp);
    return 0;
}