#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() 
{
    int a = 4;
    int V = a * a * a;
    int S = 6 * a * a;
    setlocale (LC_CTYPE, "ua");
    printf("Довжина ребра куба: %d\n" , a);
    printf("Об'єм площі куба: %d\n" , V);
    printf("Площа поверхні куба: %d\n" , S);
    return 0;
}