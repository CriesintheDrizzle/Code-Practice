#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

char* my_strcpy(char arr2[], const char arr1[], int i, int n)  //iΪ��ʼ������λ�ã��洢���±�Ϊi-1��
{
	int j = 0;
	int z = 0;
	for (j = 0; j < n; j++)
	{
		for (z = 0; z < n; z++)
		{
			while (j >= i - 1)
			{
				arr2[z] = arr1[j];
				j++;
				break;
			}
		}
		if (arr1[j] == '\0')
			break;
	}
	arr2[j] = '\0';
	return arr2;
}

int main()
{
	char arr1[100] = { 0 };
	char arr2[100] = { 0 };
	int n = 0;          //�ַ�������
	int i = 0;
	int j = 0;
	scanf("%d", &n);
	scanf("%s", &arr1);
	scanf("%d", &i);
	my_strcpy(arr2, arr1, i, n);//���ַ���arr1������arr2
	puts(arr2);
	return 0;
}