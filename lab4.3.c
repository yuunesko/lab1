#include <stdio.h>
int main () {
    int n;
    double x, sum = 0.0;
    printf("Enter a value for n: \n");
    scanf("%d" , &n);
    printf("Enter a value for x: \n");
    scanf("%lf" , &x);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            sum += x * j;
        }
    }
    printf("Answer = %.2lf\n" , sum);
    return 0;
}