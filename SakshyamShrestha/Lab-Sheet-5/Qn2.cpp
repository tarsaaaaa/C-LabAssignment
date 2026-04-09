/*
    Create a structure named student that has name, roll, marks and remarks as members.
    Assume approprite types and sizes of members.
    Write a program using structure to read and display the data entered by user.
*/

#include <stdio.h>

struct student {
    char name[20];
    int roll;
    float marks;
    char remarks[50];
};

int main() {
    struct student s;

    printf("Enter student details:\n");
    printf("Name: ");
    scanf("%s", s.name);
    printf("Roll: ");
    scanf("%d", &s.roll);
    printf("Marks: ");
    scanf("%f", &s.marks);
    printf("Remarks: ");
    scanf("%s", s.remarks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    printf("Remarks: %s\n", s.remarks);

    return 0;
}