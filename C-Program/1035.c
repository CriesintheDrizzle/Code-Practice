#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int e = 0, b = 0, c = 0, d = 0;
void Statistics(char a[100]);
int main()
{
	char a[100];
	gets(a);
	Statistics(a);
	printf("%d %d %d %d\n", e, b, c, d);
	return 0;
}
void Statistics(char a[100])
{
	int i;
	for (i = 0; a[i] != '\0'; i++)
	{
		if ('a' <= a[i] && a[i] <= 'z' || 'A' <= a[i] && a[i] <= 'Z')
			e++;
		else if ('0' <= a[i] && a[i] <= '9')
			b++;
		else if (a[i] == ' ')
			c++;
		else
			d++;
	}
}