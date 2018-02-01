/*
    将代码9-3中数组str的声明改为：
    char str[] = "ABC\0DEF"
    查看程序的执行结果
*/
#include <stdio.h>

int main(void)
{
    char ss[] = "ABCD\0EF";
    printf("字符串ss的值为%s.\n",ss);
}
