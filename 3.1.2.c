#include <stdio.h>
#include <math.h>
int main () {
    int x, z, y;
    printf("Enter number z=\n");
    scanf("%d", &z);
    printf("Enter number y=\n");
    scanf("%d", &y);
    if(y==5) {
        x=((sqrt(3*y))-(pow(z,2)));
        printf("if y=5 then x = %d\n" , x);
    }
    else if (y==10){
    x=(pow(y,3) + z);
    printf("if y=10 then x = %d\n" , x);
    }
    else if  (y>10) {
        x=y*pow (z,2) - (2*y*z) + z;
        printf("if y>10 then x = %d\n" , x);
    }
    else
    printf("y is incorrect \n");
    return 0;
}