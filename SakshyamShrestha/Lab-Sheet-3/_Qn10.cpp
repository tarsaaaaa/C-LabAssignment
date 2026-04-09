/*
    Write a progarm to read two m*n matrices and display their sum, difference and product.
*/

#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows (m) and columns (n) for the matrices: ");
    scanf("%d %d", &m, &n);

    int matrixA[m][n], matrixB[m][n], sum[m][n], difference[m][n], product[m][n];

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

    // Calculate sum and difference
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum[i][j] = matrixA[i][j] + matrixB[i][j];
            difference[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }

    // Calculate product
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            product[i][j] = 0;
            for (int k = 0; k < n; k++) {
                product[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    printf("\nSum of the matrices:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nDifference of the matrices:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }

    printf("\nProduct of the matrices:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}