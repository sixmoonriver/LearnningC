#include <stdio.h>
/* 编写rrotate函数，返回无符号数x右移n位后的值 */

unsigned rrotate(unsigned x,int n)
{
    int i;
    unsigned y;
    for(i=0;i<n;i++)
    {
        x>>=1;
    }
    return (x);
}

unsigned lrotate(unsigned x,int n)
{
    int i;
    unsigned y;
    for(i=0;i<n;i++)
    {
        x<<=1;
    }
    return (x);
}
void main()
{
    unsigned ipt1,ot1;
    int ws1;
    printf("请输入一个整数：");
    scanf("%u",&ipt1);
    printf("请输入移动的位数：");
    scanf("%d",&ws1);
    printf("%u右移%d后的值是%u\n",ipt1,ws1,rrotate(ipt1,ws1));
    printf("%u左移%d后的值是%u\n",ipt1,ws1,lrotate(ipt1,ws1));
}
