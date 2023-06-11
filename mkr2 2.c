#include <stdio.h>
#include <math.h>
//  обчислення довжини відрізка за координатами його кінців
double distance(double x1, double y1, double x2, double y2) {
    double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return distance;
}
// обчислення площі трикутника за заданими розмірами сторін
double triangleArea(double side1, double side2, double side3) {
    double s = (side1 + side2 + side3) / 2; // півпериметр
    double area = sqrt(s * (s - side1) * (s - side2) * (s - side3)); // формула Герона
    return area;
}
// введення координат вершин трикутника
void inputTriangleCoordinates(double* x1, double* y1, double* x2, double* y2, double* x3, double* y3) {
    printf("vertices A (x1, y1): ");
    scanf("%lf %lf", x1, y1);
    printf("vertices B (x2, y2): ");
    scanf("%lf %lf", x2, y2);
    printf("vertices C (x3, y3): ");
    scanf("%lf %lf", x3, y3);
}
// перевірки існування трикутника
int triangleExistence(double side1, double side2, double side3) {
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        return 1; // трикутник існує
    } else {
        return 0; // трикутник не існує
    }
}
//обчислення площі та порівняння площ двох трикутників
void compareTriangleAreas() {
    double x1, y1, x2, y2, x3, y3;
    double area1, area2;
    printf("Enter the coordinates of the vertices of the first triangle:\n");
    inputTriangleCoordinates(&x1, &y1, &x2, &y2, &x3, &y3);
    double side1 = distance(x1, y1, x2, y2);
    double side2 = distance(x2, y2, x3, y3);
    double side3 = distance(x3, y3, x1, y1);
    if (!triangleExistence(side1, side2, side3)) {
        printf("First triangle does not exist.\n");
        return;
    }
    area1 = triangleArea(side1, side2, side3);
    printf("Enter the coordinates of the vertices of the second triangle:\n");
    inputTriangleCoordinates(&x1, &y1, &x2, &y2, &x3, &y3);
    side1 = distance(x1, y1, x2, y2);
    side2 = distance(x2, y2, x3, y3);
    side3 = distance(x3, y3, x1, y1);
    if (!triangleExistence(side1, side2, side3)) {
        printf("Second triangle does not exist.\n");
        return;
    }
    area2 =triangleArea(side1, side2, side3);
    if (area1 > area2) {
        printf("The first triangle has a larger area.\n");
    } else if (area2 > area1) {
        printf("The second triangle has a larger area.\n");
    } else {
        printf("Both triangles have the same area.\n");
    }
}
int main() {
    compareTriangleAreas();
    return 0;
}