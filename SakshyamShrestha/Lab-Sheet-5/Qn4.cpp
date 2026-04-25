/*
    Write a program to read the anme, address and salary of 5 employee using array of structure. 
    Display the information of each employee in ascending order of their name.
*/

#include <stdio.h>
#include <string.h>

struct employee {
    char name[20];
    char address[50];
    float salary;
};

int main() {
    struct employee employees[5], temp;

    printf("Enter details of 5 employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Address: ");
        scanf("%s", employees[i].address);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (strcmp(employees[j].name, employees[j + 1].name) > 0) {
                temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }

    printf("\nEmployee details in ascending order of names:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, Address: %s, Salary: %.2f\n", employees[i].name, employees[i].address, employees[i].salary);
    }

    return 0;
}