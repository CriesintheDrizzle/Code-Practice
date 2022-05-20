#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[1000] = { 0 };
	char arr2[1000] = { 0 };

	gets(arr1);
	gets(arr2);
	strcat(arr1, arr2);
	puts(arr1);

	return 0;
}