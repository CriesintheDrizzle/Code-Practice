#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int N = 0, a;
	int ret = 0;

	scanf("%d", &N);
	for (i = 2; i <= N; i++)
	{
		a = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				a++;
		}
		if (a==0) 
		{
			printf("%d\n", i);
		}
	}
	return 0;
}