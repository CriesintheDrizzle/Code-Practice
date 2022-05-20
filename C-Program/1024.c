#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int arr[3][3] = { 0 };
	int z = 0, f = 0;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &arr[i][j]);
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j)
			{
				z = z + arr[i][j];
			}
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 2; j >= 0; j--)
		{
			if (i + j == 2)
			{
				f = f + arr[i][j];
			}
		}
	}

	printf("%d %d\n", z, f);
	return 0;
}