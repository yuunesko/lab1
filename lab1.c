#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() 
{
    int a = 4;
    int V = a * a * a;
    int S = 6 * a * a;
    setlocale (LC_CTYPE, "ua");
    printf("dovjina rebra kuba: %d\n" , a);
    printf("ob`em ploshi kuba: %d\n" , V);
    printf("plosha poverxni kuba: %d\n" , S);
    return 0;
}