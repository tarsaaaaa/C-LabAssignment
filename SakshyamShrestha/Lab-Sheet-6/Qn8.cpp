/*
    Write a progarm to read number of employees, n working in a company.
    Reserve the memory required to store age of employees using malloc().
    Read age of n employees from user and count the number of employees of age above 80.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    int* ages = (int*)malloc(n * sizeof(int));
    if (ages == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    printf("Enter the ages of %d employees:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ages[i]);
    }

    int countAbove80 = 0;
    for (int i = 0; i < n; i++) {
        if (ages[i] > 80) {
            countAbove80++;
        }
    }

    printf("Number of employees above age 80: %d\n", countAbove80);

    free(ages);
    
    return 0;
}