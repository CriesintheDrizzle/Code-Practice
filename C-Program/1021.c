#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
    int a = 0;
    double x = 1.0, x1;

    scanf("%d", &a);
    do
    {
        x1 = x;
        x = (x1 + a / x1) / 2;
    } while (fabs(x - x1) > 0.00001);           //fabs()¾ø¶ÔÖµº¯Êý
    printf("%0.3lf", x);
    return 0;
}