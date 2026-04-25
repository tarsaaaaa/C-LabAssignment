/*
    Write a program that reads differenct names and address into the computer and sorts the names into alphabetical order using structure variables.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[100];
    char address[200];
};

int main()
{
    int n;
    printf("Enter number of people: ");
    scanf("%d", &n);

    struct Person *people = (struct Person *)malloc(n * sizeof(struct Person));

    printf("Enter names and addresses:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Person %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", people[i].name);
        printf("Address: ");
        scanf(" %[^\n]", people[i].address);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(people[j].name, people[j + 1].name) > 0)
            {
                struct Person temp = people[j];
                people[j] = people[j + 1];
                people[j + 1] = temp;
            }
        }
    }

    printf("\nSorted names and addresses:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s, Address: %s\n", people[i].name, people[i].address);
    }

    free(people);
    return 0;
}