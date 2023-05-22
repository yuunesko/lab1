#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main () {
    float f , x;
    printf("Set x: \n");
    scanf("%f" , &x);
    if (x > 0) {
        f = pow(x,2) + 5 * x - 6;
    }
    else if (x <= 0) {
        f = abs(x + cos(x));
    }
    printf("Value f(x) = %.2f\n" , f);
    return 0;
}