#include <stdio.h>
#include <math.h>
int main(){
    const int a = 5;
    const int b = 7;
    const int c = 5;
    // задаємо сталі величини
    float y = (a + 4 * b - c * c) / (2.0 * a * b *c);
    //обчислюємо функцію y
    printf("Function value y: %f\n", y);
    return 0;
}