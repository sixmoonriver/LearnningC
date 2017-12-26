#include <stdio.h>
/* 编写一段程序，计算出输入的四个整数的最大值并显示 */

int main()
{
    int IPT1,IPT2,IPT3,IPT4,MAX;
    puts("请输入四个整数。");
    printf("整数A：");scanf("%d",&IPT1);
    printf("整数B：");scanf("%d",&IPT2);
    printf("整数C：");scanf("%d",&IPT3);
    printf("整数D：");scanf("%d",&IPT4);
    MAX = IPT1;
    if (IPT2 > MAX)
    {
         MAX = IPT2;
    }
    if (IPT3 > MAX)
    {
         MAX = IPT3;
    }
    if (IPT4 > MAX)
    {
         MAX = IPT4;
    }
    printf("这4个数的最大值为%d\n",MAX);
}
