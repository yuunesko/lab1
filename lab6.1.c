#include <stdio.h>
void swapHalves(int matrix[][100], int n, int m) {
    int half = m / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < half; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][j + half];
            matrix[i][j + half] = temp;
        }
    }
}
int main() {
    int n, m;
    printf("Enter the matrix size (n , m): ");
    scanf("%d %d", &n, &m);
    int matrix[100][100];
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix before exchanging halves:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    swapHalves(matrix, n, m);
    printf("Matrix after exchanging halves:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}