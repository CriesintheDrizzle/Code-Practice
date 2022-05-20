#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

int main()
{
	int num = 0;
	int temp, i;
	int count = 0;//求该数为几位数
	scanf("%d", &num);
	temp = num;
	while (temp)
	{
		count++;
		temp = temp / 10;
	}
	printf("%d\n", count);

	//顺序输出
	for (int i = count - 1; i >= 0; i--)
	{
		temp = num / pow(10, i);
		printf("%d ", temp % 10);
	}
	printf("\n");

	//逆序输出
	for (int i = 0; i <= count-1; i++)
	{
		temp = num / pow(10, i);
		printf("%d", temp % 10);
	}

	return 0;
}