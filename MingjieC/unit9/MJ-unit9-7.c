/*
    根据9-9的函数，字现字符串的逆向输出
*/
#include <stdio.h>
void put_rstring(const char str[])
{
    int i=0;
    int len=0;
    while(str[i])
    {
        len++;
        i++;
    }
    printf("len = %d\n",len);
    for(i=0;i<len;i++)
        putchar(str[len-1-i]);
}
int main()
{
    char str1[40]={};
    printf("请输入一个字符串：");
    scanf("%s",str1);
    put_rstring(str1);
    putchar('\n');
}


