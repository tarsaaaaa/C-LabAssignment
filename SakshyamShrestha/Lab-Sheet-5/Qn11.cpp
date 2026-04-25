/*
    Declare a structure template that holds student access information into the student registration system.
    It should hold the 8 character student username, the student 9 character id number and the student 5 digit pin number.
    Write a program to ask the student information and display them.
*/

#include <stdio.h>

struct Student {
    char username[9];
    char id[10];
    char pin[6];
};

int main() {
    struct Student student;

    printf("Enter username (8 characters): ");
    scanf("%8s", student.username);
    printf("Enter ID number (9 characters): ");
    scanf("%9s", student.id);
    printf("Enter PIN number (5 digits): ");
    scanf("%5s", student.pin);

    printf("\nStudent Information:\n");
    printf("Username: %s\n", student.username);
    printf("ID Number: %s\n", student.id);
    printf("PIN Number: %s\n", student.pin);

    return 0;
}