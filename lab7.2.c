#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define MIN_VALUE -100
#define MAX_VALUE 100
void initializeArray(int array[], int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        array[i] = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
    }
}
void outputArray(int array[], int size) {
    printf("Масив:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
int findMaxElement(int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}
int findProductBetweenNegatives(int array[], int size) {
    int firstNegativeIndex = -1;
    int lastNegativeIndex = -1;
    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            if (firstNegativeIndex == -1) {
                firstNegativeIndex = i;
            } else {
                lastNegativeIndex = i;
            }
        }
    }
    if (firstNegativeIndex == -1 || lastNegativeIndex == -1 || lastNegativeIndex - firstNegativeIndex <= 1) {
        return 0;
    }
    int product = 1;
    for (int i = firstNegativeIndex + 1; i < lastNegativeIndex; i++) {
        product *= array[i];
    }
    return product;
}
int main() {
    int array[SIZE];
    initializeArray(array, SIZE);
    outputArray(array, SIZE);
    int maxElement = findMaxElement(array, SIZE);
    printf("Максимальний елемент: %d\n", maxElement);
    int product = findProductBetweenNegatives(array, SIZE);
    printf("Добуток елементів між першим й останнім від'ємними: %d\n", product);
    return 0;
}