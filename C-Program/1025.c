#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int arr[10] = { 0 };
	int i = 0, c = 0;
	int num = 0;

	for (i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &num);

	for (i = 0; i < 9; i++)
	{
		if (arr[i] >= num)
		{
			c = i;
			break;
		}
	}
	for (i = 9; i > c; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[i] = num;

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}