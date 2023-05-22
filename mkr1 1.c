#include <stdio.h>
#include <math.h>
int main () {
    float x,y;
    float f;
    printf("Set x : \n");
    scanf("%f" , &x);
    printf("Set y : \n");
    scanf("%f" , &y);
    f = (pow(x,2) + pow(y,2)) / sqrt (x+y);
    if (x + y < 0) {
        printf("Function has no definition");
        // немає визначення
        return 0;
    }
    printf("f=%.2f\n", f);
    return 0;
}