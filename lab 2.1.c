#include <stdio.h>
#include <math.h>
int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    printf("The integer part of dividing %d by %d: %d\n", num1, num2, num1 / num2);
    //ціла частина від ділення 1-го числа на 2-ге
    int sum_of_squares = num1 * num1 + num2 * num2;
    printf("Sum of squares %d and %d: %d\n", num1, num2, sum_of_squares);
    //сума квадратів двох чисел
    int sum = num1 + num2;
    int diff = num1 - num2;
    int product = sum * diff;
    printf("The product of the sum and the difference %d", product);
    //добуток суми і різниці 1 та 2 числа
    return 0;
}   