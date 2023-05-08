#include <stdio.h>
#include <math.h>
int main () {
    float x1, y1, x2, y2, x3, y3;
    float distB, distC;
    // (distance) відстань від Б до А та С до А
    printf("Enter the coordinates of the point A (x1, y1): \n");
    scanf("%f %f", &x1, &y1);

    printf("Enter the coordinates of the point B (x2 , y2): \n");
    scanf("%f %f", &x2 , &y2);

    printf("Enter the coordinates of the point C (x3, y3): \n");
    scanf("%f %f", &x3, &y3);
    distB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    distC = sqrt(pow(x3 - x1, 2) + pow (y3 - y1, 2));
        if (x1==x2 && x2==x3 && y1==y2 && y2==y3) {
        printf("Coordinates are the same \n");
        return 0;
    }
    else if  ( distB == distC) {
        printf("Distance between B and C are the same \n");
        return 0;
    }
    if ( distB < distC) {
        printf("Point B (%.2f, %.2f) is located closer to point A.\n" , x2 , y2);
        printf("Distance from point B to point A: %.2f\n", distB);
    } 
    else {
        printf("Point C (%.2f, %.2f) is located closer to point A.\n", x3,y3);
        printf("Distance from point C to point A: %.2f\n", distC); 
    }
    return 0;
}