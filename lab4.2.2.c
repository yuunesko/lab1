#include <stdio.h>
int main () {
    double product = 1;
    int num = 10;
    while (num <= 60) {
        if (num % 3 == 0) {
            product *= num;
        }
        num++;
    }
    printf("The product of all integers in the range (10:60)=%.1lf", product);
    return 0;
}