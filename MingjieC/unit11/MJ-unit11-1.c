/*
    不使用下标运算符，写出9-9中put_string函数相同的功能
*/
#include <stdio.h>

void put_string(const char *str)
{
    putchar(*str);
    while(*str++)
        putchar(*str);

}

int main(void)
{
    char str[100];
    printf("请输入一个字符串：");
    scanf("%s",str);

    put_string(str);
    putchar('\n');
}

