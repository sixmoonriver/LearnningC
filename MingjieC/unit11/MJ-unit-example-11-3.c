/*
    数组和指针的不同点；
*/
#include <stdio.h>
int main(void)
{
    char str[] ="ABCD";
    char *ptr = "1234";

    str[0] = 'E';
    ptr = "5678";

    printf("str = %s\n",str);
    printf("ptr = %s\n",ptr);
}
