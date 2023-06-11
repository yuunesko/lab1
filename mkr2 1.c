#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// обчислення показника d
double calculateSum(double arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
    sum += abs(arr[i]);
}
    return sum;
}
// введення елементів масиву
void inputArr(double arr[], int n) {
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
    printf("a[%d] = ", i);
    scanf("%lf", &arr[i]);
}
}
// виведення елементів масиву
void printArr(double arr[], int n) {
    printf("Array elements:\n");
    for (int i = 0; i < n; i++) {
    printf("a[%d] = %.2lf; ", i, arr[i]);
}
    printf("\n");
}
int main() {
int n;
 printf("Enter the number of array elements: ");
 scanf("%d", &n);
 double arr[n];
 inputArr(arr, n);
 printArr(arr, n);
 double d = calculateSum(arr, n);
 printf("Results: d = %.2lf\n", d);
return 0;
}