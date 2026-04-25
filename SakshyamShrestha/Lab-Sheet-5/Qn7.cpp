/*
    Create a structurenamed book which has name, pages and price.
    Write a program to read name, no of pages and price of 5 books using array of structure.
    Display the name, no of pages and prive of the most expensive book.
*/

#include <stdio.h>

struct Book {
    char name[100];
    int pages;
    float price;
};

int main()
{
    struct Book books[5];

    printf("Enter details of:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Book %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", books[i].name);
        printf("Pages: ");
        scanf("%d", &books[i].pages);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    int mostExpensiveIndex = 0;
    for (int i = 1; i < 5; i++)
    {
        if (books[i].price > books[mostExpensiveIndex].price)
        {
            mostExpensiveIndex = i;
        }
    }

    printf("\nMost Expensive Book:\n");
    printf("Name: %s\n", books[mostExpensiveIndex].name);
    printf("Pages: %d\n", books[mostExpensiveIndex].pages);
    printf("Price: %.2f\n", books[mostExpensiveIndex].price);

    return 0;
}