#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
    char s[11];                             //定义一个长度为10的字符串（注意有结尾符）
    gets(s);                                //输入字符串
    for (int i = 0; s[i] != '\0'; i++)      //循环到结尾符'\0'时停止循环
    {
        if (s[i] >= 'A' && s[i] <= 'Z')             //判断是否为大写字母
        {
            s[i] = (s[i] + 4 - 'A') % 26 + 'A';     //大写字母后移
        }
        if (s[i] >= 'a' && s[i] <= 'z')             //判断是否为小写字母A
        {
            s[i] = (s[i] + 4 - 'a') % 26 + 'a';     //小写字母后移
        }
    }
    puts(s);                                //输出字符串
    return 0;
}