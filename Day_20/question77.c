#include <stdio.h>
int main() {
    int rowsA, colsA, rowsB, colsB, i, j, k;
    printf("Enter number of rows and columns for matrix A:\n");
    scanf("%d %d", &rowsA, &colsA);
    printf("Enter number of rows and columns for matrix B:\n");
    scanf("%d %d", &rowsB, &colsB);
    if (colsA != rowsB) {
        printf("Matrix multiplication not possible. Columns of A must equal rows of B.\n");
        return 0;
    }
    int A[rowsA][colsA], B[rowsB][colsB], result[rowsA][colsB];
    printf("Enter elements of matrix A:\n");
    for(i = 0; i < rowsA; i++) {
        for(j = 0; j < colsA; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of matrix B:\n");
    for(i = 0; i < rowsB; i++) {
        for(j = 0; j < colsB; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for(i = 0; i < rowsA; i++) {
        for(j = 0; j < colsB; j++) {
            result[i][j] = 0;
        }
    }
    for(i = 0; i < rowsA; i++) {
        for(j = 0; j < colsB; j++) {
            for(k = 0; k < colsA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Resultant matrix after multiplication:\n");
    for(i = 0; i < rowsA; i++) {
        for(j = 0; j < colsB; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}