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
printf("Введіть елементи матриці:\n");
for (int i = 0; i < rows; i++) {
for (int j = 0; j < columns; j++) {
scanf("%f", &matrix[i][j]);
}
 }
}

void outputMatrix(float matrix[][MAX_SIZE], int rows, int columns) {
printf("Матриця:\n");
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

    printf("Введіть кількість рядків (n): ");
    scanf("%d", &n);
    printf("Введіть кількість стовпців (m): ");
    scanf("%d", &m);

    printf("Введіть елементи матриці A:\n");
    inputMatrix(matrixA, n, m);

    printf("Матриця A:\n");
    outputMatrix(matrixA, n, m);

    printf("Введіть елементи матриці B:\n");
    inputMatrix(matrixB, n, m);

    printf("Матриця B:\n");
    outputMatrix(matrixB, n, m);

    float minA = minarr(matrixA[0], n * m);
    float minB = minarr(matrixB[0], n * m);

    if (minA < minB) {
        printf("Мінімальний елемент у матриці B є найбільшим: %.2f\n", minB);
    } else if (minB < minA) {
        printf("Мінімальний елемент у матриці A є найбільшим: %.2f\n", minA);
    } else {
        printf("Мінімальний елемент у матрицях A та B однаковий: %.2f\n", minA);
    }

    return 0;
}