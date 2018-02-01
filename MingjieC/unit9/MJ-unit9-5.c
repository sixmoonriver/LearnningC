/*
    改写代码清单9-9中的put_string函数，不使用putchar函数，而改用printf
*/
#include <stdio.h>

void put_string(const char str[])
{
    int i=0;
    while(str[i])
    {
        printf("%c",str[i++]);

    }
}

int main()
{
    char str1[40]={};
    printf("请输入一个字符串：");
    scanf("%s",str1);
    put_string(str1);
    putchar('\n');
}
