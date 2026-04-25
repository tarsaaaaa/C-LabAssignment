/*
    Write a progarm that reads name, address and telephone saves it in a file and display them on screen.
*/

#include <stdio.h>

int main() {
    char name[50], address[100], telephone[15];
    FILE *file;

    file = fopen("contact_info.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter your name: ");
    scanf("%s", name); fflush(stdin);
    printf("Enter your address: ");
    scanf("%s", address); fflush(stdin);
    printf("Enter your telephone number: ");
    scanf("%s", telephone); fflush(stdin);

    fprintf(file, "Name:%s\n", name);
    fprintf(file, "Address:%s\n", address);
    fprintf(file, "Telephone:%s\n", telephone);

    fclose(file);

    file = fopen("contact_info.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nContact Information:\n");
    while (fgets(name, sizeof(name), file) != NULL) {
        printf("%s", name);
    }
    return 0;
}