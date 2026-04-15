/*
    Write a program to add two matrices using pointers.
*/

#include <stdio.h> 
#include <stdlib.h>

int main() {
    int m, n, *ptr1, *ptr2;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    ptr1 = (int*)malloc(m * n * sizeof(int));
    ptr2 = (int*)malloc(m * n * sizeof(int));

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", (ptr1 + i * n + j));
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", (ptr2 + i * n + j));
        }
    }

    printf("Result of addition:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int sum = *(ptr1 + i * n + j) + *(ptr2 + i * n + j);
            printf("%d ", sum);
        }
        printf("\n");
    }
    free(ptr1);
    free(ptr2);

    return 0;
}