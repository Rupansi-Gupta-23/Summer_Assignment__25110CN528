#include <stdio.h>
int main() {
    int n, i, j, sumMainDiagonal = 0, sumSecondaryDiagonal = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        sumMainDiagonal += matrix[i][i];
        sumSecondaryDiagonal += matrix[i][n - i - 1];
    }
    printf("Sum of main diagonal: %d\n", sumMainDiagonal);
    printf("Sum of secondary diagonal: %d\n", sumSecondaryDiagonal);
    return 0;
}