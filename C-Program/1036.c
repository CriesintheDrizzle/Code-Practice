#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define Change(x,y) {a=a+b;b=a-b;a=a-b;}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	Change(a, b);
	printf("%d %d", a, b);
	return 0;
}