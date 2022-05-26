#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define LEAP_YEAR(y) leap(y)

char leap(y)
{
	if ((y % 4 == 0 && y % 100) || (y % 400 == 0))
	{
		printf("L");
		return 1;
	}
	else
	{
		printf("N");
		return 0;
	}
}

int main()
{
	int year = 0;
	int a = 0;
	scanf("%d", &year);
	LEAP_YEAR(year);
	return 0;
}