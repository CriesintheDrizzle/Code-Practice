#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void input(int* a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void fun(int* a, int* b, int m, int n)  //向后移m位
{
    int i = 0;
    for (i = 0; i < n+m; i++)
    {
        b[i + m] = a[i];
    }
    for (i = 0; i < m; i++)
    {
        b[i] = b[i + n];
    }
}
void output(int* b, int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
}
int main()
{
	int n = 0;   //输入的元素个数
    int arr1[100] = { 0 };
    int arr2[100] = { 0 };
    int m = 0;   //后移位数
    scanf("%d", &n);
    input(arr1, n);
    scanf("%d", &m);
    fun(arr1, arr2, m, n);
    output(arr2, n);
    return 0;
}