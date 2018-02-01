/*
    编写如下函数，若字符串Str中含有字符c,(若有多个，以先出现的为准）,返回指针
*/
#include <stdio.h>

char *str_chr(const char *str,int c)
{
        char *t = str;
        while(*t)
        {
            if(*t==c)
                return (t);
            str++;
        }
        return (NULL);
}

int main(void)
{
    char str[100];
    printf("请输入一个字符串：");
    scanf("%s",str);
    //str_chr(str,'b');
    printf("str字符串中的b:%d",*str_chr(str,'b'));
    putchar('\n');
}
