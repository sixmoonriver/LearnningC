#include <stdio.h>
/* 创建一个函数，返回两个int整数中的较小一数的值 */

int minof (int x,int y)
{
    return (x < y) ? x : y;
}

int main()
{
    int ipt1,ipt2;
    printf("请输入两个整数\n,整数A：");
    scanf("%d",&ipt1);
    printf("整数B：");
    scanf("%d",&ipt2);
    printf("这两个整数中最小的数为：%d\n",minof(ipt1,ipt2));

}
