#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr1[3][3] = { 0 };
	int arr2[3][3] = { 0 };
	int i = 0, j = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			arr2[j][i] = arr1[i][j];
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}