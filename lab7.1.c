#include <stdio.h>
#define MAX_SIZE 100
float minarr(float arr[], int size) {
float min = arr[0];
for (int i = 1; i < size; i++) {
if (arr[i] < min) {
min = arr[i];
}
}
return min;
}

void inputMatrix(float matrix[][MAX_SIZE], int rows, int columns) {
printf("Enter matrix elements:\n");
for (int i = 0; i < rows; i++) {
for (int j = 0; j < columns; j++) {
scanf("%f", &matrix[i][j]);
}
 }
}

void outputMatrix(float matrix[][MAX_SIZE], int rows, int columns) {
printf("Matrix:\n");
for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
    printf("%.2f ", matrix[i][j]);
    }
    printf("\n");
    }
}

int main() {
    int n, m;
    float matrixA[MAX_SIZE][MAX_SIZE], matrixB[MAX_SIZE][MAX_SIZE];

    printf("Enter the number of rows (n): ");
    scanf("%d", &n);
    printf("Enter the number of columns (m): ");
    scanf("%d", &m);

    printf("Enter the elements of the matrix A:\n");
    inputMatrix(matrixA, n, m);

    printf("Matrix A:\n");
    outputMatrix(matrixA, n, m);

    printf("Enter the elements of the matrix B:\n");
    inputMatrix(matrixB, n, m);

    printf("Matrix B:\n");
    outputMatrix(matrixB, n, m);

    float minA = minarr(matrixA[0], n * m);
    float minB = minarr(matrixB[0], n * m);

    if (minA < minB) {
        printf("The minimum element in matrix B is the largest: %.2f\n", minB);
    } else if (minB < minA) {
        printf("The minimum element in matrix A is the largest: %.2f\n", minA);
    } else {
        printf("The minimum element in matrices A and B is the same: %.2f\n", minA);
    }

    return 0;
}