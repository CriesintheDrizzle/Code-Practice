#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void getin(int a[],int n)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
}

void fun(int a[], int n)
{
    int i, max, min, maxi = 0, maxj = 0, trans1, trans2;
    max = a[0];
    min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            maxi = i;
        }
        if (a[i] > max)
        {
            max = a[i];
            maxj = i;
        }
    }
    trans2 = a[0];
    a[0] = min;
    a[maxi] = trans2;
    for (i = 1; i < n; i++)
    {

        if (a[i] > max)
        {
            max = a[i];
            maxj = i;
        }
    }
    trans1 = a[9];
    a[9] = max;
    a[maxj] = trans1;
}
void putout(int a[], int n)
{
	int z = 0;
	for (z = 0; z < n; z++)
	{
		printf("%d ", a[z]);
	}
}

int main()
{
	int arr[10] = { 0 };
	getin(arr, 10);
	fun(arr, 10);
	putout(arr, 10);
	return 0;
}