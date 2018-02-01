/*
    用数组实现的字符串和用指针实现的字符串的相同点
*/
#include <stdio.h>
int main()
{
    int i;
    char str[] = "ABC";
    char *ptr = "123";

    for(i=0;str[i];i++)
        putchar(str[i]);
    putchar('\n');
    for(i=0;ptr[i];i++)
        putchar(ptr[i]);
    putchar('\n');

    printf("str = \"%s\"\n",str);
    printf("ptr = \"%s\"\n",ptr);

}

