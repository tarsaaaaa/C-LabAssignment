/*
    Create a structure named book which has name, pages and price as member variables.
    Read name of book its pages and price as member variables.
    Finally display these members value.
    Use pointer to structure instead of structure itself to access it member value.
*/

#include <stdio.h>

struct Book {
    char name[100];
    int pages;
    float price;
};

int main()
{
    struct Book book;
    struct Book *ptr = &book;

    printf("Enter book name: ");
    scanf(" %[^\n]", ptr->name);
    printf("Enter number of pages: ");
    scanf("%d", &ptr->pages);
    printf("Enter price: ");
    scanf("%f", &ptr->price);

    printf("\nBook Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Pages: %d\n", ptr->pages);
    printf("Price: %.2f\n", ptr->price);

    return 0;
}