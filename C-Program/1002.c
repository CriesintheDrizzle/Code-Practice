#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main() 
{
    int a, b, c, t;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
        t = a;
    else
        t = b;
    if (c > t)
        t = c;
    printf("%d\n", t);
    return 0;
}