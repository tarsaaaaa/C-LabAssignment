/*
    Write a program to read the name, rollno and mark of 5 students using array of structure.
    Display the name and rollno of those students whose mark is greater than 50.
*/

#include <stdio.h>

struct student {
    char name[20];
    int rollno;
    float mark;
};

int main() {
    struct student students[5];

    printf("Enter details of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].rollno);
        printf("Mark: ");
        scanf("%f", &students[i].mark);
    }

    printf("\nStudents with marks greater than 50:\n");
    
    for (int i = 0; i < 5; i++) {
        if (students[i].mark > 50) {
            printf("Name: %s, Roll No: %d\n", students[i].name, students[i].rollno);
        }
    }

    return 0;
}