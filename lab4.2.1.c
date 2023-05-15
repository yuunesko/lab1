#include <stdio.h>
int main() {
    double product = 1;
    int num;
    for (num = 12; num <= 60; num += 3) {
    product *= num;
    }
    printf("The product of all integers in the range (10:60)=%.1lf", product);
    return 0;
}