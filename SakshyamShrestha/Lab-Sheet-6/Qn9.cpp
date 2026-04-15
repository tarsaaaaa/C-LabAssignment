/*
    Write a program to read matrix of size m*n entered by user and display its transpose matrix.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, *ptr;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    ptr = (int*)malloc(m * n * sizeof(int));

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", (ptr + i * n + j));
        }
    }

    printf("Transpose of the matrix:\n");
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            printf("%d ", *(ptr + i * n + j));
        }
        printf("\n");
    }
    free(ptr);
    return 0;
}