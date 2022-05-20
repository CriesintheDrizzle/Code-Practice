#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int fun(i)
{
	int j = 0;
	long long z = 0;
	if (i < 2)
	{
		z = 1;
	}
	else
	{
		z = fun(i - 1) * i;
	}
	return z;
}

int main()
{
	int n = 0;
	int i = 0;
	long long sum = 0;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + fun(i);
	}
	printf("%lld\n", sum);
	return 0;
}