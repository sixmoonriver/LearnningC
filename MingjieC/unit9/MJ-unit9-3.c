/*
    编写如下函数，若字符串str中含有字符c,则返回该元素的下标值，否则返回-1
*/
#include <stdio.h>

int str_char(const char str[],int c)
{
    int i=0;
    int pos = 0;
    while(str[i] != 0)
    {
        if(str[i] == c)
        {
            return (i+1);
        }
        else
            i++;
    }
    return (-1);
}

int main()
{
    char str1[] = "123abcdce";
    printf("%s第%d个字符是a",str1,str_char(str1,'a'));
}
