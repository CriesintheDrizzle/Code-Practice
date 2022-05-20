#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>

int fun(i)
{
	if (pow(i % 10, 3) + pow(i / 10 % 10, 3) + pow(i / 100 % 10, 3)==i)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int i = 0;
	for (i = 100; i < 1000; i++)
	{
		if (fun(i))
		{
			printf("%d\n", i);
		}
	}
	return 0;
}