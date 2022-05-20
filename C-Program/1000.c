#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include<stdio.h>
int main()
{
    int a = 0, b = 0;
    while (~scanf("%d%d", &a, &b))   //下面有关于~的解析
    {
        printf("%d\n", a + b);
    }
    return 0;
}