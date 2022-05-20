#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    double f, c;
    scanf("%lf", &f);
    c = 5 * (f - 32) / 9;
    printf("c=%0.2lf", c);
    return 0;
}