#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, deta;
    double x1, x2, t, t1;
    scanf("%d %d %d", &a, &b, &c);
    deta = b * b - 4 * a * c;
    t = -1 * (double)b / 2 / a;
    t1 = sqrt(fabs(deta)) / 2 / a;   //防止根号里面有负数
    if (deta > 0)
    {
        printf("x1=%.3lf x2=%.3lf", t + t1, t - t1);
    }
    else if (deta == 0)
    {
        printf("x1=%.3lf x2=%.3lf", t + t1, t - t1);
    }
    else if (deta < 0)
    {
        printf("x1=%.3lf+%.3lfi x2=%.3lf-%.3lfi", t, t1, t, t1);
    }
    return 0;
}