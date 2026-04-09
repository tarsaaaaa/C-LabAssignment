/*
    Write a program that accepts the marks of BSC CSIT 1 semester students in C. 
    Now display the marks in descendion oder. Also display maximum and minimum marks.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *studentMarks;
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    studentMarks = (int*)malloc(numStudents * sizeof(int));
    if (studentMarks == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter the marks of %d students:\n", numStudents);
    for (int i = 0; i < numStudents; i++) {
        scanf("%d", &studentMarks[i]);
    }

    for (int i = 0; i < numStudents - 1; i++) {
        for (int j = 0; j < numStudents - 1 - i; j++) {
            if (studentMarks[j] < studentMarks[j + 1]) {
                int temp = studentMarks[j];
                studentMarks[j] = studentMarks[j + 1];
                studentMarks[j + 1] = temp;
            }
        }
    }

    printf("\nMarks in descending order:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%d ", studentMarks[i]);
    }

    printf("\n");
    printf("Maximum marks: %d\n", studentMarks[0]);
    printf("Minimum marks: %d\n", studentMarks[numStudents - 1]);

    return 0;
}