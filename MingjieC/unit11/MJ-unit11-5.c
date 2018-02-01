/*
    不使用下标运算符，编写如下函数，删除字符串的str中的所有数字字符 OK
*/

#include <stdio.h>

void del_digit(char *str)
{
    char *ptr = str;
    while(*str++)
    {
        if(*str < '0' || *str > '9')
         {
            *ptr++ = *str;
         }
    }
}

int main(void)
{
    char ipt1[30];
    printf("请输入一个字符串：");
    scanf("%s",ipt1);
    del_digit(ipt1);
    printf("处理后字符串为：%s\n",ipt1);

}
