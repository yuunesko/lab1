#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() 
{
    int a = 4;
    int V = a * a * a;
    int S = 6 * a * a;
    setlocale (LC_CTYPE, "ua");
    printf("������� ����� ����: %d\n" , a);
    printf("��'�� ����� ����: %d\n" , V);
    printf("����� ������� ����: %d\n" , S);
    return 0;
}