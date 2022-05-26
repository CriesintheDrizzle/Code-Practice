#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAX(x,y,z) (x>y?x:y)>z?(x>y?x:y):z

double max(double x, double y, double z)
{
    return (x > y ? x : y) > z ? (x > y ? x : y) : z;
}

int main()
{
    double x, y, z, max1, max2;
    scanf("%lf %lf %lf", &x, &y, &z);
    max1 = MAX(x, y, z);
    max2 = max(x, y, z);
    printf("%.3lf\n%.3lf\n", max1, max2);
    return 0;
}