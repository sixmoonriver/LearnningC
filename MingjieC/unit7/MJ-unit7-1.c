#include <stdio.h>
/* 编写程序确认：无符号整数位左移后的值等于乘以2的指数幂后的值；
   无符号整数右移后的值等于除以2的指数次幂的值 */
int mi(int x)
{
    int i,mi1=2;
    if(x>=0)
    {
        for(i=1;i<x;i++)
            mi1*=2;
    }
return (mi1);
}

void main()
{
    int i,ipt1,ws1,iptleft,iptright;
    printf("请输入一个整数：");
    scanf("%u",&ipt1);
    printf("请输入移动的位数：");
    scanf("%d",&ws1);
    iptleft = iptright = ipt1;
    for(i=ws1;i>0;i--)
    {
        iptright>>=1;
        iptleft<<=1;
    }
    printf("这个整数%d左移%d的值是：%d,%d\n",ipt1,ws1,iptleft,ipt1* mi(ws1));
    printf("这个整数%d右移%d的值是：%d,%d\n",ipt1,ws1,iptright,ipt1 / mi(ws1));
}

