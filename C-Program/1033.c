#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>

int Isyuanyin(char a[], char b[])
{
    int i, j = 0, k, l;
    char x;
    l = strlen(a);
    for (i = 0; i < l; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            b[j] = a[i];
            j++;
        }
    }
    b[j] = '\0';
    k = strlen(b);
    for (i = 0; i < k; i++)
    {
        for (j = i; j < k; j++)
        {
            if (b[i] > b[j])
            {
                x = b[j]; b[j] = b[i]; b[i] = x;
            }
        }
    }
    return 0;
}
int main()
{
    char a[100], b[100];
    gets(a);
    Isyuanyin(a, b);
    puts(b);
    return 0;
}