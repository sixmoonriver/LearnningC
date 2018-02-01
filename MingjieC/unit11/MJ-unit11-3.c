/*
    不使用下标运算符，编写下列函数，返回字符串str中字符c的个数，如不存在，则为0
*/
#include <stdio.h>
int str_chnum(const char *str,char c)
{
    int ct = 0 ;
    char *ptr = str;
    while(*str++)
    {
        if(*str == 'c')
            ct++;
    }
    return (ct);
}

int main(void)
{
    char ipt1[10];
    printf("请输入一个字符串：");
    scanf("%s",ipt1);
    printf("字符串%s中含有%d个c",ipt1,str_chnum(ipt1,'c'));
}
