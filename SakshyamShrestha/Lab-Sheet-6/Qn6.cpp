/*
    Write a program to add two matrices using pointers.
*/

#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows (m) and columns (n) for the matrices: ");
    scanf("%d %d", &m, &n);

    int matrixA[m][n], matrixB[m][n], sum[m][n];

    int *ptrA = &matrixA[0][0];
    int *ptrB = &matrixB[0][0];

    printf("Enter elements of the first matrix (A):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter elements of the second matrix (B):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    for (int i = 0; i < m * n; i++) {
        sum[0][i] = *ptrA + *ptrB;
        ptrA++;
        ptrB++;
    }

    printf("\nSum of the matrices:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}