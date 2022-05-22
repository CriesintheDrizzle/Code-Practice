#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int* number_spe(a)
{
	int i = 0;
	int gw, sw, bw, qw;
	qw = a / 1000;
	bw = a / 100 % 10;
	sw = a / 10 % 10;
	gw = a % 10;
	char arr[4] = { 0 };
	arr[0] = qw;
	arr[1] = bw;
	arr[2] = sw;
	arr[3] = gw;
	for (i = 0; i < 4; i++)
	{
		printf("%d", arr[i]);
		printf(" ");
	}
	return 0;
}

int main()
{
	int i = 0;
	int num = 0;
	char arr2[4] = { 0 };
	scanf("%d", &num);
	number_spe(num);
	return 0;
}