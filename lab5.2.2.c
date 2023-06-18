#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 100
int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid array size.\n");
        return 0;
    }
    int array[MAX_SIZE];
    //генератор псевдовипадкових чисел
    srand(time(NULL));
    printf("Array:\n");
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 201 - 100;
        printf("%d ", array[i]);
    }
    printf("\n");
    int negative_product = 1;
    int has_negative = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] < 0) {
            negative_product *= array[i];
            has_negative = 1;
        }
    }
    if (has_negative) {
        printf("Product of negative elements: %d\n", negative_product);
    } else {
        printf("No negative elements in the array.\n");
    }
    int min_index = 0;
    for (int i = 1; i < n; i++) {
        if (array[i] < array[min_index]) {
            min_index = i;
        }
    }
    int sum = 0;
    for (int i = min_index + 1; i < n; i++) {
        sum += array[i];
    }
    printf("Sum of elements after the minimum element: %d\n", sum);
    return 0;
}