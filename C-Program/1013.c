#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>

int fun(i)
{
	int z = 0;
	int j = 0;

	for (j = 0; j < i; j++)
	{
		z =z + 2*(pow(10, j));
	}

	return z;
}
int main()
{
	int n = 0;
	int i = 0;
	int sum = 0;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		sum = sum + fun(i);
	}
	printf("%d\n", sum);
	return 0;
}