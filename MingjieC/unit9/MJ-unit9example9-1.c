/*
    显示字符串字面量长度
*/

#include <stdio.h>

int main(void)
{
    char ss[] = "abcdefg1235";
    printf("字符串ss的值是%s\n",ss);
    printf("sizeof(\"abc\")  = %u\n",(unsigned)sizeof("123"));
}
