#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int m, n;
	int j, k;
	int lcm, gcd = 1;
	scanf("%d %d", &m, &n);
	j = m;                    //用j和k表示m和n，不破坏m与n的值
	k = n;
	if (j > k)                //确保j是较小的那个值
	{
		j = n;
		k = m;
	}
	for (int i = 2; i <= j; i++)        //循环寻找从i到j的因子（注意j是可变的，而i会被重置）
	{
		if (j % i == 0 && k % i == 0)   //判断i是否为j和k的公因子
		{
			j = j / i;                  //j与k分别除以i
			k = k / i;
			gcd = gcd * i;              //gcd乘以i
			i = 1;                      //将i重置为1 （循环末尾会i++）
		}
	}
	lcm = gcd * j * k;
	printf("%d %d\n", gcd, lcm);
	return 0;
}