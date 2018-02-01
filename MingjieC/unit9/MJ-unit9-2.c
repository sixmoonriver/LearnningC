/*
    如何让下述初始化赋值得到的字符串str变成空字符串
    char str[] = "ABC";
*/
#include <stdio.h>
int main(void)
{
    int i;
    char str[] = "ABC";
    str[0] = '\0';
    printf("字符串str的值是：%s\n",str);
    //for(i=0;i<sizeof(str);i++)
    //    str[i] = " ";
}
