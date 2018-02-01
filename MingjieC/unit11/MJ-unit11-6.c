/*
    编写如下函数 实现与库函数atoi、atol、atof相同的功能
*/
#include <stdio.h>

int strtoi(const char *nptr)
{
    char *ptr ;
    ptr = nptr;
    while(*ptr++)
        (int)*ptr;
}

int main(void)
{
    char str[] = "12345";

    printf("str    = \"%s\"\n",str);
    printf("atoi(str) = %d\n",strtoi(str));
}

