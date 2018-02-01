/*
    编写如下函数，将字符串str中的数字字符全部删除。
*/
#include <stdio.h>
void del_digit(char str[])
{
    int i=0;
    int len=0;
    while(str[i])
    {
        len++;
        i++;
    }
    printf("len = %d\n",len);
    i=0;
    while(str[i])
    {
        /* 如果是数字，从数字位开始左移 */
        if(str[i]>='0' && str[i]<='9')
        {
            int j;
            for(j=i;j<=(len-1);j++)
                str[j] = str[j+1];
            len=len - 1;
            str[len]=' ';
        }
        else
            i++;
    }
}
void putchars(char str[])
{
    int i=0;
    while(str[i])
    {
        putchar(str[i]);
        i++;
    }
}
void main()
{
    char ipt1[50];
    printf("请输入一个字符串：");
    scanf("%s",ipt1);
    del_digit(ipt1);
    putchars(ipt1);
}
