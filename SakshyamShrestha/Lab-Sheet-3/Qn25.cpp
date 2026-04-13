/*
    Write a program to read names of 10 students and sort them in alphabetical order.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char names[10][100], temp[100];

    printf("Enter names of 10 students:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%s", names[i]);
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("\nNames in alphabetical order:\n");
    for (int i = 0; i < 10; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}