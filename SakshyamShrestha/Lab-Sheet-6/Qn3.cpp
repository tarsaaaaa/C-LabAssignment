/*
    Write a program to read marks obtained by n students in a subject and display the top five students.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *marks;
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    marks = (int*)malloc(n * sizeof(int));

    if (marks == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter the marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (marks[j] < marks[j + 1]) {
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    printf("\nTop five students' marks:\n");
    for (int i = 0; i < 5 && i < n; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");

    free(marks);
    return 0;
}