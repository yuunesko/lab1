#include <stdio.h>
int main () {
    double product = 1;
    int num = 10;
    do {
        if (num % 3 == 0) {
            product *= num;
        }
        num++;
    } while (num <= 60);
    printf("The product of all integers in the range (10:60)=%.1lf", product);
    return 0;
}