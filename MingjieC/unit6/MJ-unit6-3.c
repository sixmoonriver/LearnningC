#include <stdio.h>
/* 创建一个函数，返回int型整数的立方 */

int threetimes(int x)
{
    return (x*x*x);
}

int main()
{
    int ipt1;
    printf("请输入一个整数A：");
    scanf("%d",&ipt1);
    printf("整数%d的三次方是%d\n",ipt1,threetimes(ipt1));
}
