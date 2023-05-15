#include <stdio.h>
#include <math.h>
float a;
int main () {
    int x, y, z;
    int i = 1 ;
    while (i) {
        printf("Enter a value for x: \n");
        scanf("%d", &x);
        printf("Enter a value for y: \n");
        scanf("%d", &y);
        printf("Enter a value for z: \n");
        scanf("%d", &z);
        if ( (pow(x, 2) * y < (14 * z))) {
            printf("Incorrect numbers entered, set different values.\n");
        }
        else {
            i = 0;
        }
    }
    a = sqrt(pow(x, 2) * y - (14* z));
    printf("Answer : %.2lf\n" , a);
    return 0;
}