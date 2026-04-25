/*
    Define a structure Employee and its variable called person1 and initialice it to "Hari", with a salary of $50000.
    who was hired on March 10th 2001
*/

#include <stdio.h>

struct HireDate {
    int day;
    int month;
    int year;
};


struct Employee {
    char name[50];
    float salary;
    struct HireDate hireDate;
};

int main() {
    struct Employee person1 = {"Hari", 50000.0, {10, 3, 2001}};

    printf("Employee Name: %s\n", person1.name);
    printf("Salary: $%.2f\n", person1.salary);
    printf("Hire Date: %d/%d/%d\n", person1.hireDate.day, person1.hireDate.month, person1.hireDate.year);

    return 0;
}