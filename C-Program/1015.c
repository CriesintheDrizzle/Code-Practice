#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>

int main()
{
	int i = 0, sum_a = 0, a = 0;
	int j = 0, sum_b = 0, b = 0;
	int k = 0, c = 0;
	float sum_c = 0, sum = 0;

	scanf("%d %d %d", &a, &b, &c);
	//求a的和
	for (i = 1; i <= a; i++)
	{
		sum_a = sum_a + i;
	}
	//求b的和
	for (j = 1; j <= b; j++)
	{
		sum_b = sum_b + pow(j, 2);
	}
	//求c的和
	for (k = 1; k <= c; k++)
	{
		sum_c = sum_c + 1 / (float)k;
	}

	sum = sum_a + sum_b + sum_c;
	printf("%.2f\n", sum);
	return 0;
}