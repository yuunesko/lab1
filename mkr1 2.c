#include <stdio.h>
#include <math.h>
int main () {
float hypotenuse;
float cathette1 , cathette2;
float S;
printf("Set hypotenuse : \n");
scanf("%f" , &hypotenuse);
printf("Set cathette1 : \n");
scanf("%f" , &cathette1);
if (hypotenuse <= 0 ) {
    printf("no such triangle exist \n");
    return 0;
}
else if (cathette1 <= 0 ) {
    printf("no such triangle exist \n");
    return 0;
}
cathette2 = sqrt (pow(hypotenuse,2) - pow (cathette1, 2));
S = 0.5 * hypotenuse * cathette1 * sin (90);
if (cathette2 <= 0 ) {
    printf("no such triangle exist \n");
    return 0;
}
printf("cathette 2 = %.2f\n" , cathette2);
printf("triangle area (S) = %.2f\n" , S);
return 0;
}