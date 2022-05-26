#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	float num = 0;
	int i = 0;
	int j = 0;
	scanf("%f", &num);
	for (i = 1; i <= 3; i++)
	{
		for (j = i;;)
		{
			printf("%6.2f ", num);
			j--;
			if (j == 0)
			{
				break;
			}
		}
		printf("\n");
	}
	return 0;
}