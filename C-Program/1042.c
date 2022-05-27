#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
char fun(char a[])
{
	int length = strlen(a);
	int i = 0;
	for (i = 0; i < length; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = (a[i] - 'a' + 1) % 26 + 'a';
		}
		else if (a[i] >= 'A' && a[i] <= 'Z')
		{
			a[i] = (a[i] - 'A' + 1) % 26 + 'A';
		}
	}
}

int main()
{
	char a[100] = { 0 };
	int length = 0;
	gets_s(a,100);
	fun(a);
	puts(a);
	return 0;

}