/*
    编写如下函数，将字符str转换为空字符串
*/
#include <stdio.h>

void null_string(char str[])
{
    int i=0;
    while(str[i])
    {
        str[i]=' ';
        i++;
    }
}

int main()
{
    int j=0;
    char str1[]="abcdefg123456";
    null_string(str1);
    while(str1[j])
    {
        putchar(str1[j]);
        j++;
    }
}
