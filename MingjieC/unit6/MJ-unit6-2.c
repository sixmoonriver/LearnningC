#include <stdio.h>
/* 创建一个函数，返回三个int型整数中的最小值。*/

int minof(int x ,int y,int z)
{
    int min = x;

    if(min>y) min = y;
    if(min>z) min = z;
    return (min);
}

int main()
{
    int ipt1,ipt2,ipt3;
    printf("请输入三个整数\n,整数A：");
    scanf("%d",&ipt1);
    printf("整数B：");
    scanf("%d",&ipt2);
    printf("整数C：");
    scanf("%d",&ipt3);
    printf("这三个整数中最小的数为：%d\n",minof(ipt1,ipt2,ipt3));
}
