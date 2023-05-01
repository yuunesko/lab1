#include <stdio.h>
#include <math.h>
int main(){
    const int a;
    const int b;
    const int c;
    printf("Enter value a: ");
    scanf("%d", &a);
    printf("Enter value b: ");
    scanf("%d", &b);
    printf("Enter value c: ");
    scanf("%d", &c);
    printf("find the value of the function y = (a + 4 * b - c * c) / (2.0 * a * b *c) \n ");
    // задаємо сталі величини
    float y = (a + 4 * b - c * c) / (2.0 * a * b *c);
    //обчислюємо функцію y
    printf("Function value y: %f\n", y);
    return 0;
}