/*
    编写如下函数，返回字符串Str中字符c的个数（没有则返回0）
*/

#include <stdio.h>

int str_chnum(const char str[],int c)
{
    int num=0;
    int i=0;
    while(str[i] != 0)
    {
        if(str[i] == c)
            num++;
        i++;
    }

    return (num);
}

int main(void)
{
    char str1[40]={};
    printf("请输入一个字符串：");
    scanf("%s",str1);
    printf("字符串%s中含有%d个C\n",str1,str_chnum(str1,'c'));

}
