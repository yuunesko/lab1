#include <stdio.h>
#include <stdlib.h>

void input(int *arr, int n) {
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void output(int *arr, int n) {
    printf("Array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int countOddElements(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int sumBetweenNegatives(int *arr, int n) {
    int firstNegativeIndex = -1;
    int secondNegativeIndex = -1;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (firstNegativeIndex == -1) {
                firstNegativeIndex = i;
            } else {
                secondNegativeIndex = i;
                break;
            }
        }
    }
    
    if (firstNegativeIndex == -1 || secondNegativeIndex == -1) {
        return 0;
    }
    
    int sum = 0;
    int start, end;
    
    if (firstNegativeIndex < secondNegativeIndex) {
        start = firstNegativeIndex;
        end = secondNegativeIndex;
    } else {
        start = secondNegativeIndex;
        end = firstNegativeIndex;
    }
    
    for (int i = start + 1; i < end; i++) {
        sum += arr[i];
    }
    
    return sum;
}

int main() {
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int *array = (int *)malloc(n * sizeof(int));
    
    input(array, n);
    output(array, n);
    
    int oddCount = countOddElements(array, n);
    printf("Number of odd elements: %d\n", oddCount);
    
    int sumBetweenNegs = sumBetweenNegatives(array, n);
    printf("The sum of the elements between the first and second is negative: %d\n", sumBetweenNegs);
    
    free(array);
    
    return 0;
}
