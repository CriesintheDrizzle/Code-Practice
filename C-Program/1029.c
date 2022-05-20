#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int fun(x)
{
	int i = 0;
	int num = 0;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			num++;
		}
	}
	if (num == 0)      //ÎªËØÊý
		return 1;
	else
		return 0;
	
}
int main()
{
	int a = 0;
	int c = 0;
	scanf("%d", &a);

	c = fun(a);
	if (c == 1)
	{
		printf("prime\n");
	}
	if (c == 0)
	{
		printf("not prime\n");
	}
	return 0;
}