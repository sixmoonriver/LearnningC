/*
    不使用下标，写出与代码清单9-13中功能相同的函数
*/
#include <stdio.h>
#include <ctype.h>

void str_toupper(char *ptr)
{
    while(*ptr)
    {
        *ptr = toupper(*ptr);
        *ptr++;
    }
}
void str_tolower(char *ptr)
{
    while(*ptr)
    {
        *ptr = tolower(*ptr);
        *ptr++;
    }

}

int main(void)
{
    char ipt1[30];
    printf("请输入一个字符串：");
    scanf("%s",ipt1);
    str_toupper(ipt1);
    str_tolower(ipt1);
    printf("字符串转换后为：%s",ipt1);

}
