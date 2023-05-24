#include <stdio.h>
int main () {
    int n;
    int negative_product;
    int sum;
    int min_element;
    int i;
    printf("Enter size array: ");
    scanf("%d" , &n);
    int array[n];
    printf("Enter array elements: \n");
    for(i = 0; i < n; i++) {
        scanf("%d" , &array[i]);
    }
    for(i = 0; i < n; i++) {
    if (array[n] < 0) {
        negative_product *=array[i];
    }
}
min_element = 0;
for (i = 1; i < n; i++) {
    if (array[i] < array[min_element]) {
        min_element = 1;
    }
}
for (i = min_element + 1; i < n; i++) {
    sum += array[i];
}
printf("Product of negative elements: %d\n" , negative_product);
printf("Sum of elements after the minimum element: %d\n" , sum);
return 0;
}