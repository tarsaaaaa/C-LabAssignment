/*
    Write a program to append some text to a certain file . Take name from user.
*/

#include <stdio.h>

int main()
{
    char filename[100], text[1000];
    printf("Enter the filename: ");
    scanf("%s", filename);
    
    fflush(stdin);

    printf("Enter the text to append: ");
    scanf("%s", text);
    
    FILE *file = fopen(filename, "a");

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    
    fprintf(file, "%s", text);
    fclose(file);
    
    printf("Text appended successfully.\n");
    return 0;
}