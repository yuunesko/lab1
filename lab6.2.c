#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sortRow(float row[], int length) {
    for (int i = 0; i < length - 1; i++) {
    for (int j = 0; j < length - i - 1; j++) {
    if (row[j] > row[j + 1]) {
    float temp = row[j];
    row[j] = row[j + 1];
    row[j + 1] = temp;
    }
    }
    }
}
int main() {
    int n, m;
    printf("Enter the matrix size (n , m): ");
    scanf("%d %d", &n, &m);
    float matrix[100][100];
    // ініціалізація генератора псевдовипадкових чисел
    srand(time(0));
    // генерація матриці з допомогою rand() відрізка [-100, 100]
    printf("Generated matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = -100 + (rand() % 201); 
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }
    // сортування кожного рядка матриці
    for (int i = 0; i < n; i++) {
        sortRow(matrix[i], m);
    }
    printf("Matrix after sorting rows:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }
    // матриця після сортування рядків
    return 0;
}