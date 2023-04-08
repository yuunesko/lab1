#include <stdio.h>
#include <math.h>
int main() {
    int y, z;
    double t;
    printf("Enter a value y and z: ");
    scanf("%d %d", &y, &z);
    //вводим значення
    if (z == 2 * y) {
        printf("Error: denominator is null!\n");
        return 1;
        // помилка коли знаменник дорівнює нулю
    }
t = sqrt(3) * y / (z - 2 * y) - y * z;
printf("t = %lf\n", t);
// обчислюємо функцію
return 0;
}

