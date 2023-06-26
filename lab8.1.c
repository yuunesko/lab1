#include <stdio.h>

void MinElements(int *matrix, int n, int *result) {
    for (int i = 0; i < n; i++) {
        int min = matrix[i * n];
        int minIndex = 0;
        for (int j = 1; j < n; j++) {
            if (matrix[i * n + j] < min) {
                min = matrix[i * n + j];
                minIndex = j;
            }
        }
        result[i] = minIndex;
    }
}

void printMatrix(int *matrix, int n) {
    printf("Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i * n + j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the dimension of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printMatrix((int *)matrix, n);

    int result[n];
    MinElements((int *)matrix, n, result);

    printf("Results:\n");
    for (int i = 0; i < n; i++) {
        printf("Row %d: %d\n", i, result[i]);
    }

    return 0;
}
