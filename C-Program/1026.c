#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int arr[10] = { 0 };
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 9; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}