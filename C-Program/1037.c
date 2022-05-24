#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define Change(x,y) {z=x%y;}

int main()
{
	int z = 0;
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	Change(a, b);
	printf("%d", z);
	return 0;
}