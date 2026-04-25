/*
    Write a program to create a file named student.txt in D:\test\drive and write name, roll, address and marks of a student to this file.
*/

#include <stdio.h>

int main()
{
    char name[100], address[200];
    int roll, marks;

    printf("Enter student's name: ");
    scanf("%s", name); fflush(stdin);

    printf("Enter student's roll number: ");
    scanf("%d", &roll); fflush(stdin);

    printf("Enter student's address: ");
    scanf("%s", address); fflush(stdin);

    printf("Enter student's marks: ");
    scanf("%d", &marks); fflush(stdin);

    FILE *file = fopen("D:\\test\\student.txt", "w");

    if (file == NULL) {
        printf("Error opening file");
        return 1;
    }

    fprintf(file, "Name: %s\nRoll: %d\nAddress: %s\nMarks: %d\n", name, roll, address, marks);
    fclose(file);

    printf("Student information written to file successfully.\n");
    return 0;
}