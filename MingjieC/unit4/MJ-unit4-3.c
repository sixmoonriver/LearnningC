#include <stdio.h>
/* 读取2个整数的值 ，然后计算出它们之间所有整数的和。 */

int main()
{
    int IPT1,IPT2,XIAO,DA,SUM1=0;
    puts("请输入两个整数：");
    printf("整数1：");scanf("%d",&IPT1);
    printf("整数2：");scanf("%d",&IPT2);
    if (IPT1 < IPT2)
    {
        XIAO = IPT1;
        DA = IPT2;
    }
    else
    {
        XIAO = IPT2;
        DA = IPT1;
    }
    do {
        SUM1 = SUM1 + XIAO;
        XIAO++;
    } while(XIAO <= DA );
    if (IPT1<IPT2)
        printf("大于%d小于%d的所有整数的和是：%d",IPT1,IPT2,SUM1);
    else
        printf("大于%d小于%d的所有整数的和是：%d",IPT2,IPT1,SUM1);
}
