#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    long double n = 2, m = 1, N, t, sum = 0.00;
    scanf("%Lf", &N);

    while (N)
    {
        sum = sum + n / m;

        t = m;
        m = n;
        n = n + t;
        N--;
    }
    printf("%.2Lf", sum);
    return 0;
}