#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//√∞≈›≈≈–Ú
int main() 
{
    char a[100], b[100], c[100];
    gets(a);
    gets(b);
    gets(c);
    puts(strcmp(a, b) < 0 ? (strcmp(a, c) < 0 ? a : c) : strcmp(b, c) < 0 ? b : c);//◊Ó–°◊÷∑˚¥Æ
    puts(strcmp(a, b) > 0 ? (strcmp(a, c) < 0 ? a : (strcmp(b, c) < 0 ? c : b)) : (strcmp(a, c) < 0 ? (strcmp(b, c) > 0 ? c : a) : a));
    puts(strcmp(a, b) > 0 ? (strcmp(a, c) > 0 ? a : (strcmp(b, c) > 0 ? b : c)) : (strcmp(a, c) > 0 ? b : (strcmp(b, c) < 0 ? c : b)));
    return 0;
}