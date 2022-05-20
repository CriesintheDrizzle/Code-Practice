#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
    int a[10] = { 0 }, min, j, i, t = 0;
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < 10 - 1; i++)
    {
        min = i;
        for (j = i + 1; j < 10; j++)
            if (a[min] > a[j])
            {
                min = j;
            }
        t = a[i];
        a[i] = a[min];
        a[min] = t;
    }

    for (i = 0; i < 10; i++)
        printf("%d\n", a[i]);
    return 0;
}