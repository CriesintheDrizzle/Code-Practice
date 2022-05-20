#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	float M = 0;
	int N = 0, i;
	float sum = 0;

	scanf("%f %d", &M, &N);
	for (i = 1; i <= N; i++)
	{
		if (i == 1)
		{
			sum = sum + M;
		}
		else
		{
			sum = sum + 2 * M;
		}
		M = (double)M / 2;        //第N次上升高度=第N次落地高度
	}
	printf("%0.2f %0.2f\n", M, sum);

}