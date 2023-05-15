#include <stdio.h>
#include <math.h>
int main() {
    double a = -M_PI, b = 2 * M_PI, dx = M_PI / 10;
    double x, y;
    printf("\n________________\n");
    printf("  X\t      Y\n");
    printf("________________\n");
    for (x = a; x <= b; x += dx) {
        if (x == 0) {
            printf("Uncertain result for x = %.2f\n" , x);
            // невизначений результат
            continue;
        }
        if(x == 2 * M_PI) {
            printf("Uncertain result for x = 2π (%.2f\n)" , x);
            continue;
        }
        y = 1 / tan (x / 2);
        printf("%.2f\t , %.2f\n" , x,y);
    }
    return 0;
}