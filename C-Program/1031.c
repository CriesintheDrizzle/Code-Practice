#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int exchange(char a[], char b[])
{
	int l, i, j = 0;
	l = strlen(a);
	for (i = l - 1; i >= 0; i--)
	{
		b[j] = a[i];
		j++;
	}
	b[j] = '\0';
	return 0;
}
int main()
{
	char arr1[1000] = { 0 };
	char arr2[1000] = { 0 };

	gets(arr1);
	exchange(arr1, arr2);
	puts(arr2);
	return 0;
}