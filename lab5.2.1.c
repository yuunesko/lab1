#include <stdio.h>
int main() {
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Array: ");
    for (int i = 0; i < n; i++) {
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