/*
    Write a program to read marks of 10 students and print out the top five.
*/

#include <stdio.h>

int main() {
    int marks[10];

    printf("Enter marks of 10 students:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (marks[j] < marks[j + 1]) {
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    printf("\nTop five marks:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");

    return 0;
}