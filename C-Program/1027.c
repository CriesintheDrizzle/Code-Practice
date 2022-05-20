#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int g_yue(int a, int b)
{
	int c = 0;
	int i = 0;
	if (a > b)
	{
		c = a;
		a = b;
		b = c;
	}
	for (i = a - 1; i >= 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			return i;
			break;
		}
	}
}
int g_bei(int a, int b)
{
	int m = 0;
	m = g_yue(a, b);
	return a * b / m;
}
int main()
{
	int num1 = 0, num2 = 0;
	int yue = 0, bei = 0;

	scanf("%d %d", &num1, &num2);

	yue = g_yue(num1, num2);
	bei = g_bei(num1, num2);

	printf("%d %d\n", yue, bei);
	return 0;

}